open Jest;
open Expect;
open Glamor;
open Core;

type decl('a) = (string, string);
external getValue : value(_) => string = "%identity";
external getDeclaration : declaration => decl(_) = "%identity";
external stringifyDeclaration : declaration => string = "JSON.stringify";

let testDeclaration = (decl: declaration, expected) => {
  test(decl |> stringifyDeclaration, () =>
    expect(Js.Dict.fromList([decl |> getDeclaration])) |> toEqual(Js.Dict.fromList([expected])));
};

let testValue = (value: value(_), expected) => {
  let stringValue: string = value |> getValue;
  test(stringValue, () =>
    expect(stringValue) |> toEqual(expected))
};