let text = ReasonReact.stringToElement;

module Styles = {
  open Glamor;

  module Stateless = (val StyleContainer.stateless([
    border3(thin, solid, hex(0xeee)),
  ]));

  module Fruit = StyleContainer.Make({
    type state = bool;
    let element = "div";
    
    let css = isSelected => [
      borderBottom3(thin, dashed, hex(0xeee)),
      padding2(~v=em(1.), ~h=em(2.)),
      background(isSelected ? whitesmoke : null),

      hover([
        background(antiquewhite)
      ])
    ]
  });
};


let fruit = [|
  "apple",
  "banana",
  "pear",
  "mango",
  "coconut"
|];

module Fruit = {
  let component = ReasonReact.statelessComponent("Fruit");
  let make = (~name, ~isSelected, ~onSelect, _children) => {
    ...component,
    render: _self =>
      <Styles.Fruit state=isSelected>
        <div onClick=(_e => onSelect())>
          (name |> text)
        </div>
      </Styles.Fruit>
  };
};

type state = {
  selected: option(string)
};
type action =
  | Select(string);

let component = ReasonReact.reducerComponent("Page");
let make = (~message, _children) => {
  ...component,
  initialState: () => {
    selected: None
  },
  reducer: (action, _state) =>
    switch action {
    | Select(name) => ReasonReact.Update({ selected: Some(name) })
    },

  render: ({reduce, state}) =>
    <Styles.Stateless>
      {
        fruit |> Array.map(name => <Fruit name isSelected=(Some(name)==state.selected) onSelect=reduce(() => Select(name))/>)
              |> ReasonReact.arrayToElement
      }
    </Styles.Stateless>
};
