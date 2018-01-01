open Jest;
open Expect;
open Glamor;

let _ =
  test("basic", () => {
    let style = css([
      padding(em(10.)),
      margin2(~v=zero, ~h=auto /*unset - not allowed*/),
      marginLeft(initial)
    ]);

    expect(style) |> toEqual({ "padding": "10em", "margin": "0 auto", "marginLeft": "initial" } |> Obj.magic);
  });