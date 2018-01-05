let text = ReasonReact.stringToElement;

module Styles = {
  open Glamor;

  module Root = StyleContainer.Make({
    type state = unit;
    let element = "div";

    let css = () => [
      border3(~width=thick, ~style=solid, ~color=green),
    ];
  });

  module Stateless = (val StyleContainer.stateless([
    border3(~width=thick, ~style=solid, ~color=blue),

    select("& *", [
      border3(~width=thin, ~style=dashed, ~color=green),

      hover([
        borderColor(red)
      ])
    ])
  ]));
};

let component = ReasonReact.statelessComponent("Page");
let make = (~message, _children) => {
  ...component,
  render: self =>
    <Styles.Stateless>
      <div> (message |> text) </div>
      <div> ("World!" |> text) </div>
    </Styles.Stateless>
};
