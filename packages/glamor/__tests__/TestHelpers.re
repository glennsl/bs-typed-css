open Jest;
open Expect;
open Glamor;
open Core;

let testDeclaration = (decl: declaration, expected) => {
  let name = Js.Json.stringify(decl |> Obj.magic);
  test(name, () =>
    expect(Js.Dict.fromList([decl |> Obj.magic])) |> toEqual(Js.Dict.fromList([expected]) |> Obj.magic));
};

let testValue = (value: value(_), expected) => {
  let stringValue: string = value |> Obj.magic;
  test(stringValue, () =>
    expect(stringValue) |> toEqual(expected))
};