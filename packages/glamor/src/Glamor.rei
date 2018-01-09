/*include (module type of CssCore.Types);*/
module Core: {
  include (module type of Glamor__Core.Core);
};
open Core;
include Values;
include Properties;

let ltr: value([`ltr]);
let rtl: value([`rtl]);

let odd: value([`odd]);
let even: value([`even]);
let anplusb: (int, int) => value([`anplusb]);

type nth = [`anplusb | `even | `odd];

let select: (string, list(declaration)) => declaration;
let active: list(declaration) => declaration;
/*let any: string => list(declaration) => declaration;*/
let checked: list(declaration) => declaration;
let dir: value([< `ltr | `rtl]) => list(declaration) => declaration;
let disabled: list(declaration) => declaration;
let empty: list(declaration) => declaration;
let enabled: list(declaration) => declaration;
let first: list(declaration) => declaration;
let firstChild: list(declaration) => declaration;
let firstOfType: list(declaration) => declaration;
let fullscreen: list(declaration) => declaration;
let focus: list(declaration) => declaration;
let hover: list(declaration) => declaration;
let visited: list(declaration) => declaration;
let indeterminate: list(declaration) => declaration;
let invalid: list(declaration) => declaration;
let lang: string => list(declaration) => declaration;
let lastChild: list(declaration) => declaration;
let lastOfType: list(declaration) => declaration;
let link: list(declaration) => declaration;
let nthChild: value([< nth]) => list(declaration) => declaration;
let nthLastChild: value([< nth]) => list(declaration) => declaration;
let nthLastOfType: value([< nth]) => list(declaration) => declaration;
let nthOfType: value([< nth]) => list(declaration) => declaration;
let onlyChild: list(declaration) => declaration;
let onlyOfType: list(declaration) => declaration;
let optional: list(declaration) => declaration;
let outOfRange: list(declaration) => declaration;
let readWrite: list(declaration) => declaration;
let required: list(declaration) => declaration;
let root: list(declaration) => declaration;
let scope: list(declaration) => declaration;
let target: list(declaration) => declaration;
let valid: list(declaration) => declaration;

let css: list(declaration) => string;

let null: value(_);
let unsafe: (string, string) => declaration;
let label: string => declaration;