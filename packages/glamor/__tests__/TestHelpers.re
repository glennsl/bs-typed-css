open Jest;
open Expect;
open TypedGlamor;
open Core;

include TypedGlamor__InternalHelpers;

[@bs.val]
external stringifyDeclaration : declaration => string = "JSON.stringify";
let asDeclaration: ((string, string)) => declaration =
  pair => Obj.magic([pair]);

let testDeclaration = (decl, expected) =>
  test(decl |> stringifyDeclaration, () =>
    expect(decl) |> toEqual(expected |> asDeclaration)
  );

let testValue = (value, expected) => {
  let stringValue: string = value |> Value.unpack;
  test(stringValue, () =>
    expect(stringValue) |> toEqual(expected)
  );
};

let testSelector = (selector, expected: (string, list((string, string)))) => {
  let (k, decls) =
    try (selector |> Selector.unpack |> List.hd) {
    | _ => failwith("selector should be singular")
    };

  let (k', decls') = expected;
  test(k, () =>
    expect((k, decls))
    |> toEqual((
         k',
         decls' |> List.map(asDeclaration) |> Declarations.toDict,
       ))
  );
};