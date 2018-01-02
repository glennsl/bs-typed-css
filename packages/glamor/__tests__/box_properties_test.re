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

describe("border", () => {
  testDeclaration(
    border(none),
    ("border", "none"));
  testDeclaration(
    border2(ridge),
    ("border", "ridge"));
  testDeclaration(
    border2(~width=px(1), dashed),
    ("border", "1px dashed"));
  testDeclaration(
    border2(inset, ~color=green),
    ("border", "inset green"));
  testDeclaration(
    border2(~width=px(1), double, ~color=aqua),
    ("border", "1px double aqua"));
  testDeclaration(
    border3(~width=px(1), ~style=solid, ~color=slategray),
    ("border", "1px solid slategray"));

  testDeclaration(
    borderWidth(px(2)),
    ("borderWidth", "2px"));
  testDeclaration(
    borderTopWidth(px(2)),
    ("borderTopWidth", "2px"));
  testDeclaration(
    borderRightWidth(px(2)),
    ("borderRightWidth", "2px"));
  testDeclaration(
    borderBottomWidth(px(2)),
    ("borderBottomWidth", "2px"));
  testDeclaration(
    borderLeftWidth(px(2)),
    ("borderLeftWidth", "2px"));

  testDeclaration(
    borderStyle(solid),
    ("borderStyle", "solid"));
  testDeclaration(
    borderTopStyle(dashed),
    ("borderTopStyle", "dashed"));
  testDeclaration(
    borderRightStyle(dotted),
    ("borderRightStyle", "dotted"));
  testDeclaration(
    borderBottomStyle(ridge),
    ("borderBottomStyle", "ridge"));
  testDeclaration(
    borderLeftStyle(inset),
    ("borderLeftStyle", "inset"));

  testDeclaration(
    borderColor(transparent),
    ("borderColor", "transparent"));
  testDeclaration(
    borderTopColor(transparent),
    ("borderTopColor", "transparent"));
  testDeclaration(
    borderRightColor(transparent),
    ("borderRightColor", "transparent"));
  testDeclaration(
    borderBottomColor(transparent),
    ("borderBottomColor", "transparent"));
  testDeclaration(
    borderLeftColor(transparent),
    ("borderLeftColor", "transparent"));

  testDeclaration(
    borderRadius(px(2)),
    ("borderRadius", "2px"));

  testDeclaration(
    borderTopLeftRadius(px(2)),
    ("borderTopLeftRadius", "2px"));
  testDeclaration(
    borderTopLeftRadius2(~v=px(2), ~h=zero),
    ("borderTopLeftRadius", "2px 0"));
  testDeclaration(
    borderTopRightRadius(px(2)),
    ("borderTopRightRadius", "2px"));
  testDeclaration(
    borderTopRightRadius2(~v=px(2), ~h=zero),
    ("borderTopRightRadius", "2px 0"));
  testDeclaration(
    borderBottomLeftRadius(px(2)),
    ("borderBottomLeftRadius", "2px"));
  testDeclaration(
    borderBottomLeftRadius2(~v=px(2), ~h=zero),
    ("borderBottomLeftRadius", "2px 0"));
  testDeclaration(
    borderBottomRightRadius(px(2)),
    ("borderBottomRightRadius", "2px"));
  testDeclaration(
    borderBottomRightRadius2(~v=px(2), ~h=zero),
    ("borderBottomRightRadius", "2px 0"));
});