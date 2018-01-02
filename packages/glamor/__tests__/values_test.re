open Jest;
open TestHelpers;
open Glamor;

let _ =

describe("universal", () => {
  testValue( inherit_,  "inherit");
  testValue( initial,   "initial");
  testValue( unset,     "unset");
});

describe("shared", () => {
  testValue( none, "none");
  testValue( auto, "auto");
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

describe("url", () => {
  testValue( url("harry potter"), "url(harry potter)");
});