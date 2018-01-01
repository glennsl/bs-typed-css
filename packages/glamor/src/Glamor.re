include CssCore.Types;

external asValue : string => value(_) = "%identity";

type decl('a) = (string, value('a));
external asDeclaration : decl(_) => declaration = "%identity";
external getDeclaration : declaration => decl(_) = "%identity";

let inherit_ = "inherit" |> asValue;
let initial = "initial" |> asValue;
let unset = "unset" |> asValue;

let none = "none" |> asValue;
let auto = "auto" |> asValue;

let em = n => {j|$(n)em|j} |> asValue;
let ex = n => {j|$(n)ex|j} |> asValue;
let inch = n => {j|$(n)in|j} |> asValue;
let cm = n => {j|$(n)cm|j} |> asValue;
let mm = n => {j|$(n)mm|j} |> asValue;
let pt = n => {j|$(n)pt|j} |> asValue;
let pc = n => {j|$(n)pc|j} |> asValue;
let px = n => {j|$(n)px|j} |> asValue;
let zero = "0" |> asValue;

let pct = n => {j|$n%|j} |> asValue;
let url = url => {j|url($url)|j} |> asValue;


let margin = value =>
  ("margin", value) |> asDeclaration;
let margin2 = (~v, ~h) =>
  ("margin", {j|$v $h|j} |> asValue) |> asDeclaration;
let margin3 = (~top, ~h, ~bottom) =>
  ("margin", {j|$top $h $bottom|j} |> asValue) |> asDeclaration;
let margin4 = (~top, ~right, ~bottom, ~left) =>
  ("margin", {j|$top $right $bottom $left|j} |> asValue) |> asDeclaration;
let marginTop = value =>
  ("marginTop", value) |> asDeclaration;
let marginRight = value =>
  ("marginRight", value) |> asDeclaration;
let marginBottom = value =>
  ("marginBottom", value) |> asDeclaration;
let marginLeft = value =>
  ("marginLeft", value) |> asDeclaration;

let padding = value     => ("padding", value) |> asDeclaration;

let css = declarations =>
  declarations |> List.map(getDeclaration)
               |> Js.Dict.fromList;