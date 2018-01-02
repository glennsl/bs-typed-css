// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var List    = require("bs-platform/lib/js/list.js");
var Js_dict = require("bs-platform/lib/js/js_dict.js");

function em(n) {
  return "" + (String(n) + "em");
}

function ex(n) {
  return "" + (String(n) + "ex");
}

function inch(n) {
  return "" + (String(n) + "in");
}

function cm(n) {
  return "" + (String(n) + "cm");
}

function mm(n) {
  return "" + (String(n) + "mm");
}

function pt(n) {
  return "" + (String(n) + "pt");
}

function pc(n) {
  return "" + (String(n) + "pc");
}

function px(n) {
  return "" + (String(n) + "px");
}

function pct(n) {
  return "" + (String(n) + "%");
}

function rad(i) {
  return "" + (String(i) + "rad");
}

function grad(i) {
  return "" + (String(i) + "grad");
}

function deg(i) {
  return "" + (String(i) + "deg");
}

function turn(i) {
  return "" + (String(i) + "turn");
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

function hex(v) {
  return "#" + v.toString(16);
}

function margin(value) {
  return /* tuple */[
          "margin",
          value
        ];
}

function margin2(v, h) {
  return /* tuple */[
          "margin",
          "" + (String(v) + (" " + (String(h) + "")))
        ];
}

function margin3(top, h, bottom) {
  return /* tuple */[
          "margin",
          "" + (String(top) + (" " + (String(h) + (" " + (String(bottom) + "")))))
        ];
}

function margin4(top, right, bottom, left) {
  return /* tuple */[
          "margin",
          "" + (String(top) + (" " + (String(right) + (" " + (String(bottom) + (" " + (String(left) + "")))))))
        ];
}

function marginTop(value) {
  return /* tuple */[
          "marginTop",
          value
        ];
}

function marginRight(value) {
  return /* tuple */[
          "marginRight",
          value
        ];
}

function marginBottom(value) {
  return /* tuple */[
          "marginBottom",
          value
        ];
}

function marginLeft(value) {
  return /* tuple */[
          "marginLeft",
          value
        ];
}

function padding(value) {
  return /* tuple */[
          "padding",
          value
        ];
}

function padding2(v, h) {
  return /* tuple */[
          "padding",
          "" + (String(v) + (" " + (String(h) + "")))
        ];
}

function padding3(top, h, bottom) {
  return /* tuple */[
          "padding",
          "" + (String(top) + (" " + (String(h) + (" " + (String(bottom) + "")))))
        ];
}

function padding4(top, right, bottom, left) {
  return /* tuple */[
          "padding",
          "" + (String(top) + (" " + (String(right) + (" " + (String(bottom) + (" " + (String(left) + "")))))))
        ];
}

function paddingTop(value) {
  return /* tuple */[
          "paddingTop",
          value
        ];
}

function paddingRight(value) {
  return /* tuple */[
          "paddingRight",
          value
        ];
}

function paddingBottom(value) {
  return /* tuple */[
          "paddingBottom",
          value
        ];
}

function paddingLeft(value) {
  return /* tuple */[
          "paddingLeft",
          value
        ];
}

function border(width, style, color) {
  return /* tuple */[
          "border",
          "" + (String(width) + (" " + (String(style) + (" " + (String(color) + "")))))
        ];
}

function borderWidth(value) {
  return /* tuple */[
          "borderWidth",
          value
        ];
}

function borderTopWidth(value) {
  return /* tuple */[
          "borderTopWidth",
          value
        ];
}

function borderRightWidth(value) {
  return /* tuple */[
          "borderRightWidth",
          value
        ];
}

function borderBottomWidth(value) {
  return /* tuple */[
          "borderBottomWidth",
          value
        ];
}

function borderLeftWidth(value) {
  return /* tuple */[
          "borderLeftWidth",
          value
        ];
}

function borderStyle(value) {
  return /* tuple */[
          "borderStyle",
          value
        ];
}

function borderTopStyle(value) {
  return /* tuple */[
          "borderTopStyle",
          value
        ];
}

function borderRightStyle(value) {
  return /* tuple */[
          "borderRightStyle",
          value
        ];
}

function borderBottomStyle(value) {
  return /* tuple */[
          "borderBottomStyle",
          value
        ];
}

function borderLeftStyle(value) {
  return /* tuple */[
          "borderLeftStyle",
          value
        ];
}

function borderColor(value) {
  return /* tuple */[
          "borderColor",
          value
        ];
}

function borderTopColor(value) {
  return /* tuple */[
          "borderTopColor",
          value
        ];
}

function borderRightColor(value) {
  return /* tuple */[
          "borderRightColor",
          value
        ];
}

function borderBottomColor(value) {
  return /* tuple */[
          "borderBottomColor",
          value
        ];
}

function borderLeftColor(value) {
  return /* tuple */[
          "borderLeftColor",
          value
        ];
}

function css(declarations) {
  return Js_dict.fromList(List.map((function (prim) {
                    return prim;
                  }), declarations));
}

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

exports.inherit_             = inherit_;
exports.initial              = initial;
exports.unset                = unset;
exports.em                   = em;
exports.ex                   = ex;
exports.inch                 = inch;
exports.cm                   = cm;
exports.mm                   = mm;
exports.pt                   = pt;
exports.pc                   = pc;
exports.px                   = px;
exports.zero                 = zero;
exports.pct                  = pct;
exports.rad                  = rad;
exports.grad                 = grad;
exports.deg                  = deg;
exports.turn                 = turn;
exports.url                  = url;
exports.rgb                  = rgb;
exports.rgba                 = rgba;
exports.hsl                  = hsl;
exports.hsla                 = hsla;
exports.hex                  = hex;
exports.currentColor         = currentColor;
exports.transparent          = transparent;
exports.aliceblue            = aliceblue;
exports.antiquewhite         = antiquewhite;
exports.aqua                 = aqua;
exports.aquamarine           = aquamarine;
exports.azure                = azure;
exports.beige                = beige;
exports.bisque               = bisque;
exports.black                = black;
exports.blanchedalmond       = blanchedalmond;
exports.blue                 = blue;
exports.blueviolet           = blueviolet;
exports.brown                = brown;
exports.burlywood            = burlywood;
exports.cadetblue            = cadetblue;
exports.chartreuse           = chartreuse;
exports.chocolate            = chocolate;
exports.coral                = coral;
exports.cornflowerblue       = cornflowerblue;
exports.cornsilk             = cornsilk;
exports.crimson              = crimson;
exports.cyan                 = cyan;
exports.darkblue             = darkblue;
exports.darkcyan             = darkcyan;
exports.darkgoldenrod        = darkgoldenrod;
exports.darkgray             = darkgray;
exports.darkgrey             = darkgrey;
exports.darkgreen            = darkgreen;
exports.darkkhaki            = darkkhaki;
exports.darkmagenta          = darkmagenta;
exports.darkolivegreen       = darkolivegreen;
exports.darkorange           = darkorange;
exports.darkorchid           = darkorchid;
exports.darkred              = darkred;
exports.darksalmon           = darksalmon;
exports.darkseagreen         = darkseagreen;
exports.darkslateblue        = darkslateblue;
exports.darkslategray        = darkslategray;
exports.darkslategrey        = darkslategrey;
exports.darkturquoise        = darkturquoise;
exports.darkviolet           = darkviolet;
exports.deeppink             = deeppink;
exports.deepskyblue          = deepskyblue;
exports.dimgray              = dimgray;
exports.dimgrey              = dimgrey;
exports.dodgerblue           = dodgerblue;
exports.firebrick            = firebrick;
exports.floralwhite          = floralwhite;
exports.forestgreen          = forestgreen;
exports.fuchsia              = fuchsia;
exports.gainsboro            = gainsboro;
exports.ghostwhite           = ghostwhite;
exports.gold                 = gold;
exports.goldenrod            = goldenrod;
exports.gray                 = gray;
exports.grey                 = grey;
exports.green                = green;
exports.greenyellow          = greenyellow;
exports.honeydew             = honeydew;
exports.hotpink              = hotpink;
exports.indianred            = indianred;
exports.indigo               = indigo;
exports.ivory                = ivory;
exports.khaki                = khaki;
exports.lavender             = lavender;
exports.lavenderblush        = lavenderblush;
exports.lawngreen            = lawngreen;
exports.lemonchiffon         = lemonchiffon;
exports.lightblue            = lightblue;
exports.lightcoral           = lightcoral;
exports.lightcyan            = lightcyan;
exports.lightgoldenrodyellow = lightgoldenrodyellow;
exports.lightgray            = lightgray;
exports.lightgrey            = lightgrey;
exports.lightgreen           = lightgreen;
exports.lightpink            = lightpink;
exports.lightsalmon          = lightsalmon;
exports.lightseagreen        = lightseagreen;
exports.lightskyblue         = lightskyblue;
exports.lightslategray       = lightslategray;
exports.lightslategrey       = lightslategrey;
exports.lightsteelblue       = lightsteelblue;
exports.lightyellow          = lightyellow;
exports.lime                 = lime;
exports.limegreen            = limegreen;
exports.linen                = linen;
exports.magenta              = magenta;
exports.maroon               = maroon;
exports.mediumaquamarine     = mediumaquamarine;
exports.mediumblue           = mediumblue;
exports.mediumorchid         = mediumorchid;
exports.mediumpurple         = mediumpurple;
exports.mediumseagreen       = mediumseagreen;
exports.mediumslateblue      = mediumslateblue;
exports.mediumspringgreen    = mediumspringgreen;
exports.mediumturquoise      = mediumturquoise;
exports.mediumvioletred      = mediumvioletred;
exports.midnightblue         = midnightblue;
exports.mintcream            = mintcream;
exports.mistyrose            = mistyrose;
exports.moccasin             = moccasin;
exports.navajowhite          = navajowhite;
exports.navy                 = navy;
exports.oldlace              = oldlace;
exports.olive                = olive;
exports.olivedrab            = olivedrab;
exports.orange               = orange;
exports.orangered            = orangered;
exports.orchid               = orchid;
exports.palegoldenrod        = palegoldenrod;
exports.palegreen            = palegreen;
exports.paleturquoise        = paleturquoise;
exports.palevioletred        = palevioletred;
exports.papayawhip           = papayawhip;
exports.peachpuff            = peachpuff;
exports.peru                 = peru;
exports.pink                 = pink;
exports.plum                 = plum;
exports.powderblue           = powderblue;
exports.purple               = purple;
exports.red                  = red;
exports.rosybrown            = rosybrown;
exports.royalblue            = royalblue;
exports.saddlebrown          = saddlebrown;
exports.salmon               = salmon;
exports.sandybrown           = sandybrown;
exports.seagreen             = seagreen;
exports.seashell             = seashell;
exports.sienna               = sienna;
exports.silver               = silver;
exports.skyblue              = skyblue;
exports.slateblue            = slateblue;
exports.slategray            = slategray;
exports.slategrey            = slategrey;
exports.snow                 = snow;
exports.springgreen          = springgreen;
exports.steelblue            = steelblue;
exports.tan                  = tan;
exports.teal                 = teal;
exports.thistle              = thistle;
exports.tomato               = tomato;
exports.turquoise            = turquoise;
exports.violet               = violet;
exports.wheat                = wheat;
exports.white                = white;
exports.whitesmoke           = whitesmoke;
exports.yellow               = yellow;
exports.yellowgreen          = yellowgreen;
exports.none                 = none;
exports.auto                 = auto;
exports.thin                 = thin;
exports.medium               = medium;
exports.thick                = thick;
exports.hidden               = hidden;
exports.dotted               = dotted;
exports.dashed               = dashed;
exports.solid                = solid;
exports.$$double             = $$double;
exports.groove               = groove;
exports.ridge                = ridge;
exports.inset                = inset;
exports.outset               = outset;
exports.margin               = margin;
exports.margin2              = margin2;
exports.margin3              = margin3;
exports.margin4              = margin4;
exports.marginTop            = marginTop;
exports.marginRight          = marginRight;
exports.marginBottom         = marginBottom;
exports.marginLeft           = marginLeft;
exports.padding              = padding;
exports.padding2             = padding2;
exports.padding3             = padding3;
exports.padding4             = padding4;
exports.paddingTop           = paddingTop;
exports.paddingRight         = paddingRight;
exports.paddingBottom        = paddingBottom;
exports.paddingLeft          = paddingLeft;
exports.border               = border;
exports.borderWidth          = borderWidth;
exports.borderTopWidth       = borderTopWidth;
exports.borderRightWidth     = borderRightWidth;
exports.borderBottomWidth    = borderBottomWidth;
exports.borderLeftWidth      = borderLeftWidth;
exports.borderStyle          = borderStyle;
exports.borderTopStyle       = borderTopStyle;
exports.borderRightStyle     = borderRightStyle;
exports.borderBottomStyle    = borderBottomStyle;
exports.borderLeftStyle      = borderLeftStyle;
exports.borderColor          = borderColor;
exports.borderTopColor       = borderTopColor;
exports.borderRightColor     = borderRightColor;
exports.borderBottomColor    = borderBottomColor;
exports.borderLeftColor      = borderLeftColor;
exports.css                  = css;
/* Js_dict Not a pure module */
