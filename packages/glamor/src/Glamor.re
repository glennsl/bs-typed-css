open CssCore;


/*********
 * Internal helpers
 */
external asValue : string => value(_) = "%identity";
external getValue : value(_) => string = "%identity";

type decl('a) = (string, value('a));
external asDeclaration : decl(_) => declaration = "%identity";
external getDeclaration : declaration => decl(_) = "%identity";

let prop = name =>
  value => (name, value) |> asDeclaration;


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
let ch = n => {j|$(n)ch|j} |> asValue;
let rem = n => {j|$(n)rem|j} |> asValue;

let vw = n => {j|$(n)vw|j} |> asValue;
let vh = n => {j|$(n)vh|j} |> asValue;
let vmin = n => {j|$(n)vmin|j} |> asValue;
let vmax = n => {j|$(n)vmax|j} |> asValue;

let cm = n => {j|$(n)cm|j} |> asValue;
let mm = n => {j|$(n)mm|j} |> asValue;
let q = n => {j|$(n)q|j} |> asValue;
let inch = n => {j|$(n)in|j} |> asValue;
let pc = n => {j|$(n)pc|j} |> asValue;
let pt = n => {j|$(n)pt|j} |> asValue;
let px = n => {j|$(n)px|j} |> asValue;

let zero = "0" |> asValue;

/* percentage */
let pct = n => {j|$n%|j} |> asValue;

/* angle */
let rad = i => {j|$(i)rad|j} |> asValue;
let grad = i => {j|$(i)grad|j} |> asValue;
let deg = i => {j|$(i)deg|j} |> asValue;
let turn = i => {j|$(i)turn|j} |> asValue;

/* url */
let url = url => {j|url($url)|j} |> asValue;

/* color */
let rgb = (r, g, b) => {j|rgb($r, $g, $b)|j} |> asValue;

let rgba = (r, g, b, a) => {j|rgba($r, $g, $b, $a)|j} |> asValue;

let hsl = (h, s, l) => {j|hsl($h, $s%, $l%)|j} |> asValue;

let hsla = (h, s, l, a) => {j|hsla($h, $s%, $l%, $a)|j} |> asValue;
let hex = v => "#" ++ Js.Int.toStringWithRadix(~radix=16, v) |> asValue;

let currentColor = "currentColor" |> asValue;
let transparent = "transparent" |> asValue;

let aliceblue = "aliceblue" |> asValue;
let antiquewhite = "antiquewhite" |> asValue;
let aqua = "aqua" |> asValue;
let aquamarine = "aquamarine" |> asValue;
let azure = "azure" |> asValue;
let beige = "beige" |> asValue;
let bisque = "bisque" |> asValue;
let black = "black" |> asValue;
let blanchedalmond = "blanchedalmond" |> asValue;
let blue = "blue" |> asValue;
let blueviolet = "blueviolet" |> asValue;
let brown = "brown" |> asValue;
let burlywood = "burlywood" |> asValue;
let cadetblue = "cadetblue" |> asValue;
let chartreuse = "chartreuse" |> asValue;
let chocolate = "chocolate" |> asValue;
let coral = "coral" |> asValue;
let cornflowerblue = "cornflowerblue" |> asValue;
let cornsilk = "cornsilk" |> asValue;
let crimson = "crimson" |> asValue;
let cyan = "cyan" |> asValue;
let darkblue = "darkblue" |> asValue;
let darkcyan = "darkcyan" |> asValue;
let darkgoldenrod = "darkgoldenrod" |> asValue;
let darkgray = "darkgray" |> asValue;
let darkgrey = "darkgrey" |> asValue;
let darkgreen = "darkgreen" |> asValue;
let darkkhaki = "darkkhaki" |> asValue;
let darkmagenta = "darkmagenta" |> asValue;
let darkolivegreen = "darkolivegreen" |> asValue;
let darkorange = "darkorange" |> asValue;
let darkorchid = "darkorchid" |> asValue;
let darkred = "darkred" |> asValue;
let darksalmon = "darksalmon" |> asValue;
let darkseagreen = "darkseagreen" |> asValue;
let darkslateblue = "darkslateblue" |> asValue;
let darkslategray = "darkslategray" |> asValue;
let darkslategrey = "darkslategrey" |> asValue;
let darkturquoise = "darkturquoise" |> asValue;
let darkviolet = "darkviolet" |> asValue;
let deeppink = "deeppink" |> asValue;
let deepskyblue = "deepskyblue" |> asValue;
let dimgray = "dimgray" |> asValue;
let dimgrey = "dimgrey" |> asValue;
let dodgerblue = "dodgerblue" |> asValue;
let firebrick = "firebrick" |> asValue;
let floralwhite = "floralwhite" |> asValue;
let forestgreen = "forestgreen" |> asValue;
let fuchsia = "fuchsia" |> asValue;
let gainsboro = "gainsboro" |> asValue;
let ghostwhite = "ghostwhite" |> asValue;
let gold = "gold" |> asValue;
let goldenrod = "goldenrod" |> asValue;
let gray = "gray" |> asValue;
let grey = "grey" |> asValue;
let green = "green" |> asValue;
let greenyellow = "greenyellow" |> asValue;
let honeydew = "honeydew" |> asValue;
let hotpink = "hotpink" |> asValue;
let indianred = "indianred" |> asValue;
let indigo = "indigo" |> asValue;
let ivory = "ivory" |> asValue;
let khaki = "khaki" |> asValue;
let lavender = "lavender" |> asValue;
let lavenderblush = "lavenderblush" |> asValue;
let lawngreen = "lawngreen" |> asValue;
let lemonchiffon = "lemonchiffon" |> asValue;
let lightblue = "lightblue" |> asValue;
let lightcoral = "lightcoral" |> asValue;
let lightcyan = "lightcyan" |> asValue;
let lightgoldenrodyellow = "lightgoldenrodyellow" |> asValue;
let lightgray = "lightgray" |> asValue;
let lightgrey = "lightgrey" |> asValue;
let lightgreen = "lightgreen" |> asValue;
let lightpink = "lightpink" |> asValue;
let lightsalmon = "lightsalmon" |> asValue;
let lightseagreen = "lightseagreen" |> asValue;
let lightskyblue = "lightskyblue" |> asValue;
let lightslategray = "lightslategray" |> asValue;
let lightslategrey = "lightslategrey" |> asValue;
let lightsteelblue = "lightsteelblue" |> asValue;
let lightyellow = "lightyellow" |> asValue;
let lime = "lime" |> asValue;
let limegreen = "limegreen" |> asValue;
let linen = "linen" |> asValue;
let magenta = "magenta" |> asValue;
let maroon = "maroon" |> asValue;
let mediumaquamarine = "mediumaquamarine" |> asValue;
let mediumblue = "mediumblue" |> asValue;
let mediumorchid = "mediumorchid" |> asValue;
let mediumpurple = "mediumpurple" |> asValue;
let mediumseagreen = "mediumseagreen" |> asValue;
let mediumslateblue = "mediumslateblue" |> asValue;
let mediumspringgreen = "mediumspringgreen" |> asValue;
let mediumturquoise = "mediumturquoise" |> asValue;
let mediumvioletred = "mediumvioletred" |> asValue;
let midnightblue = "midnightblue" |> asValue;
let mintcream = "mintcream" |> asValue;
let mistyrose = "mistyrose" |> asValue;
let moccasin = "moccasin" |> asValue;
let navajowhite = "navajowhite" |> asValue;
let navy = "navy" |> asValue;
let oldlace = "oldlace" |> asValue;
let olive = "olive" |> asValue;
let olivedrab = "olivedrab" |> asValue;
let orange = "orange" |> asValue;
let orangered = "orangered" |> asValue;
let orchid = "orchid" |> asValue;
let palegoldenrod = "palegoldenrod" |> asValue;
let palegreen = "palegreen" |> asValue;
let paleturquoise = "paleturquoise" |> asValue;
let palevioletred = "palevioletred" |> asValue;
let papayawhip = "papayawhip" |> asValue;
let peachpuff = "peachpuff" |> asValue;
let peru = "peru" |> asValue;
let pink = "pink" |> asValue;
let plum = "plum" |> asValue;
let powderblue = "powderblue" |> asValue;
let purple = "purple" |> asValue;
let red = "red" |> asValue;
let rosybrown = "rosybrown" |> asValue;
let royalblue = "royalblue" |> asValue;
let saddlebrown = "saddlebrown" |> asValue;
let salmon = "salmon" |> asValue;
let sandybrown = "sandybrown" |> asValue;
let seagreen = "seagreen" |> asValue;
let seashell = "seashell" |> asValue;
let sienna = "sienna" |> asValue;
let silver = "silver" |> asValue;
let skyblue = "skyblue" |> asValue;
let slateblue = "slateblue" |> asValue;
let slategray = "slategray" |> asValue;
let slategrey = "slategrey" |> asValue;
let snow = "snow" |> asValue;
let springgreen = "springgreen" |> asValue;
let steelblue = "steelblue" |> asValue;
let tan = "tan" |> asValue;
let teal = "teal" |> asValue;
let thistle = "thistle" |> asValue;
let tomato = "tomato" |> asValue;
let turquoise = "turquoise" |> asValue;
let violet = "violet" |> asValue;
let wheat = "wheat" |> asValue;
let white = "white" |> asValue;
let whitesmoke = "whitesmoke" |> asValue;
let yellow = "yellow" |> asValue;
let yellowgreen = "yellowgreen" |> asValue;

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

let border = value =>
  ("border", value) |> asDeclaration;
let border2 = (~width=?, ~color=?, style) => {
  let value =
    switch ((width, color)) {
    | (Some(w), Some(c))  => {j|$w $style $c|j}
    | (Some(w), None)     => {j|$w $style|j}
    | (None, Some(c))     => {j|$style $c|j}
    | (None, None)        => getValue(style)
    };
  ("border", value |> asValue) |> asDeclaration
};
let border3 = (~width, ~style, ~color) =>
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

let borderRadius = value =>
  ("borderRadius", value) |> asDeclaration;
let borderTopRightRadius = v => prop("borderTopRightRadius", v);
let borderTopRightRadius2 = (~v, ~h) =>
  prop("borderTopRightRadius", {j|$v $h|j} |> asValue);
let borderTopLeftRadius = v => prop("borderTopLeftRadius", v);
let borderTopLeftRadius2 = (~v, ~h) =>
  prop("borderTopLeftRadius", {j|$v $h|j} |> asValue);
let borderBottomRightRadius = v => prop("borderBottomRightRadius", v);
let borderBottomRightRadius2 = (~v, ~h) =>
  prop("borderBottomRightRadius", {j|$v $h|j} |> asValue);
let borderBottomLeftRadius = v => prop("borderBottomLeftRadius", v);
let borderBottomLeftRadius2 = (~v, ~h) =>
  prop("borderBottomLeftRadius", {j|$v $h|j} |> asValue);

/*********
 * Glamor
 */
let css = declarations =>
  declarations |> List.map(getDeclaration)
               |> Js.Dict.fromList;