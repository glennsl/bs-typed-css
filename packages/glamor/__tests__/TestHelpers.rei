open TypedGlamor;
open Core;

let testDeclaration: (declaration, (string, string)) => unit;
let testValue: (value(_), string) => unit;
let testSelector: (declaration, (string, list((string, string)))) => unit;