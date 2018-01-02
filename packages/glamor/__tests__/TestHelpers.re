open Jest;
open Expect;
open CssCore;
open Glamor;

let testDeclaration = (decl: declaration, expected) => {
  let name = Js.Json.stringify(decl |> Obj.magic);
  test(name, () =>
    expect(css([decl])) |> toEqual(Js.Dict.fromList([expected]) |> Obj.magic));
};

let testValue = (value: value(_), expected) => {
  let stringValue: string = value |> Obj.magic;
  test(stringValue, () =>
    expect(stringValue) |> toEqual(expected))
};