open Jest;
open Expect;
open Glamor;
open Core;

type decl('a) = (string, string);
external getValue : value(_) => string = "%identity";
external getDeclaration : declaration => decl(_) = "%identity";
[@bs.val] external stringifyDeclaration : declaration => string = "JSON.stringify";
external getSelector : declaration => (string, Js.Dict.t(string)) = "%identity";
let asDict : list(declaration) => Js.Dict.t(string) = declarations =>
  declarations |> List.map(getDeclaration)
               |> Js.Dict.fromList;

let testDeclaration = (decl, expected) =>
  test(decl |> stringifyDeclaration, () =>
    expect(Js.Dict.fromList([decl |> getDeclaration])) |> toEqual(Js.Dict.fromList([expected])));

let testValue = (value, expected) => {
  let stringValue: string = value |> getValue;
  test(stringValue, () =>
    expect(stringValue) |> toEqual(expected))
};

let testSelector = (selector, expected) => {
  let (k, decls) = selector |> getSelector;
  let (k', decl') = expected;
  test(k, () => 
    expect((k, decls)) |> toEqual((k', decl' |> Js.Dict.fromList)));
};