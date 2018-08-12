'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$String = require("bs-platform/lib/js/string.js");
var Glamor = require("glamor");
var TypedGlamor__InternalHelpers = require("./TypedGlamor__InternalHelpers.bs.js");

function prop(name, value) {
  return /* :: */[
          /* tuple */[
            name,
            value
          ],
          /* [] */0
        ];
}

function em(n) {
  return "" + (String(n) + "em");
}

function ex(n) {
  return "" + (String(n) + "ex");
}

function ch(n) {
  return "" + (String(n) + "ch");
}

function rem(n) {
  return "" + (String(n) + "rem");
}

function vw(n) {
  return "" + (String(n) + "vw");
}

function vh(n) {
  return "" + (String(n) + "vh");
}

function vmin(n) {
  return "" + (String(n) + "vmin");
}

function vmax(n) {
  return "" + (String(n) + "vmax");
}

function cm(n) {
  return "" + (String(n) + "cm");
}

function mm(n) {
  return "" + (String(n) + "mm");
}

function q(n) {
  return "" + (String(n) + "q");
}

function inch(n) {
  return "" + (String(n) + "in");
}

function pc(n) {
  return "" + (String(n) + "pc");
}

function pt(n) {
  return "" + (String(n) + "pt");
}

function px(n) {
  return "" + (String(n) + "px");
}

function pct(n) {
  return "" + (String(n) + "%");
}

function rad(n) {
  return "" + (String(n) + "rad");
}

function grad(n) {
  return "" + (String(n) + "grad");
}

function deg(n) {
  return "" + (String(n) + "deg");
}

function turn(n) {
  return "" + (String(n) + "turn");
}

function s(n) {
  return "" + (String(n) + "s");
}

function ms(n) {
  return "" + (String(n) + "ms");
}

function url(url$1) {
  return "url(" + (String(url$1) + ")");
}

function rgb(r, g, b) {
  return "rgb(" + (String(r) + (", " + (String(g) + (", " + (String(b) + ")")))));
}

function rgba(r, g, b, a) {
  return "rgba(" + (String(r) + (", " + (String(g) + (", " + (String(b) + (", " + (String(a) + ")")))))));
}

function hsl(h, s, l) {
  return "hsl(" + (String(h) + (", " + (String(s) + ("%, " + (String(l) + "%)")))));
}

function hsla(h, s, l, a) {
  return "hsla(" + (String(h) + (", " + (String(s) + ("%, " + (String(l) + ("%, " + (String(a) + ")")))))));
}

function hex(value) {
  return "#" + value;
}

function rect(top, right, bottom, left) {
  return "rect(" + (String(top) + (", " + (String(right) + (", " + (String(bottom) + (", " + (String(left) + ")")))))));
}

function ident(prim) {
  return prim;
}

var AnimatableProperty = /* module */[
  /* all */"all",
  /* backdropFilter */"backdrop-filter",
  /* background */"background",
  /* backgroundColor */"background-color",
  /* backgroundPosition */"background-position",
  /* backgroundSize */"background-size",
  /* border */"border",
  /* borderBottom */"border-bottom",
  /* borderBottomColor */"border-bottom-color",
  /* borderBottomLeftRadius */"border-bottom-left-radius",
  /* borderBottomRightRadius */"border-bottom-right-radius",
  /* borderBottomWidth */"border-bottom-width",
  /* borderColor */"border-color",
  /* borderLeft */"border-left",
  /* borderLeftColor */"border-left-color",
  /* borderLeftWidth */"border-left-width",
  /* borderRadius */"border-radius",
  /* borderRight */"border-right",
  /* borderRightColor */"border-right-color",
  /* borderRightWidth */"border-right-width",
  /* borderTop */"border-top",
  /* borderTopColor */"border-top-color",
  /* borderTopLeftRadius */"border-top-left-radius",
  /* borderTopRightRadius */"border-top-right-radius",
  /* borderTopWidth */"border-top-width",
  /* borderWidth */"border-width",
  /* bottom */"bottom",
  /* boxShadow */"box-shadow",
  /* caretColor */"caret-color",
  /* clip */"clip",
  /* clipPath */"clip-path",
  /* color */"color",
  /* columnCount */"column-count",
  /* columnGap */"column-gap",
  /* columnRule */"column-rule",
  /* columnRuleColor */"column-rule-color",
  /* columnRuleWidth */"column-rule-width",
  /* columnWidth */"column-width",
  /* columns */"columns",
  /* filter */"filter",
  /* flex */"flex",
  /* flexBasis */"flex-basis",
  /* flexGrow */"flex-grow",
  /* flexShrink */"flex-shrink",
  /* font */"font",
  /* fontSize */"font-size",
  /* fontSizeAdjust */"font-size-adjust",
  /* fontStretch */"font-stretch",
  /* fontVariationSettings */"font-variation-settings",
  /* fontWeight */"font-weight",
  /* gridColumnGap */"grid-column-gap",
  /* gridGap */"grid-gap",
  /* gridRowGap */"grid-row-gap",
  /* height */"height",
  /* left */"left",
  /* letterSpacing */"letter-spacing",
  /* lineHeight */"line-height",
  /* margin */"margin",
  /* marginBottom */"margin-bottom",
  /* marginLeft */"margin-left",
  /* marginRight */"margin-right",
  /* marginTop */"margin-top",
  /* mask */"mask",
  /* maskBorder */"mask-border",
  /* maskPosition */"mask-position",
  /* maskSize */"mask-size",
  /* maxHeight */"max-height",
  /* maxWidth */"max-width",
  /* minHeight */"min-height",
  /* minWidth */"min-width",
  /* objectPosition */"object-position",
  /* offset */"offset",
  /* offsetAnchor */"offset-anchor",
  /* offsetDistance */"offset-distance",
  /* offsetPath */"offset-path",
  /* offsetRotate */"offset-rotate",
  /* opacity */"opacity",
  /* order */"order",
  /* outline */"outline",
  /* outlineColor */"outline-color",
  /* outlineOffset */"outline-offset",
  /* outlineWidth */"outline-width",
  /* padding */"padding",
  /* paddingBottom */"padding-bottom",
  /* paddingLeft */"padding-left",
  /* paddingRight */"padding-right",
  /* paddingTop */"padding-top",
  /* right */"right",
  /* scrollSnapCoordinate */"scroll-snap-coordinate",
  /* scrollSnapDestination */"scroll-snap-destination",
  /* shapeImageThreshold */"shape-image-threshold",
  /* shapeMargin */"shape-margin",
  /* shapeOutside */"shape-outside",
  /* tabSize */"tab-size",
  /* textDecoration */"text-decoration",
  /* textDecorationColor */"text-decoration-color",
  /* textEmphasis */"text-emphasis",
  /* textEmphasisColor */"text-emphasis-color",
  /* textIndent */"text-indent",
  /* textShadow */"text-shadow",
  /* top */"top",
  /* transform */"transform",
  /* transformOrigin */"transform-origin",
  /* verticalAlign */"vertical-align",
  /* visibility */"visibility",
  /* width */"width",
  /* wordSpacing */"word-spacing",
  /* zIndex */"z-index"
];

function cubicBezier(param, param$1) {
  return "cubic-bezier(" + (String(param[0]) + (", " + (String(param[1]) + (", " + (String(param$1[0]) + (", " + (String(param$1[1]) + ")")))))));
}

function steps(n, pos) {
  return "steps(" + (String(n) + (", " + (String(pos) + ")")));
}

function frames(n) {
  return "frames(" + (String(n) + ")");
}

function matrix(a, b, c, d, tx, ty) {
  return "matrix(" + (String(a) + (", " + (String(b) + (", " + (String(c) + (", " + (String(d) + (", " + (String(tx) + (", " + (String(ty) + ")")))))))))));
}

function translate(x, y) {
  return "translate(" + (String(x) + (", " + (String(y) + ")")));
}

function translateX(v) {
  return "translateX(" + (String(v) + ")");
}

function translateY(v) {
  return "translateY(" + (String(v) + ")");
}

function scale(x, y) {
  return "scale(" + (String(x) + (", " + (String(y) + ")")));
}

function scaleX(v) {
  return "scaleX(" + (String(v) + ")");
}

function scaleY(v) {
  return "scaleY(" + (String(v) + ")");
}

function rotate(v) {
  return "rotate(" + (String(v) + ")");
}

function skewX(v) {
  return "skewX(" + (String(v) + ")");
}

function skewY(v) {
  return "skewY(" + (String(v) + ")");
}

function $$int(n) {
  return String(n);
}

function num(f) {
  return String(f);
}

function margin(value) {
  return prop("margin", value);
}

function margin2(v, h) {
  return prop("margin", "" + (String(v) + (" " + (String(h) + ""))));
}

function margin3(top, h, bottom) {
  return prop("margin", "" + (String(top) + (" " + (String(h) + (" " + (String(bottom) + ""))))));
}

function margin4(top, right, bottom, left) {
  return prop("margin", "" + (String(top) + (" " + (String(right) + (" " + (String(bottom) + (" " + (String(left) + ""))))))));
}

function marginTop(value) {
  return prop("marginTop", value);
}

function marginRight(value) {
  return prop("marginRight", value);
}

function marginBottom(value) {
  return prop("marginBottom", value);
}

function marginLeft(value) {
  return prop("marginLeft", value);
}

function padding(value) {
  return prop("padding", value);
}

function padding2(v, h) {
  return prop("padding", "" + (String(v) + (" " + (String(h) + ""))));
}

function padding3(top, h, bottom) {
  return prop("padding", "" + (String(top) + (" " + (String(h) + (" " + (String(bottom) + ""))))));
}

function padding4(top, right, bottom, left) {
  return prop("padding", "" + (String(top) + (" " + (String(right) + (" " + (String(bottom) + (" " + (String(left) + ""))))))));
}

function paddingTop(value) {
  return prop("paddingTop", value);
}

function paddingRight(value) {
  return prop("paddingRight", value);
}

function paddingBottom(value) {
  return prop("paddingBottom", value);
}

function paddingLeft(value) {
  return prop("paddingLeft", value);
}

function border(value) {
  return prop("border", value);
}

function border2(width, color, style) {
  var value;
  if (width) {
    var w = width[0];
    value = color ? "" + (String(w) + (" " + (String(style) + (" " + (String(color[0]) + ""))))) : "" + (String(w) + (" " + (String(style) + "")));
  } else {
    value = color ? "" + (String(style) + (" " + (String(color[0]) + ""))) : style;
  }
  return prop("border", value);
}

function border3(width, style, color) {
  return prop("border", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function borderTop(value) {
  return prop("borderTop", value);
}

function borderTop3(width, style, color) {
  return prop("borderTop", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function borderRight(value) {
  return prop("borderRight", value);
}

function borderRight3(width, style, color) {
  return prop("borderRight", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function borderBottom(value) {
  return prop("borderBottom", value);
}

function borderBottom3(width, style, color) {
  return prop("borderBottom", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function borderLeft(value) {
  return prop("borderLeft", value);
}

function borderLeft3(width, style, color) {
  return prop("borderLeft", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function borderWidth(value) {
  return prop("borderWidth", value);
}

function borderTopWidth(value) {
  return prop("borderTopWidth", value);
}

function borderRightWidth(value) {
  return prop("borderRightWidth", value);
}

function borderBottomWidth(value) {
  return prop("borderBottomWidth", value);
}

function borderLeftWidth(value) {
  return prop("borderLeftWidth", value);
}

function borderStyle(value) {
  return prop("borderStyle", value);
}

function borderTopStyle(value) {
  return prop("borderTopStyle", value);
}

function borderRightStyle(value) {
  return prop("borderRightStyle", value);
}

function borderBottomStyle(value) {
  return prop("borderBottomStyle", value);
}

function borderLeftStyle(value) {
  return prop("borderLeftStyle", value);
}

function borderColor(value) {
  return prop("borderColor", value);
}

function borderTopColor(value) {
  return prop("borderTopColor", value);
}

function borderRightColor(value) {
  return prop("borderRightColor", value);
}

function borderBottomColor(value) {
  return prop("borderBottomColor", value);
}

function borderLeftColor(value) {
  return prop("borderLeftColor", value);
}

function borderRadius(value) {
  return prop("borderRadius", value);
}

function borderTopRightRadius(value) {
  return prop("borderTopRightRadius", value);
}

function borderTopRightRadius2(v, h) {
  return prop("borderTopRightRadius", "" + (String(v) + (" " + (String(h) + ""))));
}

function borderTopLeftRadius(value) {
  return prop("borderTopLeftRadius", value);
}

function borderTopLeftRadius2(v, h) {
  return prop("borderTopLeftRadius", "" + (String(v) + (" " + (String(h) + ""))));
}

function borderBottomRightRadius(value) {
  return prop("borderBottomRightRadius", value);
}

function borderBottomRightRadius2(v, h) {
  return prop("borderBottomRightRadius", "" + (String(v) + (" " + (String(h) + ""))));
}

function borderBottomLeftRadius(value) {
  return prop("borderBottomLeftRadius", value);
}

function borderBottomLeftRadius2(v, h) {
  return prop("borderBottomLeftRadius", "" + (String(v) + (" " + (String(h) + ""))));
}

function display(v) {
  return prop("display", v);
}

function position(v) {
  return prop("position", v);
}

function offsetTop(v) {
  return prop("top", v);
}

function offsetRight(v) {
  return prop("right", v);
}

function offsetBottom(v) {
  return prop("bottom", v);
}

function offsetLeft(v) {
  return prop("left", v);
}

function $$float(v) {
  return prop("float", v);
}

function clear(v) {
  return prop("clear", v);
}

function zIndex(v) {
  return prop("zIndex", v);
}

function direction(v) {
  return prop("direction", v);
}

function unicodeBidi(v) {
  return prop("unicodeBidi", v);
}

function width(v) {
  return prop("width", v);
}

function minWidth(v) {
  return prop("minWidth", v);
}

function maxWidth(v) {
  return prop("maxWidth", v);
}

function height(v) {
  return prop("height", v);
}

function minHeight(v) {
  return prop("minHeight", v);
}

function maxHeight(v) {
  return prop("maxHeight", v);
}

function lineHeight(v) {
  return prop("lineHeight", v);
}

function verticalAlign(v) {
  return prop("verticalAlign", v);
}

function overflow(v) {
  return prop("overflow", v);
}

function clip(v) {
  return prop("clip", v);
}

function visibility(v) {
  return prop("visibility", v);
}

function color(v) {
  return prop("color", v);
}

function opacity(v) {
  return prop("opacity", String(v));
}

function background(v) {
  return prop("background", v);
}

function backgroundColor(v) {
  return prop("backgroundColor", v);
}

function backgroundImage(v) {
  return prop("backgroundImage", v);
}

function backgroundRepeat(v) {
  return prop("backgroundRepeat", v);
}

function backgroundAttachment(v) {
  return prop("backgroundAttachment", v);
}

function backgroundPosition(v) {
  return prop("backgroundPosition", v);
}

function backgroundPosition2(h, v) {
  return prop("backgroundPosition", "" + (String(h) + (" " + (String(v) + ""))));
}

function shadow(x, y, $staropt$star, $staropt$star$1, $staropt$star$2, color) {
  var blur = $staropt$star ? $staropt$star[0] : "";
  var spread = $staropt$star$1 ? $staropt$star$1[0] : "";
  var inset = $staropt$star$2 ? $staropt$star$2[0] : false;
  var inset$1 = inset ? "inset" : "";
  return "" + (String(inset$1) + (" " + (String(x) + (" " + (String(y) + (" " + (String(blur) + (" " + (String(spread) + (" " + (String(color) + "")))))))))));
}

function boxShadow(v) {
  return prop("boxShadow", v);
}

function boxShadows(vs) {
  if (vs) {
    return prop("boxShadow", TypedGlamor__InternalHelpers.Values[/* join */0](vs));
  } else {
    return /* :: */[
            /* tuple */[
              "boxShadow",
              "none"
            ],
            /* [] */0
          ];
  }
}

function fontFamily(v) {
  return prop("fontFamily", v);
}

function fontFamilies(vs) {
  return prop("fontFamily", TypedGlamor__InternalHelpers.Values[/* join */0](List.map((function (prim) {
                        return prim;
                      }), vs)));
}

function fontStyle(v) {
  return prop("fontStyle", v);
}

function fontVariant(v) {
  return prop("fontVariant", v);
}

function fontWeight(v) {
  return prop("fontWeight", v);
}

function fontSize(v) {
  return prop("fontSize", v);
}

function font(v) {
  return prop("font", v);
}

function textIndent(v) {
  return prop("textIndent", v);
}

function textAlign(v) {
  return prop("textAlign", v);
}

function textDecoration(v) {
  return prop("textDecoration", v);
}

function letterSpacing(v) {
  return prop("letterSpacing", v);
}

function wordSpacing(v) {
  return prop("wrdSpacing", v);
}

function textTransform(v) {
  return prop("textTransform", v);
}

function whiteSpace(v) {
  return prop("whiteSpace", v);
}

function cursor(v) {
  return prop("cursor", v);
}

function outline(value) {
  return prop("outline", value);
}

function outline2(width, color, style) {
  var value;
  if (width) {
    var w = width[0];
    value = color ? "" + (String(w) + (" " + (String(style) + (" " + (String(color[0]) + ""))))) : "" + (String(w) + (" " + (String(style) + "")));
  } else {
    value = color ? "" + (String(style) + (" " + (String(color[0]) + ""))) : style;
  }
  return prop("outline", value);
}

function outline3(width, style, color) {
  return prop("outline", "" + (String(width) + (" " + (String(style) + (" " + (String(color) + ""))))));
}

function outlineWidth(v) {
  return prop("outlineWidth", v);
}

function outlineStyle(v) {
  return prop("outlineStyle", v);
}

function outlineColor(v) {
  return prop("outlineColor", v);
}

function transitionProperty(v) {
  return prop("transitionProperty", v);
}

function transitionProperties(vs) {
  if (vs) {
    return prop("transitionProperty", TypedGlamor__InternalHelpers.Values[/* join */0](vs));
  } else {
    return /* :: */[
            /* tuple */[
              "transitionProperty",
              "none"
            ],
            /* [] */0
          ];
  }
}

function transitionDuration(v) {
  return prop("transitionDuration", v);
}

function transitionDurations(vs) {
  return prop("transitionDuration", TypedGlamor__InternalHelpers.Values[/* join */0](vs));
}

function transitionTimingFunction(v) {
  return prop("transitionTimingFunction", v);
}

function transitionTimingFunctions(vs) {
  return prop("transitionTimingFunction", TypedGlamor__InternalHelpers.Values[/* join */0](vs));
}

function transitionDelay(v) {
  return prop("transitionDelay", v);
}

function transitionDelays(vs) {
  return prop("transitionDelay", TypedGlamor__InternalHelpers.Values[/* join */0](vs));
}

function transition(v) {
  return prop("transition", v);
}

function transitions(vs) {
  if (vs) {
    return prop("transition", $$String.concat(", ", List.map((function (param) {
                          return "" + (String(param[0]) + (" " + (String(param[1]) + (" " + (String(param[2]) + (" " + (String(param[3]) + "")))))));
                        }), vs)));
  } else {
    return /* :: */[
            /* tuple */[
              "transition",
              "none"
            ],
            /* [] */0
          ];
  }
}

function transform(v) {
  return prop("transform", v);
}

function transforms(vs) {
  if (vs) {
    return prop("transform", $$String.concat(", ", List.map((function (prim) {
                          return prim;
                        }), vs)));
  } else {
    return /* :: */[
            /* tuple */[
              "transform",
              "none"
            ],
            /* [] */0
          ];
  }
}

function transformOrigin(v) {
  return prop("transformOrigin", v);
}

function transformOrigin2(h, v) {
  return prop("transformOrigin", "" + (String(h) + (" " + (String(v) + ""))));
}

function transformBox(v) {
  return prop("transformBox", v);
}

function flexDirection(v) {
  return prop("flexDirection", v);
}

function flexWrap(v) {
  return prop("flexWrap", v);
}

function flexFlow(v) {
  return prop("flexFlow", v);
}

function flexFlow2(direction, wrap) {
  return prop("flexFlow", "" + (String(direction) + (" " + (String(wrap) + ""))));
}

function order(v) {
  return prop("order", String(v));
}

function flex_(v) {
  return prop("flex", v);
}

function flex3(grow, shrink, basis) {
  return prop("flex", "" + (String(grow) + (" " + (String(shrink) + (" " + (String(basis) + ""))))));
}

function flexGrow(v) {
  return prop("flexGrow", String(v));
}

function flexShrink(v) {
  return prop("flexShrink", String(v));
}

function flexBasis(v) {
  return prop("flexBasis", v);
}

function justifyContent(v) {
  return prop("justifyContent", v);
}

function alignItems(v) {
  return prop("alignItems", v);
}

function alignSelf(v) {
  return prop("alignSelf", v);
}

function alignContent(v) {
  return prop("alignContent", v);
}

function anplusb(a, b) {
  return "" + (String(a) + ("n+(" + (String(b) + ")")));
}

function select(selector, declarations) {
  return /* :: */[
          /* tuple */[
            selector,
            TypedGlamor__InternalHelpers.Declarations[/* toDict */0](declarations)
          ],
          /* [] */0
        ];
}

function active(declarations) {
  return select(":active", declarations);
}

function checked(declarations) {
  return select(":checked", declarations);
}

function dir(dir$1, declarations) {
  return select(":lang(" + (String(dir$1) + ")"), declarations);
}

function disabled(declarations) {
  return select(":disabled", declarations);
}

function empty(declarations) {
  return select(":empty", declarations);
}

function enabled(declarations) {
  return select(":enabled", declarations);
}

function first(declarations) {
  return select(":first", declarations);
}

function firstChild(declarations) {
  return select(":first-child", declarations);
}

function firstOfType(declarations) {
  return select(":first-of-type", declarations);
}

function fullscreen(declarations) {
  return select(":fullscreen", declarations);
}

function focus(declarations) {
  return select(":focus", declarations);
}

function hover(declarations) {
  return select(":hover", declarations);
}

function visited(declarations) {
  return select(":visited", declarations);
}

function indeterminate(declarations) {
  return select(":indeterminate", declarations);
}

function invalid(declarations) {
  return select(":invalid", declarations);
}

function lang(lang$1, declarations) {
  return select(":any(" + (String(lang$1) + ")"), declarations);
}

function lastChild(declarations) {
  return select(":last-child", declarations);
}

function lastOfType(declarations) {
  return select(":last-of-type", declarations);
}

function link(declarations) {
  return select(":link", declarations);
}

function nthChild(pattern, declarations) {
  return select(":nth-child(" + (String(pattern) + ")"), declarations);
}

function nthLastChild(pattern, declarations) {
  return select(":nth-last-child(" + (String(pattern) + ")"), declarations);
}

function nthLastOfType(pattern, declarations) {
  return select(":nth-last-of-type(" + (String(pattern) + ")"), declarations);
}

function nthOfType(pattern, declarations) {
  return select(":nth-of-type(" + (String(pattern) + ")"), declarations);
}

function onlyChild(declarations) {
  return select(":only-child", declarations);
}

function onlyOfType(declarations) {
  return select(":only-of-type", declarations);
}

function optional(declarations) {
  return select(":optional", declarations);
}

function outOfRange(declarations) {
  return select(":out-of-range", declarations);
}

function readWrite(declarations) {
  return select(":read-write", declarations);
}

function required(declarations) {
  return select(":required", declarations);
}

function root(declarations) {
  return select(":root", declarations);
}

function scope(declarations) {
  return select(":scope", declarations);
}

function target(declarations) {
  return select(":target", declarations);
}

function valid(declarations) {
  return select(":valid", declarations);
}

var $$null = null;

var unsafe = prop;

function label(label$1) {
  return prop("label", label$1);
}

var nothing = unsafe("nothing", $$null);

function add(decls) {
  return List.flatten(List.map((function (prim) {
                    return prim;
                  }), decls));
}

function css(extend, declarations) {
  var $$this = TypedGlamor__InternalHelpers.Declarations[/* toDict */0](declarations);
  if (extend) {
    return Glamor.merge(extend[0], Glamor.css($$this));
  } else {
    return Glamor.css($$this);
  }
}

function $$global(selector, declarations) {
  Glamor.css.global(selector, TypedGlamor__InternalHelpers.Declarations[/* toDict */0](declarations));
  return /* () */0;
}

function toString(prim) {
  return String(prim);
}

var Core = /* CssCore */[];

var inherit_ = "inherit";

var initial = "initial";

var unset = "unset";

var zero = "0";

var currentColor = "currentColor";

var transparent = "transparent";

var aliceblue = "aliceblue";

var antiquewhite = "antiquewhite";

var aqua = "aqua";

var aquamarine = "aquamarine";

var azure = "azure";

var beige = "beige";

var bisque = "bisque";

var black = "black";

var blanchedalmond = "blanchedalmond";

var blue = "blue";

var blueviolet = "blueviolet";

var brown = "brown";

var burlywood = "burlywood";

var cadetblue = "cadetblue";

var chartreuse = "chartreuse";

var chocolate = "chocolate";

var coral = "coral";

var cornflowerblue = "cornflowerblue";

var cornsilk = "cornsilk";

var crimson = "crimson";

var cyan = "cyan";

var darkblue = "darkblue";

var darkcyan = "darkcyan";

var darkgoldenrod = "darkgoldenrod";

var darkgray = "darkgray";

var darkgrey = "darkgrey";

var darkgreen = "darkgreen";

var darkkhaki = "darkkhaki";

var darkmagenta = "darkmagenta";

var darkolivegreen = "darkolivegreen";

var darkorange = "darkorange";

var darkorchid = "darkorchid";

var darkred = "darkred";

var darksalmon = "darksalmon";

var darkseagreen = "darkseagreen";

var darkslateblue = "darkslateblue";

var darkslategray = "darkslategray";

var darkslategrey = "darkslategrey";

var darkturquoise = "darkturquoise";

var darkviolet = "darkviolet";

var deeppink = "deeppink";

var deepskyblue = "deepskyblue";

var dimgray = "dimgray";

var dimgrey = "dimgrey";

var dodgerblue = "dodgerblue";

var firebrick = "firebrick";

var floralwhite = "floralwhite";

var forestgreen = "forestgreen";

var fuchsia = "fuchsia";

var gainsboro = "gainsboro";

var ghostwhite = "ghostwhite";

var gold = "gold";

var goldenrod = "goldenrod";

var gray = "gray";

var grey = "grey";

var green = "green";

var greenyellow = "greenyellow";

var honeydew = "honeydew";

var hotpink = "hotpink";

var indianred = "indianred";

var indigo = "indigo";

var ivory = "ivory";

var khaki = "khaki";

var lavender = "lavender";

var lavenderblush = "lavenderblush";

var lawngreen = "lawngreen";

var lemonchiffon = "lemonchiffon";

var lightblue = "lightblue";

var lightcoral = "lightcoral";

var lightcyan = "lightcyan";

var lightgoldenrodyellow = "lightgoldenrodyellow";

var lightgray = "lightgray";

var lightgrey = "lightgrey";

var lightgreen = "lightgreen";

var lightpink = "lightpink";

var lightsalmon = "lightsalmon";

var lightseagreen = "lightseagreen";

var lightskyblue = "lightskyblue";

var lightslategray = "lightslategray";

var lightslategrey = "lightslategrey";

var lightsteelblue = "lightsteelblue";

var lightyellow = "lightyellow";

var lime = "lime";

var limegreen = "limegreen";

var linen = "linen";

var magenta = "magenta";

var maroon = "maroon";

var mediumaquamarine = "mediumaquamarine";

var mediumblue = "mediumblue";

var mediumorchid = "mediumorchid";

var mediumpurple = "mediumpurple";

var mediumseagreen = "mediumseagreen";

var mediumslateblue = "mediumslateblue";

var mediumspringgreen = "mediumspringgreen";

var mediumturquoise = "mediumturquoise";

var mediumvioletred = "mediumvioletred";

var midnightblue = "midnightblue";

var mintcream = "mintcream";

var mistyrose = "mistyrose";

var moccasin = "moccasin";

var navajowhite = "navajowhite";

var navy = "navy";

var oldlace = "oldlace";

var olive = "olive";

var olivedrab = "olivedrab";

var orange = "orange";

var orangered = "orangered";

var orchid = "orchid";

var palegoldenrod = "palegoldenrod";

var palegreen = "palegreen";

var paleturquoise = "paleturquoise";

var palevioletred = "palevioletred";

var papayawhip = "papayawhip";

var peachpuff = "peachpuff";

var peru = "peru";

var pink = "pink";

var plum = "plum";

var powderblue = "powderblue";

var purple = "purple";

var red = "red";

var rosybrown = "rosybrown";

var royalblue = "royalblue";

var saddlebrown = "saddlebrown";

var salmon = "salmon";

var sandybrown = "sandybrown";

var seagreen = "seagreen";

var seashell = "seashell";

var sienna = "sienna";

var silver = "silver";

var skyblue = "skyblue";

var slateblue = "slateblue";

var slategray = "slategray";

var slategrey = "slategrey";

var snow = "snow";

var springgreen = "springgreen";

var steelblue = "steelblue";

var tan = "tan";

var teal = "teal";

var thistle = "thistle";

var tomato = "tomato";

var turquoise = "turquoise";

var violet = "violet";

var wheat = "wheat";

var white = "white";

var whitesmoke = "whitesmoke";

var yellow = "yellow";

var yellowgreen = "yellowgreen";

var linear = "linear";

var ease = "ease";

var easeIn = "ease-in";

var easeOut = "ease-out";

var easeInOut = "ease-in-out";

var stepStart = "step-start";

var stepEnd = "step-end";

var none = "none";

var auto = "auto";

var thin = "thin";

var medium = "medium";

var thick = "thick";

var hidden = "hidden";

var dotted = "dotted";

var dashed = "dashed";

var solid = "solid";

var $$double = "double";

var groove = "groove";

var ridge = "ridge";

var inset = "inset";

var outset = "outset";

var inline = "inline";

var block = "block";

var listItem = "list-item";

var inlineBlock = "inline-block";

var table = "table";

var inlineTable = "inline-table";

var tableRowGroup = "table-row-group";

var tableHeaderGroup = "table-header-group";

var tableFooterGroup = "table-footer-group";

var tableRow = "table-row";

var tableColumnGroup = "table-column-group";

var tableColumn = "table-column";

var tableCell = "table-cell";

var tableCaption = "table-caption";

var flex = "flex";

var inlineFlex = "inlineFlex";

var $$static = "static";

var relative = "relative";

var absolute = "absolute";

var fixed = "fixed";

var left = "left";

var right = "right";

var both = "both";

var ltr = "ltr";

var rtl = "rtl";

var normal = "normal";

var embed = "embed";

var bidiOverride = "bidi-override";

var baseline = "baseline";

var sub = "sub";

var $$super = "super";

var top = "top";

var textTop = "text-top";

var middle = "middle";

var bottom = "bottom";

var textBottom = "text-bottom";

var visible = "visible";

var scroll = "scroll";

var collapse = "collapse";

var start = "start";

var end_ = "end";

var repeat = "repeat";

var repeatX = "repeat-x";

var repeatY = "repeat-y";

var noRepeat = "no-repeat";

var center = "center";

var serif = "serif";

var sansSerif = "sans-serif";

var cursive = "cursive";

var fantasy = "fantasy";

var monospace = "monospace";

var italic = "italic";

var oblique = "oblique";

var smallCaps = "small-caps";

var bold = "bold";

var bolder = "bolder";

var lighter = "lighter";

var _100 = "100";

var _200 = "200";

var _300 = "300";

var _400 = "400";

var _500 = "500";

var _600 = "600";

var _700 = "700";

var _800 = "800";

var _900 = "900";

var xxSmall = "xx-small";

var xSmall = "x-small";

var small = "small";

var meduium = "meduium";

var large = "large";

var xLarge = "x-large";

var xxLarge = "xx-large";

var larger = "larger";

var smaller = "smaller";

var caption = "caption";

var icon = "icon";

var menu = "menu";

var messageBox = "message-box";

var smallCaption = "small-caption";

var statusBar = "status-bar";

var justify = "justify";

var underline = "underline";

var overline = "overline";

var lineThrough = "line-through";

var blink = "blink";

var capitalize = "capitalize";

var uppercase = "uppercase";

var lowercase = "lowercase";

var pre = "pre";

var nowrap = "nowrap";

var preWrap = "pre-wrap";

var preLine = "pre-line";

var crosshair = "crosshair";

var $$default = "default";

var pointer = "pointer";

var move = "move";

var eResize = "e-resize";

var neResize = "ne-resize";

var nwResize = "nw-resize";

var nResize = "n-resize";

var seResize = "se-resize";

var swResize = "sw-resize";

var sResize = "s-resize";

var wResize = "w-resize";

var text = "text";

var wait = "wait";

var help = "help";

var progress = "progress";

var invert = "invert";

var borderBox = "border-box";

var fillBox = "fill-box";

var viewBox = "view-box";

var row = "row";

var rowReverse = "row-reverse";

var column = "column";

var columnReverse = "column-reverse";

var wrap = "wrap";

var wrapReverse = "wrap-reverse";

var content = "content";

var flexStart = "flex-start";

var flexEnd = "flex-end";

var spaceBetween = "space-between";

var spaceAround = "space-around";

var stretch = "stretch";

var odd = "odd";

var even = "even";

exports.Core = Core;
exports.inherit_ = inherit_;
exports.initial = initial;
exports.unset = unset;
exports.em = em;
exports.ex = ex;
exports.ch = ch;
exports.rem = rem;
exports.vw = vw;
exports.vh = vh;
exports.vmin = vmin;
exports.vmax = vmax;
exports.cm = cm;
exports.mm = mm;
exports.q = q;
exports.inch = inch;
exports.pc = pc;
exports.pt = pt;
exports.px = px;
exports.zero = zero;
exports.pct = pct;
exports.rad = rad;
exports.grad = grad;
exports.deg = deg;
exports.turn = turn;
exports.s = s;
exports.ms = ms;
exports.url = url;
exports.rgb = rgb;
exports.rgba = rgba;
exports.hsl = hsl;
exports.hsla = hsla;
exports.hex = hex;
exports.currentColor = currentColor;
exports.transparent = transparent;
exports.aliceblue = aliceblue;
exports.antiquewhite = antiquewhite;
exports.aqua = aqua;
exports.aquamarine = aquamarine;
exports.azure = azure;
exports.beige = beige;
exports.bisque = bisque;
exports.black = black;
exports.blanchedalmond = blanchedalmond;
exports.blue = blue;
exports.blueviolet = blueviolet;
exports.brown = brown;
exports.burlywood = burlywood;
exports.cadetblue = cadetblue;
exports.chartreuse = chartreuse;
exports.chocolate = chocolate;
exports.coral = coral;
exports.cornflowerblue = cornflowerblue;
exports.cornsilk = cornsilk;
exports.crimson = crimson;
exports.cyan = cyan;
exports.darkblue = darkblue;
exports.darkcyan = darkcyan;
exports.darkgoldenrod = darkgoldenrod;
exports.darkgray = darkgray;
exports.darkgrey = darkgrey;
exports.darkgreen = darkgreen;
exports.darkkhaki = darkkhaki;
exports.darkmagenta = darkmagenta;
exports.darkolivegreen = darkolivegreen;
exports.darkorange = darkorange;
exports.darkorchid = darkorchid;
exports.darkred = darkred;
exports.darksalmon = darksalmon;
exports.darkseagreen = darkseagreen;
exports.darkslateblue = darkslateblue;
exports.darkslategray = darkslategray;
exports.darkslategrey = darkslategrey;
exports.darkturquoise = darkturquoise;
exports.darkviolet = darkviolet;
exports.deeppink = deeppink;
exports.deepskyblue = deepskyblue;
exports.dimgray = dimgray;
exports.dimgrey = dimgrey;
exports.dodgerblue = dodgerblue;
exports.firebrick = firebrick;
exports.floralwhite = floralwhite;
exports.forestgreen = forestgreen;
exports.fuchsia = fuchsia;
exports.gainsboro = gainsboro;
exports.ghostwhite = ghostwhite;
exports.gold = gold;
exports.goldenrod = goldenrod;
exports.gray = gray;
exports.grey = grey;
exports.green = green;
exports.greenyellow = greenyellow;
exports.honeydew = honeydew;
exports.hotpink = hotpink;
exports.indianred = indianred;
exports.indigo = indigo;
exports.ivory = ivory;
exports.khaki = khaki;
exports.lavender = lavender;
exports.lavenderblush = lavenderblush;
exports.lawngreen = lawngreen;
exports.lemonchiffon = lemonchiffon;
exports.lightblue = lightblue;
exports.lightcoral = lightcoral;
exports.lightcyan = lightcyan;
exports.lightgoldenrodyellow = lightgoldenrodyellow;
exports.lightgray = lightgray;
exports.lightgrey = lightgrey;
exports.lightgreen = lightgreen;
exports.lightpink = lightpink;
exports.lightsalmon = lightsalmon;
exports.lightseagreen = lightseagreen;
exports.lightskyblue = lightskyblue;
exports.lightslategray = lightslategray;
exports.lightslategrey = lightslategrey;
exports.lightsteelblue = lightsteelblue;
exports.lightyellow = lightyellow;
exports.lime = lime;
exports.limegreen = limegreen;
exports.linen = linen;
exports.magenta = magenta;
exports.maroon = maroon;
exports.mediumaquamarine = mediumaquamarine;
exports.mediumblue = mediumblue;
exports.mediumorchid = mediumorchid;
exports.mediumpurple = mediumpurple;
exports.mediumseagreen = mediumseagreen;
exports.mediumslateblue = mediumslateblue;
exports.mediumspringgreen = mediumspringgreen;
exports.mediumturquoise = mediumturquoise;
exports.mediumvioletred = mediumvioletred;
exports.midnightblue = midnightblue;
exports.mintcream = mintcream;
exports.mistyrose = mistyrose;
exports.moccasin = moccasin;
exports.navajowhite = navajowhite;
exports.navy = navy;
exports.oldlace = oldlace;
exports.olive = olive;
exports.olivedrab = olivedrab;
exports.orange = orange;
exports.orangered = orangered;
exports.orchid = orchid;
exports.palegoldenrod = palegoldenrod;
exports.palegreen = palegreen;
exports.paleturquoise = paleturquoise;
exports.palevioletred = palevioletred;
exports.papayawhip = papayawhip;
exports.peachpuff = peachpuff;
exports.peru = peru;
exports.pink = pink;
exports.plum = plum;
exports.powderblue = powderblue;
exports.purple = purple;
exports.red = red;
exports.rosybrown = rosybrown;
exports.royalblue = royalblue;
exports.saddlebrown = saddlebrown;
exports.salmon = salmon;
exports.sandybrown = sandybrown;
exports.seagreen = seagreen;
exports.seashell = seashell;
exports.sienna = sienna;
exports.silver = silver;
exports.skyblue = skyblue;
exports.slateblue = slateblue;
exports.slategray = slategray;
exports.slategrey = slategrey;
exports.snow = snow;
exports.springgreen = springgreen;
exports.steelblue = steelblue;
exports.tan = tan;
exports.teal = teal;
exports.thistle = thistle;
exports.tomato = tomato;
exports.turquoise = turquoise;
exports.violet = violet;
exports.wheat = wheat;
exports.white = white;
exports.whitesmoke = whitesmoke;
exports.yellow = yellow;
exports.yellowgreen = yellowgreen;
exports.rect = rect;
exports.ident = ident;
exports.AnimatableProperty = AnimatableProperty;
exports.linear = linear;
exports.ease = ease;
exports.easeIn = easeIn;
exports.easeOut = easeOut;
exports.easeInOut = easeInOut;
exports.cubicBezier = cubicBezier;
exports.stepStart = stepStart;
exports.stepEnd = stepEnd;
exports.steps = steps;
exports.frames = frames;
exports.matrix = matrix;
exports.translate = translate;
exports.translateX = translateX;
exports.translateY = translateY;
exports.scale = scale;
exports.scaleX = scaleX;
exports.scaleY = scaleY;
exports.rotate = rotate;
exports.skewX = skewX;
exports.skewY = skewY;
exports.none = none;
exports.auto = auto;
exports.thin = thin;
exports.medium = medium;
exports.thick = thick;
exports.hidden = hidden;
exports.dotted = dotted;
exports.dashed = dashed;
exports.solid = solid;
exports.$$double = $$double;
exports.groove = groove;
exports.ridge = ridge;
exports.inset = inset;
exports.outset = outset;
exports.inline = inline;
exports.block = block;
exports.listItem = listItem;
exports.inlineBlock = inlineBlock;
exports.table = table;
exports.inlineTable = inlineTable;
exports.tableRowGroup = tableRowGroup;
exports.tableHeaderGroup = tableHeaderGroup;
exports.tableFooterGroup = tableFooterGroup;
exports.tableRow = tableRow;
exports.tableColumnGroup = tableColumnGroup;
exports.tableColumn = tableColumn;
exports.tableCell = tableCell;
exports.tableCaption = tableCaption;
exports.flex = flex;
exports.inlineFlex = inlineFlex;
exports.$$static = $$static;
exports.relative = relative;
exports.absolute = absolute;
exports.fixed = fixed;
exports.left = left;
exports.right = right;
exports.both = both;
exports.ltr = ltr;
exports.rtl = rtl;
exports.normal = normal;
exports.embed = embed;
exports.bidiOverride = bidiOverride;
exports.baseline = baseline;
exports.sub = sub;
exports.$$super = $$super;
exports.top = top;
exports.textTop = textTop;
exports.middle = middle;
exports.bottom = bottom;
exports.textBottom = textBottom;
exports.visible = visible;
exports.scroll = scroll;
exports.collapse = collapse;
exports.start = start;
exports.end_ = end_;
exports.repeat = repeat;
exports.repeatX = repeatX;
exports.repeatY = repeatY;
exports.noRepeat = noRepeat;
exports.center = center;
exports.serif = serif;
exports.sansSerif = sansSerif;
exports.cursive = cursive;
exports.fantasy = fantasy;
exports.monospace = monospace;
exports.italic = italic;
exports.oblique = oblique;
exports.smallCaps = smallCaps;
exports.bold = bold;
exports.bolder = bolder;
exports.lighter = lighter;
exports._100 = _100;
exports._200 = _200;
exports._300 = _300;
exports._400 = _400;
exports._500 = _500;
exports._600 = _600;
exports._700 = _700;
exports._800 = _800;
exports._900 = _900;
exports.xxSmall = xxSmall;
exports.xSmall = xSmall;
exports.small = small;
exports.meduium = meduium;
exports.large = large;
exports.xLarge = xLarge;
exports.xxLarge = xxLarge;
exports.larger = larger;
exports.smaller = smaller;
exports.caption = caption;
exports.icon = icon;
exports.menu = menu;
exports.messageBox = messageBox;
exports.smallCaption = smallCaption;
exports.statusBar = statusBar;
exports.justify = justify;
exports.underline = underline;
exports.overline = overline;
exports.lineThrough = lineThrough;
exports.blink = blink;
exports.capitalize = capitalize;
exports.uppercase = uppercase;
exports.lowercase = lowercase;
exports.pre = pre;
exports.nowrap = nowrap;
exports.preWrap = preWrap;
exports.preLine = preLine;
exports.crosshair = crosshair;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
exports.pointer = pointer;
exports.move = move;
exports.eResize = eResize;
exports.neResize = neResize;
exports.nwResize = nwResize;
exports.nResize = nResize;
exports.seResize = seResize;
exports.swResize = swResize;
exports.sResize = sResize;
exports.wResize = wResize;
exports.text = text;
exports.wait = wait;
exports.help = help;
exports.progress = progress;
exports.invert = invert;
exports.borderBox = borderBox;
exports.fillBox = fillBox;
exports.viewBox = viewBox;
exports.row = row;
exports.rowReverse = rowReverse;
exports.column = column;
exports.columnReverse = columnReverse;
exports.wrap = wrap;
exports.wrapReverse = wrapReverse;
exports.content = content;
exports.flexStart = flexStart;
exports.flexEnd = flexEnd;
exports.spaceBetween = spaceBetween;
exports.spaceAround = spaceAround;
exports.stretch = stretch;
exports.$$int = $$int;
exports.num = num;
exports.margin = margin;
exports.margin2 = margin2;
exports.margin3 = margin3;
exports.margin4 = margin4;
exports.marginTop = marginTop;
exports.marginRight = marginRight;
exports.marginBottom = marginBottom;
exports.marginLeft = marginLeft;
exports.padding = padding;
exports.padding2 = padding2;
exports.padding3 = padding3;
exports.padding4 = padding4;
exports.paddingTop = paddingTop;
exports.paddingRight = paddingRight;
exports.paddingBottom = paddingBottom;
exports.paddingLeft = paddingLeft;
exports.border = border;
exports.border2 = border2;
exports.border3 = border3;
exports.borderTop = borderTop;
exports.borderTop3 = borderTop3;
exports.borderRight = borderRight;
exports.borderRight3 = borderRight3;
exports.borderBottom = borderBottom;
exports.borderBottom3 = borderBottom3;
exports.borderLeft = borderLeft;
exports.borderLeft3 = borderLeft3;
exports.borderWidth = borderWidth;
exports.borderTopWidth = borderTopWidth;
exports.borderRightWidth = borderRightWidth;
exports.borderBottomWidth = borderBottomWidth;
exports.borderLeftWidth = borderLeftWidth;
exports.borderStyle = borderStyle;
exports.borderTopStyle = borderTopStyle;
exports.borderRightStyle = borderRightStyle;
exports.borderBottomStyle = borderBottomStyle;
exports.borderLeftStyle = borderLeftStyle;
exports.borderColor = borderColor;
exports.borderTopColor = borderTopColor;
exports.borderRightColor = borderRightColor;
exports.borderBottomColor = borderBottomColor;
exports.borderLeftColor = borderLeftColor;
exports.borderRadius = borderRadius;
exports.borderTopLeftRadius = borderTopLeftRadius;
exports.borderTopLeftRadius2 = borderTopLeftRadius2;
exports.borderTopRightRadius = borderTopRightRadius;
exports.borderTopRightRadius2 = borderTopRightRadius2;
exports.borderBottomRightRadius = borderBottomRightRadius;
exports.borderBottomRightRadius2 = borderBottomRightRadius2;
exports.borderBottomLeftRadius = borderBottomLeftRadius;
exports.borderBottomLeftRadius2 = borderBottomLeftRadius2;
exports.display = display;
exports.position = position;
exports.offsetTop = offsetTop;
exports.offsetRight = offsetRight;
exports.offsetBottom = offsetBottom;
exports.offsetLeft = offsetLeft;
exports.$$float = $$float;
exports.clear = clear;
exports.zIndex = zIndex;
exports.direction = direction;
exports.unicodeBidi = unicodeBidi;
exports.width = width;
exports.minWidth = minWidth;
exports.maxWidth = maxWidth;
exports.height = height;
exports.minHeight = minHeight;
exports.maxHeight = maxHeight;
exports.lineHeight = lineHeight;
exports.verticalAlign = verticalAlign;
exports.overflow = overflow;
exports.clip = clip;
exports.visibility = visibility;
exports.color = color;
exports.opacity = opacity;
exports.background = background;
exports.backgroundColor = backgroundColor;
exports.backgroundImage = backgroundImage;
exports.backgroundRepeat = backgroundRepeat;
exports.backgroundAttachment = backgroundAttachment;
exports.backgroundPosition = backgroundPosition;
exports.backgroundPosition2 = backgroundPosition2;
exports.shadow = shadow;
exports.boxShadow = boxShadow;
exports.boxShadows = boxShadows;
exports.fontFamily = fontFamily;
exports.fontFamilies = fontFamilies;
exports.fontStyle = fontStyle;
exports.fontVariant = fontVariant;
exports.fontWeight = fontWeight;
exports.fontSize = fontSize;
exports.font = font;
exports.textIndent = textIndent;
exports.textAlign = textAlign;
exports.textDecoration = textDecoration;
exports.letterSpacing = letterSpacing;
exports.wordSpacing = wordSpacing;
exports.textTransform = textTransform;
exports.whiteSpace = whiteSpace;
exports.cursor = cursor;
exports.outline = outline;
exports.outline2 = outline2;
exports.outline3 = outline3;
exports.outlineWidth = outlineWidth;
exports.outlineStyle = outlineStyle;
exports.outlineColor = outlineColor;
exports.transitionProperty = transitionProperty;
exports.transitionProperties = transitionProperties;
exports.transitionDuration = transitionDuration;
exports.transitionDurations = transitionDurations;
exports.transitionTimingFunction = transitionTimingFunction;
exports.transitionTimingFunctions = transitionTimingFunctions;
exports.transitionDelay = transitionDelay;
exports.transitionDelays = transitionDelays;
exports.transition = transition;
exports.transitions = transitions;
exports.transform = transform;
exports.transforms = transforms;
exports.transformOrigin = transformOrigin;
exports.transformOrigin2 = transformOrigin2;
exports.transformBox = transformBox;
exports.flexDirection = flexDirection;
exports.flexWrap = flexWrap;
exports.flexFlow = flexFlow;
exports.flexFlow2 = flexFlow2;
exports.order = order;
exports.flex_ = flex_;
exports.flex3 = flex3;
exports.flexGrow = flexGrow;
exports.flexShrink = flexShrink;
exports.flexBasis = flexBasis;
exports.justifyContent = justifyContent;
exports.alignItems = alignItems;
exports.alignSelf = alignSelf;
exports.alignContent = alignContent;
exports.$$null = $$null;
exports.odd = odd;
exports.even = even;
exports.anplusb = anplusb;
exports.select = select;
exports.active = active;
exports.checked = checked;
exports.dir = dir;
exports.disabled = disabled;
exports.empty = empty;
exports.enabled = enabled;
exports.first = first;
exports.firstChild = firstChild;
exports.firstOfType = firstOfType;
exports.fullscreen = fullscreen;
exports.focus = focus;
exports.hover = hover;
exports.visited = visited;
exports.indeterminate = indeterminate;
exports.invalid = invalid;
exports.lang = lang;
exports.lastChild = lastChild;
exports.lastOfType = lastOfType;
exports.link = link;
exports.nthChild = nthChild;
exports.nthLastChild = nthLastChild;
exports.nthLastOfType = nthLastOfType;
exports.nthOfType = nthOfType;
exports.onlyChild = onlyChild;
exports.onlyOfType = onlyOfType;
exports.optional = optional;
exports.outOfRange = outOfRange;
exports.readWrite = readWrite;
exports.required = required;
exports.root = root;
exports.scope = scope;
exports.target = target;
exports.valid = valid;
exports.unsafe = unsafe;
exports.label = label;
exports.nothing = nothing;
exports.add = add;
exports.css = css;
exports.$$global = $$global;
exports.toString = toString;
/* nothing Not a pure module */
