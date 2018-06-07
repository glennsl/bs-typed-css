open TestHelpers;
open TypedGlamor;

let _ = testDeclaration(color(lemonchiffon), ("color", "lemonchiffon"));

testDeclaration(opacity(0.325), ("opacity", "0.325"));

testDeclaration(background(none), ("background", "none"));
testDeclaration(background(salmon), ("background", "salmon"));
testDeclaration(background(url("foo")), ("background", "url(foo)"));

testDeclaration(
  backgroundColor(peachpuff),
  ("backgroundColor", "peachpuff"),
);

testDeclaration(backgroundImage(none), ("backgroundImage", "none"));
testDeclaration(
  backgroundImage(url("foo")),
  ("backgroundImage", "url(foo)"),
);

testDeclaration(
  backgroundRepeat(repeatY),
  ("backgroundRepeat", "repeat-y"),
);

testDeclaration(
  backgroundAttachment(fixed),
  ("backgroundAttachment", "fixed"),
);

testDeclaration(backgroundPosition(unset), ("backgroundPosition", "unset"));
testDeclaration(
  backgroundPosition2(~h=left, ~v=center),
  ("backgroundPosition", "left center"),
);
testDeclaration(
  backgroundPosition2(~h=pct(75.), ~v=px(2)),
  ("backgroundPosition", "75% 2px"),
);