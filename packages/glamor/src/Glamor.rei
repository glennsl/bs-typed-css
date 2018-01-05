/*include (module type of CssCore.Types);*/
module Core: {
  include (module type of CssCore);
};
open Core;
include Values;
include Properties;

let css: list(declaration) => string;