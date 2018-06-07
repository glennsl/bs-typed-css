open TestHelpers;
open TypedGlamor;

let _ =
  testSelector(
    select(":whatever", [margin(em(1.))]),
    (":whatever", [("margin", "1em")]),
  );

testSelector(hover([margin(em(1.))]), (":hover", [("margin", "1em")]));