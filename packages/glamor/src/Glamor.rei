/*include (module type of CssCore.Types);*/
open CssCore;
include Values;
include Properties;

let css: list(declaration) => Js.Dict.t(value(_));