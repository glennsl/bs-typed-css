// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Glamor      = require("../src/Glamor.bs.js");
var TestHelpers = require("./TestHelpers.bs.js");

describe("universal", (function () {
        TestHelpers.testValue(Glamor.inherit_, "inherit");
        TestHelpers.testValue(Glamor.initial, "initial");
        return TestHelpers.testValue(Glamor.unset, "unset");
      }));

describe("length", (function () {
        TestHelpers.testValue(Glamor.em(1.5), "1.5em");
        TestHelpers.testValue(Glamor.ex(1), "1ex");
        TestHelpers.testValue(Glamor.ch(1), "1ch");
        TestHelpers.testValue(Glamor.rem(1), "1rem");
        TestHelpers.testValue(Glamor.vw(33.3), "33.3vw");
        TestHelpers.testValue(Glamor.vh(33.3), "33.3vh");
        TestHelpers.testValue(Glamor.vmin(33.3), "33.3vmin");
        TestHelpers.testValue(Glamor.vmax(33.3), "33.3vmax");
        TestHelpers.testValue(Glamor.cm(1), "1cm");
        TestHelpers.testValue(Glamor.mm(1), "1mm");
        TestHelpers.testValue(Glamor.q(1), "1q");
        TestHelpers.testValue(Glamor.inch(1), "1in");
        TestHelpers.testValue(Glamor.pc(1), "1pc");
        TestHelpers.testValue(Glamor.pt(1), "1pt");
        TestHelpers.testValue(Glamor.px(1), "1px");
        return TestHelpers.testValue(Glamor.zero, "0");
      }));

describe("percentage", (function () {
        return TestHelpers.testValue(Glamor.pct(1.2), "1.2%");
      }));

describe("angle", (function () {
        TestHelpers.testValue(Glamor.rad(3.14), "3.14rad");
        TestHelpers.testValue(Glamor.grad(200), "200grad");
        TestHelpers.testValue(Glamor.deg(180), "180deg");
        return TestHelpers.testValue(Glamor.turn(0.5), "0.5turn");
      }));

describe("url", (function () {
        return TestHelpers.testValue(Glamor.url("harry potter"), "url(harry potter)");
      }));

describe("color", (function () {
        TestHelpers.testValue(Glamor.rgb(255, 0, 0), "rgb(255, 0, 0)");
        TestHelpers.testValue(Glamor.rgba(255, 0, 128, 0.5), "rgba(255, 0, 128, 0.5)");
        TestHelpers.testValue(Glamor.hsl(Glamor.turn(0.5), 50, 100), "hsl(0.5turn, 50%, 100%)");
        TestHelpers.testValue(Glamor.hsla(Glamor.turn(0.5), 50, 100, 0.5), "hsla(0.5turn, 50%, 100%, 0.5)");
        TestHelpers.testValue(Glamor.hex(3978), "#f8a");
        TestHelpers.testValue(Glamor.currentColor, "currentColor");
        return TestHelpers.testValue(Glamor.transparent, "transparent");
      }));

describe("ad-hoc", (function () {
        TestHelpers.testValue(Glamor.none, "none");
        TestHelpers.testValue(Glamor.auto, "auto");
        TestHelpers.testValue(Glamor.thin, "thin");
        TestHelpers.testValue(Glamor.medium, "medium");
        TestHelpers.testValue(Glamor.thick, "thick");
        TestHelpers.testValue(Glamor.hidden, "hidden");
        TestHelpers.testValue(Glamor.dotted, "dotted");
        TestHelpers.testValue(Glamor.dashed, "dashed");
        TestHelpers.testValue(Glamor.solid, "solid");
        TestHelpers.testValue(Glamor.$$double, "double");
        TestHelpers.testValue(Glamor.groove, "groove");
        TestHelpers.testValue(Glamor.ridge, "ridge");
        TestHelpers.testValue(Glamor.inset, "inset");
        return TestHelpers.testValue(Glamor.outset, "outset");
      }));

/*  Not a pure module */