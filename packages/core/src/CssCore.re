module Types = {

  /**
   * Values
   */
  type value('a)  = 'a constraint [>] = 'a;
  type universal  = value([`universal]);
  type length     = value([`length]);
  type percentage = value([`percentage]);
  type angle      = value([`angle]);
  type uri        = value([`uri]);
  /*type counter  = value([`counter]);*/
  type color      = value([`color]);


  /**
   * Declarations
   */
  type declaration;
  type marginWidth  = [`length | `percentage | `auto];
  type paddingWidth = [`length | `percentage];
  type borderWidth  = [`thin | `medium | `thick | `length];
  type borderStyle  = [`none | `hidden | `dotted | `dashed | `solid | `double | `groove | `ridge | `inset | `outset];
};


/*********
 * Values
 */
module type Values = {
  open Types;


  /**
   * Universal
  */
  let inherit_: universal;
  let initial: universal;
  let unset: universal;


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
   * Angle
   */
  let rad: float => angle;
  let grad: float => angle;
  let deg: float => angle;
  let turn: float => angle;

  /**
   * Url
   */
  let url: string => uri;


  /**
   * Color
   */
  let transparent: value([`transparent]); /* TODO: color or ad-hoc? */

  /**
   * Ad-hoc values
   */
  let none: value([`none]);
  let auto: value([`auto]);

  /* borderWidth */
  let thin:   value([`thin]);
  let medium: value([`medium]);
  let thick:  value([`thick]);

  /* borderStyle */
  let hidden: value([`hidden]);
  let dotted: value([`dotted]);
  let dashed: value([`dashed]);
  let solid:  value([`solid]);
  let double: value([`double]);
  let groove: value([`groove]);
  let ridge:  value([`ridge]);
  let inset:  value([`inset]);
  let outset: value([`outset]);
};


/*********
 * Declarations
 */
module type Declarations = {
  open Types;


  /**
   * Box model
   */

  /* margin */
  let margin:       value([< marginWidth | `universal]) => declaration;
  let margin2:      (~v:      value([< marginWidth]),
                     ~h:      value([< marginWidth])) => declaration;
  let margin3:      (~top:    value([< marginWidth]),
                     ~h:      value([< marginWidth]),
                     ~bottom: value([< marginWidth])) => declaration;
  let margin4:      (~top:    value([< marginWidth]),
                     ~right:  value([< marginWidth]),
                     ~bottom: value([< marginWidth]),
                     ~left:   value([< marginWidth])) => declaration;
  let marginTop:    value([< marginWidth | `universal]) => declaration;
  let marginRight:  value([< marginWidth | `universal]) => declaration;
  let marginBottom: value([< marginWidth | `universal]) => declaration;
  let marginLeft:   value([< marginWidth | `universal]) => declaration;

  /* padding */
  let padding:        value([< paddingWidth | `universal]) => declaration;
  let padding2:       (~v:      value([< paddingWidth]),
                       ~h:      value([< paddingWidth])) => declaration;
  let padding3:       (~top:    value([< paddingWidth]),
                       ~h:      value([< paddingWidth]),
                       ~bottom: value([< paddingWidth])) => declaration;
  let padding4:       (~top:    value([< paddingWidth]),
                       ~right:  value([< paddingWidth]),
                       ~bottom: value([< paddingWidth]),
                       ~left:   value([< paddingWidth])) => declaration;
  let paddingTop:     value([< paddingWidth | `universal]) => declaration;
  let paddingRight:   value([< paddingWidth | `universal]) => declaration;
  let paddingBottom:  value([< paddingWidth | `universal]) => declaration;
  let paddingLeft:    value([< paddingWidth | `universal]) => declaration;

  /* TODO: border: inherit */
  let border:             (~width:  value([< borderWidth]),
                           ~style:  value([< borderStyle]),
                           ~color:  value([< color | `transparent])) => declaration;
  let borderWidth:        value([< borderWidth | `universal]) => declaration;
  let borderTopWidth:     value([< borderWidth | `universal]) => declaration;
  let borderRightWidth:   value([< borderWidth | `universal]) => declaration;
  let borderBottomWidth:  value([< borderWidth | `universal]) => declaration;
  let borderLeftWidth:    value([< borderWidth | `universal]) => declaration;
  let borderStyle:        value([< borderStyle | `universal]) => declaration;
  let borderTopStyle:     value([< borderStyle | `universal]) => declaration;
  let borderRightStyle:   value([< borderStyle | `universal]) => declaration;
  let borderBottomStyle:  value([< borderStyle | `universal]) => declaration;
  let borderLeftStyle:    value([< borderStyle | `universal]) => declaration;
  let borderColor:        value([< color | `transparent | `universal]) => declaration;
  let borderTopColor:     value([< color | `transparent | `universal]) => declaration;
  let borderRightColor:   value([< color | `transparent | `universal]) => declaration;
  let borderBottomColor:  value([< color | `transparent | `universal]) => declaration;
  let borderLeftColor:    value([< color | `transparent | `universal]) => declaration;
};