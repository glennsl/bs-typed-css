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
  testValue( inch(1.),  "1in");
  testValue( cm(1.),    "1cm");
  testValue( mm(1.),    "1mm");
  testValue( pt(1.),    "1pt");
  testValue( pc(1.),    "1pc");
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
  testValue( transparent,  "transparent");
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