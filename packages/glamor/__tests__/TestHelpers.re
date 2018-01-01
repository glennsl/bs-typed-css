open Jest;
open Expect;
open Glamor;

let testDeclaration = (decl, expected) =>
  test(Js.Json.stringify(decl |> Obj.magic), () =>
    expect(css([decl])) |> toEqual(Js.Dict.fromList([expected]) |> Obj.magic));