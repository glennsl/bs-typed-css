open Jest;
open TestHelpers;
open Glamor;

let _ =

describe("margin", () => {
  testDeclaration(
    margin(auto),
    ("margin", "auto"));
  testDeclaration(
    margin2(~v=zero, ~h=auto),
    ("margin", "0 auto"));
  testDeclaration(
    margin3(~top=pct(10.), ~h=auto, ~bottom=px(45)),
    ("margin", "10% auto 45px"));
  testDeclaration(
    margin4(~top=pct(10.), ~right=auto, ~bottom=px(45), ~left=(ex(2.))),
    ("margin", "10% auto 45px 2ex"));
  testDeclaration(
    marginTop(px(1)),
    ("marginTop", "1px"));
  testDeclaration(
    marginRight(px(1)),
    ("marginRight", "1px"));
  testDeclaration(
    marginBottom(px(1)),
    ("marginBottom", "1px"));
  testDeclaration(
    marginLeft(px(1)),
    ("marginLeft", "1px"));
});

describe("padding", () => {
  testDeclaration(
    padding(px(-1)),
    ("padding", "-1px"));
  testDeclaration(
    padding2(~v=zero, ~h=pct(50.)),
    ("padding", "0 50%"));
  testDeclaration(
    padding3(~top=pct(10.), ~h=pct(50.), ~bottom=px(45)),
    ("padding", "10% 50% 45px"));
  testDeclaration(
    padding4(~top=pct(10.), ~right=pct(50.), ~bottom=px(45), ~left=(ex(2.))),
    ("padding", "10% 50% 45px 2ex"));
  testDeclaration(
    paddingTop(px(1)),
    ("paddingTop", "1px"));
  testDeclaration(
    paddingRight(px(1)),
    ("paddingRight", "1px"));
  testDeclaration(
    paddingBottom(px(1)),
    ("paddingBottom", "1px"));
  testDeclaration(
    paddingLeft(px(1)),
    ("paddingLeft", "1px"));
});
