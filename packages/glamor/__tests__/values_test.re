open Jest;
open TestHelpers;
open TypedGlamor;

let _ =
  describe("universal", () => {
    testValue(inherit_, "inherit");
    testValue(initial, "initial");
    testValue(unset, "unset");
  });

describe("length", () => {
  testValue(em(1.5), "1.5em");
  testValue(ex(1.), "1ex");
  testValue(ch(1.), "1ch");
  testValue(rem(1.), "1rem");

  testValue(vw(33.3), "33.3vw");
  testValue(vh(33.3), "33.3vh");
  testValue(vmin(33.3), "33.3vmin");
  testValue(vmax(33.3), "33.3vmax");

  testValue(cm(1.), "1cm");
  testValue(mm(1.), "1mm");
  testValue(q(1.), "1q");
  testValue(inch(1.), "1in");
  testValue(pc(1.), "1pc");
  testValue(pt(1.), "1pt");
  testValue(px(1), "1px");
  testValue(zero, "0");
});

describe("percentage", () =>
  testValue(pct(1.2), "1.2%")
);

describe("angle", () => {
  testValue(rad(3.14), "3.14rad");
  testValue(grad(200.), "200grad");
  testValue(deg(180.), "180deg");
  testValue(turn(0.5), "0.5turn");
});

describe("time", () => {
  testValue(s(1.2), "1.2s");
  testValue(ms(200), "200ms");
});

describe("url", () =>
  testValue(url("harry potter"), "url(harry potter)")
);

describe("color", () => {
  testValue(rgb(255, 0, 0), "rgb(255, 0, 0)");
  testValue(rgba(0xff, 0, 0x80, 0.5), "rgba(255, 0, 128, 0.5)");
  testValue(hsl(turn(0.5), 50, 100), "hsl(0.5turn, 50%, 100%)");
  testValue(hsla(turn(0.5), 50, 100, 0.5), "hsla(0.5turn, 50%, 100%, 0.5)");
  testValue(hex("f8a"), "#f8a");

  testValue(currentColor, "currentColor");
  testValue(transparent, "transparent");
  /* lots of colors that are inlined */
});

describe("customIdent", () =>
  testValue(ident("foo"), "foo")
);

describe("timingFunction", () => {
  testValue(linear, "linear");
  testValue(ease, "ease");
  testValue(easeIn, "ease-in");
  testValue(easeOut, "ease-out");
  testValue(easeInOut, "ease-in-out");
  testValue(
    cubicBezier((1., 0.4), (2.3, 5.1)),
    "cubic-bezier(1, 0.4, 2.3, 5.1)",
  );
  testValue(stepStart, "step-start");
  testValue(stepEnd, "step-end");
  testValue(steps(2, start), "steps(2, start)");
  testValue(frames(4), "frames(4)");
});

describe("ad-hoc", () => {
  testValue(none, "none");
  testValue(auto, "auto");

  testValue(thin, "thin");
  testValue(medium, "medium");
  testValue(thick, "thick");

  testValue(hidden, "hidden");
  testValue(dotted, "dotted");
  testValue(dashed, "dashed");
  testValue(solid, "solid");
  testValue(double, "double");
  testValue(groove, "groove");
  testValue(ridge, "ridge");
  testValue(inset, "inset");
  testValue(outset, "outset");

  /*testValue( all, "all");*/

  testValue(start, "start");
  testValue(end_, "end");

  testValue(repeat, "repeat");
  testValue(repeatX, "repeat-x");
  testValue(repeatY, "repeat-y");
  testValue(noRepeat, "no-repeat");

  testValue(scroll, "scroll");
  testValue(fixed, "fixed");

  testValue(center, "center");
  testValue(top, "top");
  testValue(right, "right");
  testValue(bottom, "bottom");
  testValue(left, "left");
});