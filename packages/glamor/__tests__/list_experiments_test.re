open Jest;
open TestHelpers;
open CssCore;
open Glamor;

let ident: string => value(_) = Obj.magic;
type propV = [ `all | `ident];
type prop = value(propV);
type vlist('a) = [`list('a)];

let transitionProperty: value([< `none | propV | vlist(propV) | `universal]) => declaration =
  v => ("transitionProperty", v) |> Obj.magic;

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
});

describe("cons - function", () => {
  let empty: value([vlist(propV)]) =
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
});