open Jest;
open TestHelpers;
open CssCore;
open Glamor;

type timingFunction = value([`timingFunction]);
let linear: timingFunction = "linear" |> Obj.magic;
let ident: string => value(_) = Obj.magic;

type propV = [ `all | `ident];
type prop = value(propV);
type vlist('a) = [`list('a)];

let transitionProperty: value([< `none | propV | vlist(propV) | `universal]) => declaration =
  v => ("transitionProperty", v) |> Obj.magic;

type singleTransition = value([`singleTransition]);
let transitionValue = (prop: value([< propV]), time: time, timingFunction: timingFunction): singleTransition =>
  {j|$prop $time $timingFunction|j} |> Obj.magic;
let transition: value([< singleTransition | vlist(singleTransition) | `none | `universal]) => declaration =
  v => ("transition", v) |> Obj.magic;

let _ =

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
      many([])), /* shouldn't be allowed */
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
    transitionProperty(many([])), /* shouldn't be allowed */
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

describe("cons - function", () => {
  let empty: value(vlist(_)) =
    "" |> Obj.magic;
  let cons = (v: value([< prop]), vs: value(vlist(propV))): value(vlist(propV)) =>
    switch (Obj.magic(vs)) {
    | "" => v |> Obj.magic
    | vs => {j|$v, $vs|j} |> Obj.magic
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
    transitionProperty(
      cons(all, cons(ident("bar"), empty))),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(empty), /* shouldn't be allowed */
    ("transitionProperty", ""));


  /* Seems cons can't be generalized. That's unfortunate */
  module Transition = {
    let empty: value(vlist(_)) =
      "" |> Obj.magic;
    let cons = (v: singleTransition, vs: value(vlist([`singleTransition]))): value(vlist([`singleTransition])) =>
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

  let empty: value([vlist(propV)]) =
    "" |> Obj.magic;
  let (**) = (v: value([< prop]), vs: value(vlist(propV))): value(vlist(propV)) =>
    switch (Obj.magic(vs)) {
    | "" => v |> Obj.magic
    | vs => {j|$v, $vs|j} |> Obj.magic
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
    transitionProperty(
      all ** ident("bar") ** empty),
    ("transitionProperty", "all, bar"));
  testDeclaration(
    transitionProperty(empty), /* shouldn't be allowed */
    ("transitionProperty", ""));


  /* Seems cons can't be generalized. That's unfortunate */
  module Transition = {
    let empty: value(vlist(_)) =
      "" |> Obj.magic;
    let (**) = (v: singleTransition, vs: value(vlist([`singleTransition]))): value(vlist([`singleTransition])) =>
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
      transitionValue(all, s(1.), linear) **
      transitionValue(ident("foo"), ms(400), linear) **
      empty
    )),
    ("transition", "all 1s linear, foo 400ms linear"));
});