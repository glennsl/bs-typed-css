open Jest;
open Expect;
open Glamor;

let _ =
  test("basic", () => {
    let css = style([
      margin(auto),
      padding(em(10.)),
      margin(unset)
    ]);

    expect(css) |> toEqual({ "margin": "10em" } |> Obj.magic);
  });