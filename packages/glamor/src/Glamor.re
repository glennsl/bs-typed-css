include CssCore.Types;

external asValue : string => value(_) = "%identity";

type decl('a) = (string, value('a));
external asDeclaration : decl(_) => declaration = "%identity";
external getDeclaration : declaration => decl(_) = "%identity";


/*********
 * Values
 */

/* universal */
let inherit_ = "inherit" |> asValue;
let initial = "initial" |> asValue;
let unset = "unset" |> asValue;

/* length */
let em = n => {j|$(n)em|j} |> asValue;
let ex = n => {j|$(n)ex|j} |> asValue;
let inch = n => {j|$(n)in|j} |> asValue;
let cm = n => {j|$(n)cm|j} |> asValue;
let mm = n => {j|$(n)mm|j} |> asValue;
let pt = n => {j|$(n)pt|j} |> asValue;
let pc = n => {j|$(n)pc|j} |> asValue;
let px = n => {j|$(n)px|j} |> asValue;
let zero = "0" |> asValue;

/* percentage */
let pct = n => {j|$n%|j} |> asValue;

/* url */
let url = url => {j|url($url)|j} |> asValue;

/* color */
let transparent = "transparent" |> asValue;

/* ad-hoc */
let none = "none" |> asValue;
let auto = "auto" |> asValue;

let thin = "thin" |> asValue;
let medium = "medium" |> asValue;
let thick = "thick" |> asValue;

let hidden = "hidden" |> asValue;
let dotted = "dotted" |> asValue;
let dashed = "dashed" |> asValue;
let solid = "solid" |> asValue;
let double = "double" |> asValue;
let groove = "groove" |> asValue;
let ridge = "ridge" |> asValue;
let inset = "inset" |> asValue;
let outset = "outset" |> asValue;


/*********
 * Properties
 */
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


let padding = value =>
  ("padding", value) |> asDeclaration;
let padding2 = (~v, ~h) =>
  ("padding", {j|$v $h|j} |> asValue) |> asDeclaration;
let padding3 = (~top, ~h, ~bottom) =>
  ("padding", {j|$top $h $bottom|j} |> asValue) |> asDeclaration;
let padding4 = (~top, ~right, ~bottom, ~left) =>
  ("padding", {j|$top $right $bottom $left|j} |> asValue) |> asDeclaration;
let paddingTop = value =>
  ("paddingTop", value) |> asDeclaration;
let paddingRight = value =>
  ("paddingRight", value) |> asDeclaration;
let paddingBottom = value =>
  ("paddingBottom", value) |> asDeclaration;
let paddingLeft = value =>
  ("paddingLeft", value) |> asDeclaration;

let border = (~width, ~style, ~color) =>
  ("border", {j|$width $style $color|j} |> asValue) |> asDeclaration;
let borderWidth = value =>
  ("borderWidth", value) |> asDeclaration;
let borderTopWidth = value =>
  ("borderTopWidth", value) |> asDeclaration;
let borderRightWidth = value =>
  ("borderRightWidth", value) |> asDeclaration;
let borderBottomWidth = value =>
  ("borderBottomWidth", value) |> asDeclaration;
let borderLeftWidth = value =>
  ("borderLeftWidth", value) |> asDeclaration;
let borderStyle = value =>
  ("borderStyle", value) |> asDeclaration;
let borderTopStyle = value =>
  ("borderTopStyle", value) |> asDeclaration;
let borderRightStyle = value =>
  ("borderRightStyle", value) |> asDeclaration;
let borderBottomStyle = value =>
  ("borderBottomStyle", value) |> asDeclaration;
let borderLeftStyle = value =>
  ("borderLeftStyle", value) |> asDeclaration;
let borderColor = value =>
  ("borderColor", value) |> asDeclaration;
let borderTopColor = value =>
  ("borderTopColor", value) |> asDeclaration;
let borderRightColor = value =>
  ("borderRightColor", value) |> asDeclaration;
let borderBottomColor = value =>
  ("borderBottomColor", value) |> asDeclaration;
let borderLeftColor = value =>
  ("borderLeftColor", value) |> asDeclaration;

let css = declarations =>
  declarations |> List.map(getDeclaration)
               |> Js.Dict.fromList;