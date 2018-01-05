module Core = CssCore;
open Core;


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
let rad = n => {j|$(n)rad|j} |> asValue;
let grad = n => {j|$(n)grad|j} |> asValue;
let deg = n => {j|$(n)deg|j} |> asValue;
let turn = n => {j|$(n)turn|j} |> asValue;

/* time */
let s = n => {j|$(n)s|j} |> asValue;
let ms = n => {j|$(n)ms|j} |> asValue;

/* url */
let url = url => {j|url($url)|j} |> asValue;

/* color */
let rgb = (r, g, b) => {j|rgb($r, $g, $b)|j} |> asValue;

let rgba = (r, g, b, a) => {j|rgba($r, $g, $b, $a)|j} |> asValue;

let hsl = (h, s, l) => {j|hsl($h, $s%, $l%)|j} |> asValue;

let hsla = (h, s, l, a) => {j|hsla($h, $s%, $l%, $a)|j} |> asValue;
let hex = value => "#" ++ Js.Int.toStringWithRadix(~radix=16, value) |> asValue;

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

/* Custom Identifier */
let ident = asValue;

/* Animatable Properties */
module AnimatableProperty = {
  let all = "all" |> asValue;
  let backdropFilter = "backdrop-filter" |> asValue;
  let background = "background" |> asValue;
  let backgroundColor = "background-color" |> asValue;
  let backgroundPosition = "background-position" |> asValue;
  let backgroundSize = "background-size" |> asValue;
  let border = "border" |> asValue;
  let borderBottom = "border-bottom" |> asValue;
  let borderBottomColor = "border-bottom-color" |> asValue;
  let borderBottomLeftRadius = "border-bottom-left-radius" |> asValue;
  let borderBottomRightRadius = "border-bottom-right-radius" |> asValue;
  let borderBottomWidth = "border-bottom-width" |> asValue;
  let borderColor = "border-color" |> asValue;
  let borderLeft = "border-left" |> asValue;
  let borderLeftColor = "border-left-color" |> asValue;
  let borderLeftWidth = "border-left-width" |> asValue;
  let borderRadius = "border-radius" |> asValue;
  let borderRight = "border-right" |> asValue;
  let borderRightColor = "border-right-color" |> asValue;
  let borderRightWidth = "border-right-width" |> asValue;
  let borderTop = "border-top" |> asValue;
  let borderTopColor = "border-top-color" |> asValue;
  let borderTopLeftRadius = "border-top-left-radius" |> asValue;
  let borderTopRightRadius = "border-top-right-radius" |> asValue;
  let borderTopWidth = "border-top-width" |> asValue;
  let borderWidth = "border-width" |> asValue;
  let bottom = "bottom" |> asValue;
  let boxShadow = "box-shadow" |> asValue;
  let caretColor = "caret-color" |> asValue;
  let clip = "clip" |> asValue;
  let clipPath = "clip-path" |> asValue;
  let color = "color" |> asValue;
  let columnCount = "column-count" |> asValue;
  let columnGap = "column-gap" |> asValue;
  let columnRule = "column-rule" |> asValue;
  let columnRuleColor = "column-rule-color" |> asValue;
  let columnRuleWidth = "column-rule-width" |> asValue;
  let columnWidth = "column-width" |> asValue;
  let columns = "columns" |> asValue;
  let filter = "filter" |> asValue;
  let flex = "flex" |> asValue;
  let flexBasis = "flex-basis" |> asValue;
  let flexGrow = "flex-grow" |> asValue;
  let flexShrink = "flex-shrink" |> asValue;
  let font = "font" |> asValue;
  let fontSize = "font-size" |> asValue;
  let fontSizeAdjust = "font-size-adjust" |> asValue;
  let fontStretch = "font-stretch" |> asValue;
  let fontVariationSettings = "font-variation-settings" |> asValue;
  let fontWeight = "font-weight" |> asValue;
  let gridColumnGap = "grid-column-gap" |> asValue;
  let gridGap = "grid-gap" |> asValue;
  let gridRowGap = "grid-row-gap" |> asValue;
  let height = "height" |> asValue;
  let left = "left" |> asValue;
  let letterSpacing = "letter-spacing" |> asValue;
  let lineHeight = "line-height" |> asValue;
  let margin = "margin" |> asValue;
  let marginBottom = "margin-bottom" |> asValue;
  let marginLeft = "margin-left" |> asValue;
  let marginRight = "margin-right" |> asValue;
  let marginTop = "margin-top" |> asValue;
  let mask = "mask" |> asValue;
  let maskBorder = "mask-border" |> asValue;
  let maskPosition = "mask-position" |> asValue;
  let maskSize = "mask-size" |> asValue;
  let maxHeight = "max-height" |> asValue;
  let maxWidth = "max-width" |> asValue;
  let minHeight = "min-height" |> asValue;
  let minWidth = "min-width" |> asValue;
  let objectPosition = "object-position" |> asValue;
  let offset = "offset" |> asValue;
  let offsetAnchor = "offset-anchor" |> asValue;
  let offsetDistance = "offset-distance" |> asValue;
  let offsetPath = "offset-path" |> asValue;
  let offsetRotate = "offset-rotate" |> asValue;
  let opacity = "opacity" |> asValue;
  let order = "order" |> asValue;
  let outline = "outline" |> asValue;
  let outlineColor = "outline-color" |> asValue;
  let outlineOffset = "outline-offset" |> asValue;
  let outlineWidth = "outline-width" |> asValue;
  let padding = "padding" |> asValue;
  let paddingBottom = "padding-bottom" |> asValue;
  let paddingLeft = "padding-left" |> asValue;
  let paddingRight = "padding-right" |> asValue;
  let paddingTop = "padding-top" |> asValue;
  let right = "right" |> asValue;
  let scrollSnapCoordinate = "scroll-snap-coordinate" |> asValue;
  let scrollSnapDestination = "scroll-snap-destination" |> asValue;
  let shapeImageThreshold = "shape-image-threshold" |> asValue;
  let shapeMargin = "shape-margin" |> asValue;
  let shapeOutside = "shape-outside" |> asValue;
  let tabSize = "tab-size" |> asValue;
  let textDecoration = "text-decoration" |> asValue;
  let textDecorationColor = "text-decoration-color" |> asValue;
  let textEmphasis = "text-emphasis" |> asValue;
  let textEmphasisColor = "text-emphasis-color" |> asValue;
  let textIndent = "text-indent" |> asValue;
  let textShadow = "text-shadow" |> asValue;
  let top = "top" |> asValue;
  let transform = "transform" |> asValue;
  let transformOrigin = "transform-origin" |> asValue;
  let verticalAlign = "vertical-align" |> asValue;
  let visibility = "visibility" |> asValue;
  let width = "width" |> asValue;
  let wordSpacing = "word-spacing" |> asValue;
  let zIndex = "z-index" |> asValue;
};

/* Timing Fucntion */
let linear = "linear" |> asValue;
let ease = "ease" |> asValue;
let easeIn = "ease-in" |> asValue;
let easeOut = "ease-out" |> asValue;
let easeInOut = "ease-in-out" |> asValue;
let cubicBezier = ((x1, y1), (x2, y2)) =>
  {j|cubic-bezier($x1, $y1, $x2, $y2)|j} |> asValue;
let stepStart = "step-start" |> asValue;
let stepEnd = "step-end" |> asValue;
let steps = (n, pos) =>
  {j|steps($n, $pos)|j} |> asValue;
let frames = n =>
  {j|frames($n)|j} |> asValue;

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

/*let all = "all" |> asValue;*/

let start = "start" |> asValue;
let end_ = "end" |> asValue;


/*********
 * Properties
 */
let margin = value =>
  prop("margin", value);
let margin2 = (~v, ~h) =>
  prop("margin", {j|$v $h|j} |> asValue);
let margin3 = (~top, ~h, ~bottom) =>
  prop("margin", {j|$top $h $bottom|j} |> asValue);
let margin4 = (~top, ~right, ~bottom, ~left) =>
  prop("margin", {j|$top $right $bottom $left|j} |> asValue);
let marginTop = value =>
  prop("marginTop", value);
let marginRight = value =>
  prop("marginRight", value);
let marginBottom = value =>
  prop("marginBottom", value);
let marginLeft = value =>
  prop("marginLeft", value);


let padding = value =>
  prop("padding", value);
let padding2 = (~v, ~h) =>
  prop("padding", {j|$v $h|j} |> asValue);
let padding3 = (~top, ~h, ~bottom) =>
  prop("padding", {j|$top $h $bottom|j} |> asValue);
let padding4 = (~top, ~right, ~bottom, ~left) =>
  prop("padding", {j|$top $right $bottom $left|j} |> asValue);
let paddingTop = value =>
  prop("paddingTop", value);
let paddingRight = value =>
  prop("paddingRight", value);
let paddingBottom = value =>
  prop("paddingBottom", value);
let paddingLeft = value =>
  prop("paddingLeft", value);

let border = value =>
  prop("border", value);
let border2 = (~width=?, ~color=?, style) => {
  let value =
    switch ((width, color)) {
    | (Some(w), Some(c))  => {j|$w $style $c|j}
    | (Some(w), None)     => {j|$w $style|j}
    | (None, Some(c))     => {j|$style $c|j}
    | (None, None)        => getValue(style)
    };
  prop("border", value |> asValue)
};
let border3 = (~width, ~style, ~color) =>
  prop("border", {j|$width $style $color|j} |> asValue);
let borderWidth = value =>
  prop("borderWidth", value);
let borderTopWidth = value =>
  prop("borderTopWidth", value);
let borderRightWidth = value =>
  prop("borderRightWidth", value);
let borderBottomWidth = value =>
  prop("borderBottomWidth", value);
let borderLeftWidth = value =>
  prop("borderLeftWidth", value);
let borderStyle = value =>
  prop("borderStyle", value);
let borderTopStyle = value =>
  prop("borderTopStyle", value);
let borderRightStyle = value =>
  prop("borderRightStyle", value);
let borderBottomStyle = value =>
  prop("borderBottomStyle", value);
let borderLeftStyle = value =>
  prop("borderLeftStyle", value);
let borderColor = value =>
  prop("borderColor", value);
let borderTopColor = value =>
  prop("borderTopColor", value);
let borderRightColor = value =>
  prop("borderRightColor", value);
let borderBottomColor = value =>
  prop("borderBottomColor", value);
let borderLeftColor = value =>
  prop("borderLeftColor", value);

let borderRadius = value =>
  prop("borderRadius", value);
let borderTopRightRadius = value =>
  prop("borderTopRightRadius", value);
let borderTopRightRadius2 = (~v, ~h) =>
  prop("borderTopRightRadius", {j|$v $h|j} |> asValue);
let borderTopLeftRadius = value =>
  prop("borderTopLeftRadius", value);
let borderTopLeftRadius2 = (~v, ~h) =>
  prop("borderTopLeftRadius", {j|$v $h|j} |> asValue);
let borderBottomRightRadius = value =>
  prop("borderBottomRightRadius", value);
let borderBottomRightRadius2 = (~v, ~h) =>
  prop("borderBottomRightRadius", {j|$v $h|j} |> asValue);
let borderBottomLeftRadius = value =>
  prop("borderBottomLeftRadius", value);
let borderBottomLeftRadius2 = (~v, ~h) =>
  prop("borderBottomLeftRadius", {j|$v $h|j} |> asValue);

let transitionProperty = v =>
  prop("transitionProperty", v);
let transitionProperties =
  fun | [] => prop("transitionProperty", "none" |> asValue)
      | vs => prop("transitionProperty", vs |> List.map(getValue) |> String.concat(", ") |> asValue);
let transitionDuration = v =>
  prop("transitionDuration", v);
let transitionDurations = vs =>
  prop("transitionDuration", vs |> List.map(getValue) |> String.concat(", ") |> asValue);
let transitionTimingFunction = v =>
  prop("transitionTimingFunction", v);
let transitionTimingFunctions = vs =>
  prop("transitionTimingFunction", vs |> List.map(getValue) |> String.concat(", ") |> asValue);
let transitionDelay = v =>
  prop("transitionDelay", v);
let transitionDelays = vs =>
  prop("transitionDelay", vs |> List.map(getValue) |> String.concat(", ") |> asValue);
let transition = v =>
  prop("transition", v);
let transitions =
  fun | [] => prop("transition", "none" |> asValue)
      | vs => prop("transition", vs |> List.map(((prop, dur, fn, delay)) => {j|$prop $dur $fn $delay|j}) |> String.concat(", ") |> asValue);


/*********
 * Glamor
 */
[@bs.module "glamor"] external css : Js.Dict.t(value(_)) => string = "";
let css = declarations =>
  declarations |> List.map(getDeclaration)
               |> Js.Dict.fromList
               |> css;