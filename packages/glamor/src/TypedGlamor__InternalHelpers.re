open TypedGlamor__Core.Core;

module Value = {
  external pack : string => value(_) = "%identity";
  external unpack : value(_) => string = "%identity";
};

module Values = {
  external unpack : list(value(_)) => list(string) = "%identity";

  let join = vs =>
    vs |> unpack |> String.concat(", ") |> Value.pack;
};

module Declaration = {
  type t('a) = list((string, value('a)));

  external pack : t(_) => declaration = "%identity";
  external unpack : declaration => t(_) = "%identity";
};

module Declarations = {
  external unpack : list(declaration) => list(Declaration.t(_)) = "%identity";
  let toDict : list(declaration) => Js.Dict.t(value(_)) = declarations =>
    declarations |> unpack
                 |> List.flatten
                 |> Js.Dict.fromList;
};

module Selector = {
  external pack : list((string, Js.Dict.t(value(_)))) => declaration = "%identity";
  external unpack : declaration => list((string, Js.Dict.t(value(_)))) = "%identity";
};
