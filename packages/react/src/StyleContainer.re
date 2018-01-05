let component = ReasonReact.statelessComponent("Style");
let make = (~css, ~element="div", children) => {
  ...component,

  render: _self =>
    ReasonReact.createDomElement(
      element,
      ~props={ "className": css },
      children
    )
};

module type Config = {
  type state;
  let css: state => list(Glamor.Core.declaration);
  let element: string;
};

module Make(Config: Config) = {
  let component = ReasonReact.statelessComponent("Style");
  let make = (~state: Config.state, children) => {
    ...component,

    render: _self =>
      ReasonReact.createDomElement(
        Config.element,
        ~props={ "className": Glamor.css(Config.css(state)) },
        children
      )
  };
};

module type StatelessComponent = {
  let make: array(ReasonReact.reactElement) => ReasonReact.component(ReasonReact.stateless, ReasonReact.noRetainedProps, ReasonReact.actionless);
};
let stateless = (~element="div", css: list(Glamor.Core.declaration)) : (module StatelessComponent) =>
  (module ({
    module M = Make({
      type state = unit;
      let css = () => css;
      let element = element;
    });

    let make = M.make(~state=());
  }));
