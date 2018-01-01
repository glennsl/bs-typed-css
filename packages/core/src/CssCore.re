module Types = {
  type allTypes = [
    | `none
    | `auto
    | `length
    | `percentage
    | `uri
    | `color
  ];


  /**
   * Values
   */
  type value('a) = 'a constraint [< allTypes] = 'a;
  type none = value([`none]);
  type auto = value([`auto]);
  type length = value([`length]);
  type percentage = value([`percentage]);
  type uri = value([`uri]);
  /*type counter = value([`counter]);*/
  type color = value([`color]);


  /**
   * Declarations
   */
  type declaration;
  type marginWidth('a) = value([< `length | `percentage | `auto] as 'a);
  type paddingWidth('a) = value([< `length | `percentage] as 'a);
};

module type Values = {
  /*********
   * Values
   */
  open Types;


  /**
   * Universal
  */
  let inherit_: value(_);
  let initial: value(_);
  let unset: value(_);


  /**
   * Shared
   */
  let none: none;
  let auto: auto;


  /**
   * Length
   */

  /* relative */
  let em: float => length;
  let ex: float => length;

  /* absolute */
  let inch: float => length;
  let cm: float => length;
  let mm: float => length;
  let pt: float => length;
  let pc: float => length;
  let px: int => length;

  let zero: length;


  /**
   * Percentage
   */
  let pct: float => percentage;


  /**
   * Url
   */
  let url: string => uri;
};

module type Declarations = {
  /*********
   * Declarations
   */
  open Types;

  let margin: marginWidth(_) => declaration;
  /*
  let margin2: (~v:marginWidth, ~h:marginWidth) => declaration;
  let margin3: (~top:marginWidth, ~h:marginWidth, ~bottom:marginWidth) => declaration ;
  let margin4: (~top:marginWidth, ~right:marginWidth, ~bottom:marginWidth, ~left:marginWidth) => declaration ;
  let marginTop: marginWidth => declaration;
  let marginRight: marginWidth => declaration;
  let marginBottom: marginWidth => declaration;
  let marginLef5: marginWidth => declaration;
  */

  let padding: paddingWidth(_) => declaration;
  /*
  let padding2: (~v:paddingWidth, ~h:paddingWidth) => declaration;
  let padding3: (~top:paddingWidth, ~h:paddingWidth, ~bottom:paddingWidth) => declaration ;
  let padding4: (~top:paddingWidth, ~right:paddingWidth, ~bottom:paddingWidth, ~left:paddingWidth) => declaration ;
  let paddingTop: paddingWidth => declaration;
  let paddingRight: paddingWidth => declaration;
  let paddingBottom: paddingWidth => declaration;
  let paddingLef5: paddingWidth => declaration;
  */
};