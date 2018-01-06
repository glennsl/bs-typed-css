open Jest;
open TestHelpers;
open Glamor;
open Core;

type timingFunction = value([`timingFunction]);
let linear: timingFunction = "linear" |> Obj.magic;
let ident: string => value([`ident]) = Obj.magic;
let all: value([`all]) = "all" |> Obj.magic;

type propV = [ `all | `ident];
type prop = value(propV);
type vlist('a) = [`list('a)];

let transitionProperty: value([< `none | propV | vlist(propV) | `universal]) => declaration =
  v => ("transitionProperty", v) |> Obj.magic;

type singleTransition = value([`singleTransition]);
let transitionValue = (prop: value([< propV]), time: time, timingFunction: timingFunction): singleTransition =>
  {j|$prop $time $timingFunction|j} |> Obj.magic;
let transition: value([< `singleTransition | vlist(singleTransition) | `none | `universal]) => declaration =
  v => ("transition", v) |> Obj.magic;

let _ =

/* These broke when removing the equality between `value('a)` and `'a`
describe("many - coercion", () => {
  let many = values => String.concat(", ", values |> List.map(Obj.magic)) |> Obj.magic;
  
  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));
  testDeclaration(
    transitionProperty(
      many([all :> prop, ident("bar") :> prop])),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(
      many([])), /* shouldn't be allowed? */
    ("transitionProperty", ""));


  testDeclaration(
    transition(none),
    ("transition", "none"));
  testDeclaration(
    transition(
      transitionValue(all, s(1.), linear)),
    ("transition", "all 1s linear"));
  testDeclaration(
    transition(many([
      transitionValue(all, s(1.), linear),
      transitionValue(ident("foo"), ms(400), linear)
    ])),
    ("transition", "all 1s linear, foo 400ms linear"));
});


describe("many - conversion function", () => {
  let many = values => String.concat(", ", values |> List.map(Obj.magic)) |> Obj.magic;
  let prop = (v: value([< propV])) =>
    (v :> prop);
  
  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));
  testDeclaration(
    transitionProperty(
      many([prop(all), prop(ident("bar"))])),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(many([])), /* shouldn't be allowed? */
    ("transitionProperty", ""));


  /* The transitionValue function serves the same purpose as the prop function here */
  testDeclaration(
    transition(none),
    ("transition", "none"));
  testDeclaration(
    transition(
      transitionValue(all, s(1.), linear)),
    ("transition", "all 1s linear"));
  testDeclaration(
    transition(many([
      transitionValue(all, s(1.), linear),
      transitionValue(ident("foo"), ms(400), linear)
    ])),
    ("transition", "all 1s linear, foo 400ms linear"));
});
*/

describe("cons - function", () => {
  module TransitionProperty = {
    let empty: value(vlist(_)) =
      "" |> Obj.magic;
    let cons = (v: value([< propV]), vs: value(vlist(propV))): value(vlist(propV)) =>
      switch (Obj.magic(vs)) {
      | "" => v |> Obj.magic
      | vs => {j|$v, $vs|j} |> Obj.magic
      };
  };
  
  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));
  testDeclaration(
    transitionProperty(TransitionProperty.(
      cons(all, cons(ident("bar"), empty))
    )),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(TransitionProperty.empty), /* shouldn't be allowed? */
    ("transitionProperty", ""));


  /* Seems cons can't be generalized. That's unfortunate */
  module Transition = {
    let empty: value(vlist(_)) =
      "" |> Obj.magic;
    let cons = (v: singleTransition, vs: value(vlist(singleTransition))): value(vlist(singleTransition)) =>
      switch (Obj.magic(vs)) {
      | "" => v |> Obj.magic
      | vs => {j|$v, $vs|j} |> Obj.magic
      };
  };

  testDeclaration(
    transition(none),
    ("transition", "none"));
  testDeclaration(
    transition(
      transitionValue(all, s(1.), linear)),
    ("transition", "all 1s linear"));
  testDeclaration(
    transition(Transition.(
      cons(transitionValue(all, s(1.), linear),
      cons(transitionValue(ident("foo"), ms(400), linear),
      empty))
    )),
    ("transition", "all 1s linear, foo 400ms linear"));
});

describe("cons - infix operator", () => {
  /* 4.04 enables overloading the actual list syntax, which would be nice */

  module TransitionProperty = {
    let empty: value([vlist(propV)]) =
      "" |> Obj.magic;
    let (**) = (v: value([< propV]), vs: value(vlist(propV))): value(vlist(propV)) =>
      switch (Obj.magic(vs)) {
      | "" => v |> Obj.magic
      | vs => {j|$v, $vs|j} |> Obj.magic
      };
  };
  
  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));
  testDeclaration(
    transitionProperty({
      open! TransitionProperty;
      all ** ident("bar") ** empty
    }),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(TransitionProperty.empty), /* shouldn't be allowed? */
    ("transitionProperty", ""));


  /* Seems cons can't be generalized. That's unfortunate */
  module Transition = {
    let empty: value(vlist(_)) =
      "" |> Obj.magic;
    let (**) = (v: singleTransition, vs: value(vlist(singleTransition))): value(vlist(singleTransition)) =>
      switch (Obj.magic(vs)) {
      | "" => v |> Obj.magic
      | vs => {j|$v, $vs|j} |> Obj.magic
      };
  };

  testDeclaration(
    transition(none),
    ("transition", "none"));
  testDeclaration(
    transition(
      transitionValue(all, s(1.), linear)),
    ("transition", "all 1s linear"));
  testDeclaration(
    transition({
      open! Transition;
      transitionValue(all, s(1.), linear) **
      transitionValue(ident("foo"), ms(400), linear) **
      empty
    }),
    ("transition", "all 1s linear, foo 400ms linear"));
});

describe("plural propoerty function", () => {
  let transitionProperties: list(value([< propV])) => declaration =
    fun | [] => ("transitionProperty", "none") |> Obj.magic
        | vs => ("transitionProperty", String.concat(", ", vs |> Obj.magic)) |> Obj.magic;
  let transitions: list((value([< `all | `ident]), time, timingFunction, time)) => declaration =
    fun | [] => ("transition", "none") |> Obj.magic
        | vs => ("transition", vs |> List.map(((prop, dur, fn, delay)) => {j|$prop $dur $fn $delay|j}) |> String.concat(", ")) |> Obj.magic;

  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));
  testDeclaration(
    transitionProperties([ident("all") /* all -- should be allowed */, ident("bar")]),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperties([]),
    ("transitionProperty", "none"));


  /* The transitionValue function serves the same purpose as the prop function here */
  testDeclaration(
    transition(none),
    ("transition", "none"));
  /* should be allowed
  testDeclaration(
    transition(
      (all, s(1.), linear)),
    ("transition", "all 1s linear"));
  */
  testDeclaration(
    transitions([
      (ident("all") /* all -- should be allowed */, s(1.), linear, ms(200)),
      (ident("foo"), ms(400), linear, s(1.2))
    ]),
    ("transition", "all 1s linear 200ms, foo 400ms linear 1.2s"));
  testDeclaration(
    transitions([]),
    ("transition", "none"));
});