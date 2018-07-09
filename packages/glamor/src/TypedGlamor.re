module Core = TypedGlamor__Core.Core;
open Core;

include TypedGlamor__InternalHelpers;

let prop = name =>
  value => [(name, value)] |> Declaration.pack;


/*********
 * Values
 */

/* universal */
let inherit_ = "inherit" |> Value.pack;
let initial = "initial" |> Value.pack;
let unset = "unset" |> Value.pack;

/* length */
let em = n => {j|$(n)em|j} |> Value.pack;
let ex = n => {j|$(n)ex|j} |> Value.pack;
let ch = n => {j|$(n)ch|j} |> Value.pack;
let rem = n => {j|$(n)rem|j} |> Value.pack;

let vw = n => {j|$(n)vw|j} |> Value.pack;
let vh = n => {j|$(n)vh|j} |> Value.pack;
let vmin = n => {j|$(n)vmin|j} |> Value.pack;
let vmax = n => {j|$(n)vmax|j} |> Value.pack;

let cm = n => {j|$(n)cm|j} |> Value.pack;
let mm = n => {j|$(n)mm|j} |> Value.pack;
let q = n => {j|$(n)q|j} |> Value.pack;
let inch = n => {j|$(n)in|j} |> Value.pack;
let pc = n => {j|$(n)pc|j} |> Value.pack;
let pt = n => {j|$(n)pt|j} |> Value.pack;
let px = n => {j|$(n)px|j} |> Value.pack;

let zero = "0" |> Value.pack;

/* percentage */
let pct = n => {j|$n%|j} |> Value.pack;

/* angle */
let rad = n => {j|$(n)rad|j} |> Value.pack;
let grad = n => {j|$(n)grad|j} |> Value.pack;
let deg = n => {j|$(n)deg|j} |> Value.pack;
let turn = n => {j|$(n)turn|j} |> Value.pack;

/* time */
let s = n => {j|$(n)s|j} |> Value.pack;
let ms = n => {j|$(n)ms|j} |> Value.pack;

/* url */
let url = url => {j|url($url)|j} |> Value.pack;

/* color */
let rgb = (r, g, b) => {j|rgb($r, $g, $b)|j} |> Value.pack;

let rgba = (r, g, b, a) => {j|rgba($r, $g, $b, $a)|j} |> Value.pack;

let hsl = (h, s, l) => {j|hsl($h, $s%, $l%)|j} |> Value.pack;

let hsla = (h, s, l, a) => {j|hsla($h, $s%, $l%, $a)|j} |> Value.pack;
let hex = value => "#" ++ value |> Value.pack;

let currentColor = "currentColor" |> Value.pack;
let transparent = "transparent" |> Value.pack;

let aliceblue = "aliceblue" |> Value.pack;
let antiquewhite = "antiquewhite" |> Value.pack;
let aqua = "aqua" |> Value.pack;
let aquamarine = "aquamarine" |> Value.pack;
let azure = "azure" |> Value.pack;
let beige = "beige" |> Value.pack;
let bisque = "bisque" |> Value.pack;
let black = "black" |> Value.pack;
let blanchedalmond = "blanchedalmond" |> Value.pack;
let blue = "blue" |> Value.pack;
let blueviolet = "blueviolet" |> Value.pack;
let brown = "brown" |> Value.pack;
let burlywood = "burlywood" |> Value.pack;
let cadetblue = "cadetblue" |> Value.pack;
let chartreuse = "chartreuse" |> Value.pack;
let chocolate = "chocolate" |> Value.pack;
let coral = "coral" |> Value.pack;
let cornflowerblue = "cornflowerblue" |> Value.pack;
let cornsilk = "cornsilk" |> Value.pack;
let crimson = "crimson" |> Value.pack;
let cyan = "cyan" |> Value.pack;
let darkblue = "darkblue" |> Value.pack;
let darkcyan = "darkcyan" |> Value.pack;
let darkgoldenrod = "darkgoldenrod" |> Value.pack;
let darkgray = "darkgray" |> Value.pack;
let darkgrey = "darkgrey" |> Value.pack;
let darkgreen = "darkgreen" |> Value.pack;
let darkkhaki = "darkkhaki" |> Value.pack;
let darkmagenta = "darkmagenta" |> Value.pack;
let darkolivegreen = "darkolivegreen" |> Value.pack;
let darkorange = "darkorange" |> Value.pack;
let darkorchid = "darkorchid" |> Value.pack;
let darkred = "darkred" |> Value.pack;
let darksalmon = "darksalmon" |> Value.pack;
let darkseagreen = "darkseagreen" |> Value.pack;
let darkslateblue = "darkslateblue" |> Value.pack;
let darkslategray = "darkslategray" |> Value.pack;
let darkslategrey = "darkslategrey" |> Value.pack;
let darkturquoise = "darkturquoise" |> Value.pack;
let darkviolet = "darkviolet" |> Value.pack;
let deeppink = "deeppink" |> Value.pack;
let deepskyblue = "deepskyblue" |> Value.pack;
let dimgray = "dimgray" |> Value.pack;
let dimgrey = "dimgrey" |> Value.pack;
let dodgerblue = "dodgerblue" |> Value.pack;
let firebrick = "firebrick" |> Value.pack;
let floralwhite = "floralwhite" |> Value.pack;
let forestgreen = "forestgreen" |> Value.pack;
let fuchsia = "fuchsia" |> Value.pack;
let gainsboro = "gainsboro" |> Value.pack;
let ghostwhite = "ghostwhite" |> Value.pack;
let gold = "gold" |> Value.pack;
let goldenrod = "goldenrod" |> Value.pack;
let gray = "gray" |> Value.pack;
let grey = "grey" |> Value.pack;
let green = "green" |> Value.pack;
let greenyellow = "greenyellow" |> Value.pack;
let honeydew = "honeydew" |> Value.pack;
let hotpink = "hotpink" |> Value.pack;
let indianred = "indianred" |> Value.pack;
let indigo = "indigo" |> Value.pack;
let ivory = "ivory" |> Value.pack;
let khaki = "khaki" |> Value.pack;
let lavender = "lavender" |> Value.pack;
let lavenderblush = "lavenderblush" |> Value.pack;
let lawngreen = "lawngreen" |> Value.pack;
let lemonchiffon = "lemonchiffon" |> Value.pack;
let lightblue = "lightblue" |> Value.pack;
let lightcoral = "lightcoral" |> Value.pack;
let lightcyan = "lightcyan" |> Value.pack;
let lightgoldenrodyellow = "lightgoldenrodyellow" |> Value.pack;
let lightgray = "lightgray" |> Value.pack;
let lightgrey = "lightgrey" |> Value.pack;
let lightgreen = "lightgreen" |> Value.pack;
let lightpink = "lightpink" |> Value.pack;
let lightsalmon = "lightsalmon" |> Value.pack;
let lightseagreen = "lightseagreen" |> Value.pack;
let lightskyblue = "lightskyblue" |> Value.pack;
let lightslategray = "lightslategray" |> Value.pack;
let lightslategrey = "lightslategrey" |> Value.pack;
let lightsteelblue = "lightsteelblue" |> Value.pack;
let lightyellow = "lightyellow" |> Value.pack;
let lime = "lime" |> Value.pack;
let limegreen = "limegreen" |> Value.pack;
let linen = "linen" |> Value.pack;
let magenta = "magenta" |> Value.pack;
let maroon = "maroon" |> Value.pack;
let mediumaquamarine = "mediumaquamarine" |> Value.pack;
let mediumblue = "mediumblue" |> Value.pack;
let mediumorchid = "mediumorchid" |> Value.pack;
let mediumpurple = "mediumpurple" |> Value.pack;
let mediumseagreen = "mediumseagreen" |> Value.pack;
let mediumslateblue = "mediumslateblue" |> Value.pack;
let mediumspringgreen = "mediumspringgreen" |> Value.pack;
let mediumturquoise = "mediumturquoise" |> Value.pack;
let mediumvioletred = "mediumvioletred" |> Value.pack;
let midnightblue = "midnightblue" |> Value.pack;
let mintcream = "mintcream" |> Value.pack;
let mistyrose = "mistyrose" |> Value.pack;
let moccasin = "moccasin" |> Value.pack;
let navajowhite = "navajowhite" |> Value.pack;
let navy = "navy" |> Value.pack;
let oldlace = "oldlace" |> Value.pack;
let olive = "olive" |> Value.pack;
let olivedrab = "olivedrab" |> Value.pack;
let orange = "orange" |> Value.pack;
let orangered = "orangered" |> Value.pack;
let orchid = "orchid" |> Value.pack;
let palegoldenrod = "palegoldenrod" |> Value.pack;
let palegreen = "palegreen" |> Value.pack;
let paleturquoise = "paleturquoise" |> Value.pack;
let palevioletred = "palevioletred" |> Value.pack;
let papayawhip = "papayawhip" |> Value.pack;
let peachpuff = "peachpuff" |> Value.pack;
let peru = "peru" |> Value.pack;
let pink = "pink" |> Value.pack;
let plum = "plum" |> Value.pack;
let powderblue = "powderblue" |> Value.pack;
let purple = "purple" |> Value.pack;
let red = "red" |> Value.pack;
let rosybrown = "rosybrown" |> Value.pack;
let royalblue = "royalblue" |> Value.pack;
let saddlebrown = "saddlebrown" |> Value.pack;
let salmon = "salmon" |> Value.pack;
let sandybrown = "sandybrown" |> Value.pack;
let seagreen = "seagreen" |> Value.pack;
let seashell = "seashell" |> Value.pack;
let sienna = "sienna" |> Value.pack;
let silver = "silver" |> Value.pack;
let skyblue = "skyblue" |> Value.pack;
let slateblue = "slateblue" |> Value.pack;
let slategray = "slategray" |> Value.pack;
let slategrey = "slategrey" |> Value.pack;
let snow = "snow" |> Value.pack;
let springgreen = "springgreen" |> Value.pack;
let steelblue = "steelblue" |> Value.pack;
let tan = "tan" |> Value.pack;
let teal = "teal" |> Value.pack;
let thistle = "thistle" |> Value.pack;
let tomato = "tomato" |> Value.pack;
let turquoise = "turquoise" |> Value.pack;
let violet = "violet" |> Value.pack;
let wheat = "wheat" |> Value.pack;
let white = "white" |> Value.pack;
let whitesmoke = "whitesmoke" |> Value.pack;
let yellow = "yellow" |> Value.pack;
let yellowgreen = "yellowgreen" |> Value.pack;

/* shape */
let rect = (~top, ~right, ~bottom, ~left) =>
  {j|rect($top, $right, $bottom, $left)|j} |> Value.pack;

/* Custom Identifier */
let ident = Value.pack;

/* Animatable Properties */
module AnimatableProperty = {
  let all = "all" |> Value.pack;
  let backdropFilter = "backdrop-filter" |> Value.pack;
  let background = "background" |> Value.pack;
  let backgroundColor = "background-color" |> Value.pack;
  let backgroundPosition = "background-position" |> Value.pack;
  let backgroundSize = "background-size" |> Value.pack;
  let border = "border" |> Value.pack;
  let borderBottom = "border-bottom" |> Value.pack;
  let borderBottomColor = "border-bottom-color" |> Value.pack;
  let borderBottomLeftRadius = "border-bottom-left-radius" |> Value.pack;
  let borderBottomRightRadius = "border-bottom-right-radius" |> Value.pack;
  let borderBottomWidth = "border-bottom-width" |> Value.pack;
  let borderColor = "border-color" |> Value.pack;
  let borderLeft = "border-left" |> Value.pack;
  let borderLeftColor = "border-left-color" |> Value.pack;
  let borderLeftWidth = "border-left-width" |> Value.pack;
  let borderRadius = "border-radius" |> Value.pack;
  let borderRight = "border-right" |> Value.pack;
  let borderRightColor = "border-right-color" |> Value.pack;
  let borderRightWidth = "border-right-width" |> Value.pack;
  let borderTop = "border-top" |> Value.pack;
  let borderTopColor = "border-top-color" |> Value.pack;
  let borderTopLeftRadius = "border-top-left-radius" |> Value.pack;
  let borderTopRightRadius = "border-top-right-radius" |> Value.pack;
  let borderTopWidth = "border-top-width" |> Value.pack;
  let borderWidth = "border-width" |> Value.pack;
  let bottom = "bottom" |> Value.pack;
  let boxShadow = "box-shadow" |> Value.pack;
  let caretColor = "caret-color" |> Value.pack;
  let clip = "clip" |> Value.pack;
  let clipPath = "clip-path" |> Value.pack;
  let color = "color" |> Value.pack;
  let columnCount = "column-count" |> Value.pack;
  let columnGap = "column-gap" |> Value.pack;
  let columnRule = "column-rule" |> Value.pack;
  let columnRuleColor = "column-rule-color" |> Value.pack;
  let columnRuleWidth = "column-rule-width" |> Value.pack;
  let columnWidth = "column-width" |> Value.pack;
  let columns = "columns" |> Value.pack;
  let filter = "filter" |> Value.pack;
  let flex = "flex" |> Value.pack;
  let flexBasis = "flex-basis" |> Value.pack;
  let flexGrow = "flex-grow" |> Value.pack;
  let flexShrink = "flex-shrink" |> Value.pack;
  let font = "font" |> Value.pack;
  let fontSize = "font-size" |> Value.pack;
  let fontSizeAdjust = "font-size-adjust" |> Value.pack;
  let fontStretch = "font-stretch" |> Value.pack;
  let fontVariationSettings = "font-variation-settings" |> Value.pack;
  let fontWeight = "font-weight" |> Value.pack;
  let gridColumnGap = "grid-column-gap" |> Value.pack;
  let gridGap = "grid-gap" |> Value.pack;
  let gridRowGap = "grid-row-gap" |> Value.pack;
  let height = "height" |> Value.pack;
  let left = "left" |> Value.pack;
  let letterSpacing = "letter-spacing" |> Value.pack;
  let lineHeight = "line-height" |> Value.pack;
  let margin = "margin" |> Value.pack;
  let marginBottom = "margin-bottom" |> Value.pack;
  let marginLeft = "margin-left" |> Value.pack;
  let marginRight = "margin-right" |> Value.pack;
  let marginTop = "margin-top" |> Value.pack;
  let mask = "mask" |> Value.pack;
  let maskBorder = "mask-border" |> Value.pack;
  let maskPosition = "mask-position" |> Value.pack;
  let maskSize = "mask-size" |> Value.pack;
  let maxHeight = "max-height" |> Value.pack;
  let maxWidth = "max-width" |> Value.pack;
  let minHeight = "min-height" |> Value.pack;
  let minWidth = "min-width" |> Value.pack;
  let objectPosition = "object-position" |> Value.pack;
  let offset = "offset" |> Value.pack;
  let offsetAnchor = "offset-anchor" |> Value.pack;
  let offsetDistance = "offset-distance" |> Value.pack;
  let offsetPath = "offset-path" |> Value.pack;
  let offsetRotate = "offset-rotate" |> Value.pack;
  let opacity = "opacity" |> Value.pack;
  let order = "order" |> Value.pack;
  let outline = "outline" |> Value.pack;
  let outlineColor = "outline-color" |> Value.pack;
  let outlineOffset = "outline-offset" |> Value.pack;
  let outlineWidth = "outline-width" |> Value.pack;
  let padding = "padding" |> Value.pack;
  let paddingBottom = "padding-bottom" |> Value.pack;
  let paddingLeft = "padding-left" |> Value.pack;
  let paddingRight = "padding-right" |> Value.pack;
  let paddingTop = "padding-top" |> Value.pack;
  let right = "right" |> Value.pack;
  let scrollSnapCoordinate = "scroll-snap-coordinate" |> Value.pack;
  let scrollSnapDestination = "scroll-snap-destination" |> Value.pack;
  let shapeImageThreshold = "shape-image-threshold" |> Value.pack;
  let shapeMargin = "shape-margin" |> Value.pack;
  let shapeOutside = "shape-outside" |> Value.pack;
  let tabSize = "tab-size" |> Value.pack;
  let textDecoration = "text-decoration" |> Value.pack;
  let textDecorationColor = "text-decoration-color" |> Value.pack;
  let textEmphasis = "text-emphasis" |> Value.pack;
  let textEmphasisColor = "text-emphasis-color" |> Value.pack;
  let textIndent = "text-indent" |> Value.pack;
  let textShadow = "text-shadow" |> Value.pack;
  let top = "top" |> Value.pack;
  let transform = "transform" |> Value.pack;
  let transformOrigin = "transform-origin" |> Value.pack;
  let verticalAlign = "vertical-align" |> Value.pack;
  let visibility = "visibility" |> Value.pack;
  let width = "width" |> Value.pack;
  let wordSpacing = "word-spacing" |> Value.pack;
  let zIndex = "z-index" |> Value.pack;
};

/* Timing Fucntion */
let linear = "linear" |> Value.pack;
let ease = "ease" |> Value.pack;
let easeIn = "ease-in" |> Value.pack;
let easeOut = "ease-out" |> Value.pack;
let easeInOut = "ease-in-out" |> Value.pack;
let cubicBezier = ((x1, y1), (x2, y2)) =>
  {j|cubic-bezier($x1, $y1, $x2, $y2)|j} |> Value.pack;
let stepStart = "step-start" |> Value.pack;
let stepEnd = "step-end" |> Value.pack;
let steps = (n, pos) =>
  {j|steps($n, $pos)|j} |> Value.pack;
let frames = n =>
  {j|frames($n)|j} |> Value.pack;

/* Transform */
let matrix = (a, b, c, d, tx, ty) =>
  {j|matrix($a, $b, $c, $d, $tx, $ty)|j} |> Value.pack;
let translate = (x, y) =>
  {j|translate($x, $y)|j} |> Value.pack;
let translateX = v =>
  {j|translateX($v)|j} |> Value.pack;
let translateY = v =>
  {j|translateY($v)|j} |> Value.pack;
let scale = (x, y) =>
  {j|scale($x, $y)|j} |> Value.pack;
let scaleX = v =>
  {j|scaleX($v)|j} |> Value.pack;
let scaleY = v =>
  {j|scaleY($v)|j} |> Value.pack;
let rotate = v =>
  {j|rotate($v)|j} |> Value.pack;
let skewX = v =>
  {j|skewX($v)|j} |> Value.pack;
let skewY = v =>
  {j|skewY($v)|j} |> Value.pack;


/* ad-hoc */
let none = "none" |> Value.pack;
let auto = "auto" |> Value.pack;

let thin = "thin" |> Value.pack;
let medium = "medium" |> Value.pack;
let thick = "thick" |> Value.pack;

let hidden = "hidden" |> Value.pack;
let dotted = "dotted" |> Value.pack;
let dashed = "dashed" |> Value.pack;
let solid = "solid" |> Value.pack;
let double = "double" |> Value.pack;
let groove = "groove" |> Value.pack;
let ridge = "ridge" |> Value.pack;
let inset = "inset" |> Value.pack;
let outset = "outset" |> Value.pack;

let inline = "inline" |> Value.pack;
let block = "block" |> Value.pack;
let listItem = "list-item" |> Value.pack;
let inlineBlock = "inline-block" |> Value.pack;
let table = "table" |> Value.pack;
let inlineTable = "inline-table" |> Value.pack;
let tableRowGroup = "table-row-group" |> Value.pack;
let tableHeaderGroup = "table-header-group" |> Value.pack;
let tableFooterGroup = "table-footer-group" |> Value.pack;
let tableRow = "table-row" |> Value.pack;
let tableColumnGroup = "table-column-group" |> Value.pack;
let tableColumn = "table-column" |> Value.pack;
let tableCell = "table-cell" |> Value.pack;
let tableCaption = "table-caption" |> Value.pack;
let flex = "flex" |> Value.pack;
let inlineFlex = "inline-flex" |> Value.pack;

let static = "static" |> Value.pack;
let relative = "relative" |> Value.pack;
let absolute = "absolute" |> Value.pack;
let fixed = "fixed" |> Value.pack;

let left = "left" |> Value.pack;
let right = "right" |> Value.pack;

let both = "both" |> Value.pack;

let ltr = "ltr" |> Value.pack;
let rtl = "rtl" |> Value.pack;

let embed = "embed" |> Value.pack;
let bidiOverride = "bidi-override" |> Value.pack;

let baseline = "baseline" |> Value.pack;
let sub = "sub" |> Value.pack;
let super = "super" |> Value.pack;
let top = "top" |> Value.pack;
let textTop = "text-top" |> Value.pack;
let middle = "middle" |> Value.pack;
let bottom = "bottom" |> Value.pack;
let textBottom = "text-bottom" |> Value.pack;

let visible = "visible" |> Value.pack;
let scroll = "scroll" |> Value.pack;

let collapse = "collapse" |> Value.pack;

/*let all = "all" |> Value.pack;*/

let start = "start" |> Value.pack;
let end_ = "end" |> Value.pack;

let repeat = "repeat" |> Value.pack;
let repeatX = "repeat-x" |> Value.pack;
let repeatY = "repeat-y" |> Value.pack;
let noRepeat = "no-repeat" |> Value.pack;

let center = "center" |> Value.pack;

/* fontFamilies */
let serif = "serif";
let sansSerif = "sans-serif";
let cursive = "cursive";
let fantasy = "fantasy";
let monospace = "monospace";

/* fontStyle */
let normal = "normal" |> Value.pack;
let italic = "italic" |> Value.pack;
let oblique = "oblique" |> Value.pack;

/* fontVariant */
let smallCaps = "small-caps" |> Value.pack;

/* fontWeight */
let bold = "bold" |> Value.pack;
let bolder = "bolder" |> Value.pack;
let lighter = "lighter" |> Value.pack;
let _100 = "100" |> Value.pack;
let _200 = "200" |> Value.pack;
let _300 = "300" |> Value.pack;
let _400 = "400" |> Value.pack;
let _500 = "500" |> Value.pack;
let _600 = "600" |> Value.pack;
let _700 = "700" |> Value.pack;
let _800 = "800" |> Value.pack;
let _900 = "900" |> Value.pack;

/* fontSize */
let xxSmall = "xx-small" |> Value.pack;
let xSmall = "x-small" |> Value.pack;
let small = "small" |> Value.pack;
let meduium = "meduium" |> Value.pack;
let large = "large" |> Value.pack;
let xLarge = "x-large" |> Value.pack;
let xxLarge = "xx-large" |> Value.pack;
let larger = "larger" |> Value.pack;
let smaller = "smaller" |> Value.pack;

/* fontSize */
let caption = "caption" |> Value.pack;
let icon = "icon" |> Value.pack;
let menu = "menu" |> Value.pack;
let messageBox = "message-box" |> Value.pack;
let smallCaption = "small-caption" |> Value.pack;
let statusBar = "status-bar" |> Value.pack;

/* textAlign */
let justify = "justify" |> Value.pack;

/* textDecoration */
let underline = "underline" |> Value.pack;
let overline = "overline" |> Value.pack;
let lineThrough = "line-through" |> Value.pack;
let blink = "blink" |> Value.pack;

/* textTransform */
let capitalize = "capitalize" |> Value.pack;
let uppercase = "uppercase" |> Value.pack;
let lowercase = "lowercase" |> Value.pack;

/* whiteSpace */
let pre = "pre" |> Value.pack;
let nowrap = "nowrap" |> Value.pack;
let preWrap = "pre-wrap" |> Value.pack;
let preLine = "pre-line" |> Value.pack;

/* cursor */
let crosshair = "crosshair" |> Value.pack;
let default = "default" |> Value.pack;
let pointer = "pointer" |> Value.pack;
let move = "move" |> Value.pack;
let eResize = "e-resize" |> Value.pack;
let neResize = "ne-resize" |> Value.pack;
let nwResize = "nw-resize" |> Value.pack;
let nResize = "n-resize" |> Value.pack;
let seResize = "se-resize" |> Value.pack;
let swResize = "sw-resize" |> Value.pack;
let sResize = "s-resize" |> Value.pack;
let wResize = "w-resize" |> Value.pack;
let text = "text" |> Value.pack;
let wait = "wait" |> Value.pack;
let help = "help" |> Value.pack;
let progress = "progress" |> Value.pack;

/* outlineColor */
let invert = "invert" |> Value.pack;

/* transformBox */
let borderBox = "border-box" |> Value.pack;
let fillBox = "fill-box" |> Value.pack;
let viewBox = "view-box" |> Value.pack;

/* flexDirection */
let row = "row" |> Value.pack;
let rowReverse = "row-reverse" |> Value.pack;
let column = "column" |> Value.pack;
let columnReverse = "column-reverse" |> Value.pack;

/* flexWrap */
let wrap = "wrap" |> Value.pack;
let wrapReverse = "wrap-reverse" |> Value.pack;

/* flexBasis */
let content = "content" |> Value.pack;

/* justifyContent */
let flexStart = "flex-start" |> Value.pack;
let flexEnd = "flex-end" |> Value.pack;
let spaceBetween = "space-between" |> Value.pack;
let spaceAround = "space-around" |> Value.pack;
let spaceEvenly = "space-evenly" |> Value.pack;

/* alignitems */
let stretch = "stretch" |> Value.pack;


/* primitives */
let int = n => string_of_int(n) |> Value.pack;
let num = f => Js.String.make(f) |> Value.pack;


/*********
 * Properties
 */
let margin = value =>
  prop("margin", value);
let margin2 = (~v, ~h) =>
  prop("margin", {j|$v $h|j} |> Value.pack);
let margin3 = (~top, ~h, ~bottom) =>
  prop("margin", {j|$top $h $bottom|j} |> Value.pack);
let margin4 = (~top, ~right, ~bottom, ~left) =>
  prop("margin", {j|$top $right $bottom $left|j} |> Value.pack);
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
  prop("padding", {j|$v $h|j} |> Value.pack);
let padding3 = (~top, ~h, ~bottom) =>
  prop("padding", {j|$top $h $bottom|j} |> Value.pack);
let padding4 = (~top, ~right, ~bottom, ~left) =>
  prop("padding", {j|$top $right $bottom $left|j} |> Value.pack);
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
    | (None, None)        => Value.unpack(style)
    };
  prop("border", value |> Value.pack)
};
let border3 = (width, style, color) =>
  prop("border", {j|$width $style $color|j} |> Value.pack);
let borderTop = value =>
  prop("borderTop", value);
let borderTop3 = (width, style, color) =>
  prop("borderTop", {j|$width $style $color|j} |> Value.pack);
let borderRight = value =>
  prop("borderRight", value);
let borderRight3 = (width, style, color) =>
  prop("borderRight", {j|$width $style $color|j} |> Value.pack);
let borderBottom = value =>
  prop("borderBottom", value);
let borderBottom3 = (width, style, color) =>
  prop("borderBottom", {j|$width $style $color|j} |> Value.pack);
let borderLeft = value =>
  prop("borderLeft", value);
let borderLeft3 = (width, style, color) =>
  prop("borderLeft", {j|$width $style $color|j} |> Value.pack);
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
  prop("borderTopRightRadius", {j|$v $h|j} |> Value.pack);
let borderTopLeftRadius = value =>
  prop("borderTopLeftRadius", value);
let borderTopLeftRadius2 = (~v, ~h) =>
  prop("borderTopLeftRadius", {j|$v $h|j} |> Value.pack);
let borderBottomRightRadius = value =>
  prop("borderBottomRightRadius", value);
let borderBottomRightRadius2 = (~v, ~h) =>
  prop("borderBottomRightRadius", {j|$v $h|j} |> Value.pack);
let borderBottomLeftRadius = value =>
  prop("borderBottomLeftRadius", value);
let borderBottomLeftRadius2 = (~v, ~h) =>
  prop("borderBottomLeftRadius", {j|$v $h|j} |> Value.pack);

let display = v =>
  prop("display", v);
let position = v =>
  prop("position", v);
let offsetTop = v =>
  prop("top", v);
let offsetRight = v =>
  prop("right", v);
let offsetBottom = v =>
  prop("bottom", v);
let offsetLeft = v =>
  prop("left", v);
let float = v =>
  prop("float", v);
let clear = v =>
  prop("clear", v);
let zIndex = v =>
  prop("zIndex", v);
let direction = v =>
  prop("direction", v);
let unicodeBidi = v =>
  prop("unicodeBidi", v);
let width = v =>
  prop("width", v);
let minWidth = v =>
  prop("minWidth", v);
let maxWidth = v =>
  prop("maxWidth", v);
let height = v =>
  prop("height", v);
let minHeight = v =>
  prop("minHeight", v);
let maxHeight = v =>
  prop("maxHeight", v);
let lineHeight = v =>
  prop("lineHeight", v);
let verticalAlign = v =>
  prop("verticalAlign", v);

let overflow = v =>
  prop("overflow", v);
let clip = v =>
  prop("clip", v);
let visibility = v =>
  prop("visibility", v);

let color = v =>
  prop("color", v);
let opacity = v =>
  prop("opacity", num(v));
let background = v =>
  prop("background", v);
let backgroundColor = v =>
  prop("backgroundColor", v);
let backgroundImage = v =>
  prop("backgroundImage", v);
let backgroundRepeat = v =>
  prop("backgroundRepeat", v);
let backgroundAttachment = v =>
  prop("backgroundAttachment", v);
let backgroundPosition = v =>
  prop("backgroundPosition", v);
let backgroundPosition2 = (~h, ~v) =>
  prop("backgroundPosition", {j|$h $v|j} |> Value.pack);

let shadow = (~x, ~y, ~blur=Value.pack(""), ~spread=Value.pack(""), ~inset=false, color) => {
  let inset   = inset ? "inset" : "";
  {j|$inset $x $y $blur $spread $color|j} |> Value.pack
};
let boxShadow = v =>
  prop("boxShadow", v);
let boxShadows =
  fun | [] => prop("boxShadow", "none" |> Value.pack)
      | vs => prop("boxShadow", Values.join(vs));

let fontFamily = v =>
  prop("fontFamily", v);
let fontFamilies = vs =>
  prop("fontFamily", vs |> List.map(Value.pack) |> Values.join);
let fontStyle = v =>
  prop("fontStyle", v);
let fontVariant = v =>
  prop("fontVariant", v);
let fontWeight = v =>
  prop("fontWeight", v);
let fontSize = v =>
  prop("fontSize", v);
let font = v =>
  prop("font", v);

let textIndent = v =>
  prop("textIndent", v);
let textAlign = v =>
  prop("textAlign", v);
let textDecoration = v =>
  prop("textDecoration", v);
let letterSpacing = v =>
  prop("letterSpacing", v);
let wordSpacing = v =>
  prop("wrdSpacing", v);
let textTransform = v =>
  prop("textTransform", v);
let whiteSpace = v =>
  prop("whiteSpace", v);

let cursor = v =>
  prop("cursor", v);
let outline = value =>
  prop("outline", value);
let outline2 = (~width=?, ~color=?, style) => {
  let value =
    switch ((width, color)) {
    | (Some(w), Some(c))  => {j|$w $style $c|j}
    | (Some(w), None)     => {j|$w $style|j}
    | (None, Some(c))     => {j|$style $c|j}
    | (None, None)        => Value.unpack(style)
    };
  prop("outline", value |> Value.pack)
};
let outline3 = (width, style, color) =>
  prop("outline", {j|$width $style $color|j} |> Value.pack);
let outlineWidth = v =>
  prop("outlineWidth", v);
let outlineStyle = v =>
  prop("outlineStyle", v);
let outlineColor = v =>
  prop("outlineColor", v);

let transitionProperty = v =>
  prop("transitionProperty", v);
let transitionProperties =
  fun | [] => prop("transitionProperty", "none" |> Value.pack)
      | vs => prop("transitionProperty", Values.join(vs));
let transitionDuration = v =>
  prop("transitionDuration", v);
let transitionDurations = vs =>
  prop("transitionDuration", Values.join(vs));
let transitionTimingFunction = v =>
  prop("transitionTimingFunction", v);
let transitionTimingFunctions = vs =>
  prop("transitionTimingFunction", Values.join(vs));
let transitionDelay = v =>
  prop("transitionDelay", v);
let transitionDelays = vs =>
  prop("transitionDelay", Values.join(vs));
let transition = v =>
  prop("transition", v);
let transitions =
  fun | [] => prop("transition", "none" |> Value.pack)
      | vs => prop("transition", vs |> List.map(((prop, dur, fn, delay)) => {j|$prop $dur $fn $delay|j}) |> String.concat(", ") |> Value.pack);

let transform = v =>
  prop("transform", v);
let transforms =
  fun | [] => prop("transform", "none" |> Value.pack)
      | vs => prop("transform", vs |> List.map(Value.unpack) |> String.concat(", ") |> Value.pack);
let transformOrigin = v =>
  prop("transformOrigin", v);
let transformOrigin2 = (~h, ~v) =>
  prop("transformOrigin", {j|$h $v|j} |> Value.pack);
let transformBox = v =>
  prop("transformBox", v);

let flexDirection = v =>
  prop("flexDirection", v);
let flexWrap = v =>
  prop("flexWrap", v);
let flexFlow = v =>
  prop("flexFlow", v);
let flexFlow2 = (direction, wrap) =>
  prop("flexFlow", {j|$direction $wrap|j} |> Value.pack);
let order = v =>
  prop("order", int(v));
let flex_ = v =>
  prop("flex", v);
let flex3 = (~grow, ~shrink, basis) =>
  prop("flex", {j|$grow $shrink $basis|j} |> Value.pack);
let flexGrow = v =>
  prop("flexGrow", num(v));
let flexShrink = v =>
  prop("flexShrink", num(v));
let flexBasis = v =>
  prop("flexBasis", v);
let justifyContent = v =>
  prop("justifyContent", v);
let alignItems = v =>
  prop("alignItems", v);
let alignSelf = v =>
  prop("alignSelf", v);
let alignContent = v =>
  prop("alignContent", v);

/*********
 * Selectors
 */
type nth = [`anplusb | `even | `odd];

let odd     = "odd" |> Value.pack;
let even    = "even" |> Value.pack;
let anplusb = (a, b) => {j|$(a)n+($b)|j} |> Value.pack;

let select = (selector, declarations) =>
  [(selector, declarations |> Declarations.toDict)] |> Selector.pack;

let active          = declarations => select(":active", declarations);
/*let any             = ;*/
let checked         = declarations => select(":checked", declarations);
let dir             = (dir, declarations) => select({j|:lang($dir)|j}, declarations);
let disabled        = declarations => select(":disabled", declarations);
let empty           = declarations => select(":empty", declarations);
let enabled         = declarations => select(":enabled", declarations);
let first           = declarations => select(":first", declarations);
let firstChild      = declarations => select(":first-child", declarations);
let firstOfType     = declarations => select(":first-of-type", declarations);
let fullscreen      = declarations => select(":fullscreen", declarations);
let focus           = declarations => select(":focus", declarations);
let hover           = declarations => select(":hover", declarations);
let visited         = declarations => select(":visited", declarations);
let indeterminate   = declarations => select(":indeterminate", declarations);
let invalid         = declarations => select(":invalid", declarations);
let lang            = (lang, declarations) => select({j|:any($lang)|j}, declarations);
let lastChild       = declarations => select(":last-child", declarations);
let lastOfType      = declarations => select(":last-of-type", declarations);
let link            = declarations => select(":link", declarations);
let nthChild        = (pattern, declarations) => select({j|:nth-child($pattern)|j}, declarations);
let nthLastChild    = (pattern, declarations) => select({j|:nth-last-child($pattern)|j}, declarations);
let nthLastOfType   = (pattern, declarations) => select({j|:nth-last-of-type($pattern)|j}, declarations);
let nthOfType       = (pattern, declarations) => select({j|:nth-of-type($pattern)|j}, declarations);
let onlyChild       = declarations => select(":only-child", declarations);
let onlyOfType      = declarations => select(":only-of-type", declarations);
let optional        = declarations => select(":optional", declarations);
let outOfRange      = declarations => select(":out-of-range", declarations);
let readWrite       = declarations => select(":read-write", declarations);
let required        = declarations => select(":required", declarations);
let root            = declarations => select(":root", declarations);
let scope           = declarations => select(":scope", declarations);
let target          = declarations => select(":target", declarations);
let valid           = declarations => select(":valid", declarations);

/*********
 * Glamor
 */
type declarationBlock;

let null =
  Js.null |> Obj.magic;

let unsafe = (property, value) =>
  prop(property, value |> Value.pack);

let label = label =>
  prop("label", label |> Value.pack);

let nothing =
  unsafe("nothing", null);

let add = decls =>
  decls |> List.map(Declaration.unpack)
        |> List.flatten
        |> Declaration.pack;


[@bs.module "glamor"] [@bs.splice]
external merge : array(declarationBlock) => declarationBlock = "";

[@bs.module "glamor"]
external css : Js.Dict.t(value(_)) => declarationBlock = "";
let css = (~extend=?, declarations) => {
  let this = declarations |> Declarations.toDict;

  switch extend {
  | Some(style) => merge([|style, css(this)|])
  | None => css(this)
  }
};

[@bs.module "glamor"] [@bs.scope "css"]
external global : (string, Js.Dict.t(value(_))) => unit = "";
let global = (selector, declarations) =>
  global(selector, declarations |> Declarations.toDict);

let toString = Js.String.make;
