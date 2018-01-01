module Types = {
  type allTypes = [
    | `universal
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
  type value('a)  = 'a constraint [< allTypes] = 'a;
  type none       = value([`none]);
  type auto       = value([`auto]);
  type length     = value([`length]);
  type percentage = value([`percentage]);
  type uri        = value([`uri]);
  /*type counter  = value([`counter]);*/
  type color      = value([`color]);


  /**
   * Declarations
   */
  type declaration;
  type marginWidth  = [`length | `percentage | `auto];
  type paddingWidth = [`length | `percentage];
};

module type Values = {
  /*********
   * Values
   */
  open Types;


  /**
   * Universal
  */
  let inherit_: value([`universal]);
  let initial: value([`universal]);
  let unset: value([`universal]);


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


  /**
   * Box model
   */
  let margin: value([< marginWidth | `universal]) => declaration;
  let margin2: (~v:value([< marginWidth]),
                ~h:value([< marginWidth])) => declaration;
  let margin3: (~top:value([< marginWidth]),
                ~h:value([< marginWidth]),
                ~bottom:value([< marginWidth])) => declaration;
  let margin4: (~top:value([< marginWidth]),
                ~right:value([< marginWidth]),
                ~bottom:value([< marginWidth]),
                ~left:value([< marginWidth])) => declaration;
  let marginTop: value([< marginWidth | `universal]) => declaration;
  let marginRight: value([< marginWidth | `universal]) => declaration;
  let marginBottom: value([< marginWidth | `universal]) => declaration;
  let marginLeft: value([< marginWidth | `universal]) => declaration;

  let padding: value([< paddingWidth | `universal]) => declaration;
  let padding2: (~v:value([< paddingWidth]),
                ~h:value([< paddingWidth])) => declaration;
  let padding3: (~top:value([< paddingWidth]),
                ~h:value([< paddingWidth]),
                ~bottom:value([< paddingWidth])) => declaration;
  let padding4: (~top:value([< paddingWidth]),
                ~right:value([< paddingWidth]),
                ~bottom:value([< paddingWidth]),
                ~left:value([< paddingWidth])) => declaration;
  let paddingTop: value([< paddingWidth | `universal]) => declaration;
  let paddingRight: value([< paddingWidth | `universal]) => declaration;
  let paddingBottom: value([< paddingWidth | `universal]) => declaration;
  let paddingLeft: value([< paddingWidth | `universal]) => declaration;

};