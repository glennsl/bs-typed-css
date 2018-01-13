open Jest;
open TestHelpers;
open TypedGlamor;

let _ =

describe("transitionProperty", () => {
  testDeclaration(
    transitionProperty(unset),
    ("transitionProperty", "unset"));
  testDeclaration(
    transitionProperty(none),
    ("transitionProperty", "none"));
  testDeclaration(
    transitionProperty(AnimatableProperty.all),
    ("transitionProperty", "all"));
  testDeclaration(
    transitionProperty(AnimatableProperty.color),
    ("transitionProperty", "color"));
  testDeclaration(
    transitionProperty(ident("foo")),
    ("transitionProperty", "foo"));

  testDeclaration(
    transitionProperties([AnimatableProperty.all, AnimatableProperty.color, ident("foo")]),
    ("transitionProperty", "all, color, foo"));
  testDeclaration(
    transitionProperties([]),
    ("transitionProperty", "none"));
});

describe("transitionDuration", () => {
  testDeclaration(
    transitionDuration(unset),
    ("transitionDuration", "unset"));
  testDeclaration(
    transitionDuration(s(3.2)),
    ("transitionDuration", "3.2s"));

  testDeclaration(
    transitionDurations([s(3.2), ms(400)]),
    ("transitionDuration", "3.2s, 400ms"));
  testDeclaration(
    transitionDurations([]), /* should not be allowed */
    ("transitionDuration", ""));
});

describe("transitionTimingFunction", () => {
  testDeclaration(
    transitionTimingFunction(unset),
    ("transitionTimingFunction", "unset"));
  testDeclaration(
    transitionTimingFunction(linear),
    ("transitionTimingFunction", "linear"));

  testDeclaration(
    transitionTimingFunctions([linear, easeIn]),
    ("transitionTimingFunction", "linear, ease-in"));
  testDeclaration(
    transitionTimingFunctions([]), /* should not be allowed */
    ("transitionTimingFunction", ""));
});

describe("transitionDelay", () => {
  testDeclaration(
    transitionDelay(unset),
    ("transitionDelay", "unset"));
  testDeclaration(
    transitionDelay(ms(100)),
    ("transitionDelay", "100ms"));

  testDeclaration(
    transitionDelays([s(3.2), ms(100)]),
    ("transitionDelay", "3.2s, 100ms"));
  testDeclaration(
    transitionDelays([]), /* should not be allowed */
    ("transitionDelay", ""));
});

describe("transition", () => {
  testDeclaration(
    transition(unset),
    ("transition", "unset"));
  testDeclaration(
    transition(none),
    ("transition", "none"));

  testDeclaration(
    transitions([
      (AnimatableProperty.top, ms(100), linear, s(1.)),
      (AnimatableProperty.left, ms(200), easeIn, ms(50))
    ]),
    ("transition", "top 100ms linear 1s, left 200ms ease-in 50ms"));
  testDeclaration(
    transitions([]),
    ("transition", "none"));
});