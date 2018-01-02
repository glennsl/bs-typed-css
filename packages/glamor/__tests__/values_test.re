open Jest;
open TestHelpers;
open Glamor;

let _ =

describe("universal", () => {
  testValue( inherit_,  "inherit");
  testValue( initial,   "initial");
  testValue( unset,     "unset");
});

describe("length", () => {
  testValue( em(1.5),   "1.5em");
  testValue( ex(1.),    "1ex");
  testValue( ch(1.),    "1ch");
  testValue( rem(1.),   "1rem");

  testValue( vw(33.3),  "33.3vw");
  testValue( vh(33.3),  "33.3vh");
  testValue( vmin(33.3),"33.3vmin");
  testValue( vmax(33.3),"33.3vmax");

  testValue( cm(1.),    "1cm");
  testValue( mm(1.),    "1mm");
  testValue( q(1.),     "1q");
  testValue( inch(1.),  "1in");
  testValue( pc(1.),    "1pc");
  testValue( pt(1.),    "1pt");
  testValue( px(1),     "1px");
  testValue( zero,      "0");
});

describe("percentage", () => {
  testValue( pct(1.2),  "1.2%");
});

describe("angle", () => {
  testValue( rad(3.14),  "3.14rad");
  testValue( grad(200.), "200grad");
  testValue( deg(180.),  "180deg");
  testValue( turn(0.5),  "0.5turn");
});

describe("url", () => {
  testValue( url("harry potter"), "url(harry potter)");
});

describe("color", () => {
  testValue( rgb(255, 0, 0), "rgb(255, 0, 0)");
  testValue( rgba(0xff, 0, 0x80, 0.5), "rgba(255, 0, 128, 0.5)");
  testValue( hsl(turn(0.5), 50, 100), "hsl(0.5turn, 50%, 100%)");
  testValue( hsla(turn(0.5), 50, 100, 0.5), "hsla(0.5turn, 50%, 100%, 0.5)");
  testValue( hex(0xf8a), "#f8a");

  testValue( currentColor, "currentColor");
  testValue( transparent,  "transparent");

  /* lots of colors that are inlined */
});

describe("ad-hoc", () => {
  testValue( none, "none");
  testValue( auto, "auto");

  testValue( thin,    "thin");
  testValue( medium,  "medium");
  testValue( thick,   "thick");

  testValue( hidden,  "hidden");
  testValue( dotted,  "dotted");
  testValue( dashed,  "dashed");
  testValue( solid,   "solid");
  testValue( double,  "double");
  testValue( groove,  "groove");
  testValue( ridge,   "ridge");
  testValue( inset,   "inset");
  testValue( outset,  "outset");
});