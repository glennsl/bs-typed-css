/*include (module type of CssCore.Types);*/
open CssCore.Types;
include CssCore.Values;
include CssCore.Declarations;

let style: list(declaration) => Js.Dict.t(value(_));