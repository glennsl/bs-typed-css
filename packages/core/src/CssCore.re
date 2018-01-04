
/*********
 * Types
 */

type declaration;

 /* values */
type value('a) constraint 'a = [>];
type universal      = value([`universal]);
type length         = value([`length]);
type percentage     = value([`percentage]);
type angle          = value([`angle]);
type time           = value([`time]);
type uri            = value([`uri]);
/*type counter      = value([`counter]);*/
type color          = value([`color]);
type customIdent    = value([`customIdent]);

/* aliases for property values */
type marginWidth  = [`length | `percentage | `auto];
type paddingWidth = [`length | `percentage];
type lineWidth    = [`thin | `medium | `thick | `length];
type lineStyle    = [`none | `hidden | `dotted | `dashed | `solid | `double | `groove | `ridge | `inset | `outset];


/*********
 * Values
 */
module type Values = {

  /**
   * Universal
  */
  let inherit_: universal;
  let initial: universal;
  let unset: universal;


  /**
   * Length
   */

  /* font-relative */
  let em: float => length;
  let ex: float => length;
  let ch: float => length;
  let rem: float => length;

  /* viewport-percentage */
  let vw: float => length;
  let vh: float => length;
  let vmin: float => length;
  let vmax: float => length;

  /* absolute */
  let cm: float => length;
  let mm: float => length;
  let q: float => length;
  let inch: float => length;
  let pc: float => length;
  let pt: float => length;
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
   * Time
   */
  let s: float => time;
  let ms: int => time;

  /**
   * Url
   */
  let url: string => uri;


  /**
   * Color
   */
  let rgb:  (int, int, int) => color;
  let rgba: (int, int, int, float) => color;
  let hsl:  (angle, int, int) => color; /* TODO: use percentage instead of int? */
  let hsla: (angle, int, int, float) => color; /* TODO: use percentage instead of int? */
  let hex:  int => color; /* TODO: string or int? */

  let currentColor: color;
  let transparent: color;

  let aliceblue: color;
  let antiquewhite: color;
  let aqua: color;
  let aquamarine: color;
  let azure: color;
  let beige: color;
  let bisque: color;
  let black: color;
  let blanchedalmond: color;
  let blue: color;
  let blueviolet: color;
  let brown: color;
  let burlywood: color;
  let cadetblue: color;
  let chartreuse: color;
  let chocolate: color;
  let coral: color;
  let cornflowerblue: color;
  let cornsilk: color;
  let crimson: color;
  let cyan: color;
  let darkblue: color;
  let darkcyan: color;
  let darkgoldenrod: color;
  let darkgray: color;
  let darkgrey: color;
  let darkgreen: color;
  let darkkhaki: color;
  let darkmagenta: color;
  let darkolivegreen: color;
  let darkorange: color;
  let darkorchid: color;
  let darkred: color;
  let darksalmon: color;
  let darkseagreen: color;
  let darkslateblue: color;
  let darkslategray: color;
  let darkslategrey: color;
  let darkturquoise: color;
  let darkviolet: color;
  let deeppink: color;
  let deepskyblue: color;
  let dimgray: color;
  let dimgrey: color;
  let dodgerblue: color;
  let firebrick: color;
  let floralwhite: color;
  let forestgreen: color;
  let fuchsia: color;
  let gainsboro: color;
  let ghostwhite: color;
  let gold: color;
  let goldenrod: color;
  let gray: color;
  let grey: color;
  let green: color;
  let greenyellow: color;
  let honeydew: color;
  let hotpink: color;
  let indianred: color;
  let indigo: color;
  let ivory: color;
  let khaki: color;
  let lavender: color;
  let lavenderblush: color;
  let lawngreen: color;
  let lemonchiffon: color;
  let lightblue: color;
  let lightcoral: color;
  let lightcyan: color;
  let lightgoldenrodyellow: color;
  let lightgray: color;
  let lightgrey: color;
  let lightgreen: color;
  let lightpink: color;
  let lightsalmon: color;
  let lightseagreen: color;
  let lightskyblue: color;
  let lightslategray: color;
  let lightslategrey: color;
  let lightsteelblue: color;
  let lightyellow: color;
  let lime: color;
  let limegreen: color;
  let linen: color;
  let magenta: color;
  let maroon: color;
  let mediumaquamarine: color;
  let mediumblue: color;
  let mediumorchid: color;
  let mediumpurple: color;
  let mediumseagreen: color;
  let mediumslateblue: color;
  let mediumspringgreen: color;
  let mediumturquoise: color;
  let mediumvioletred: color;
  let midnightblue: color;
  let mintcream: color;
  let mistyrose: color;
  let moccasin: color;
  let navajowhite: color;
  let navy: color;
  let oldlace: color;
  let olive: color;
  let olivedrab: color;
  let orange: color;
  let orangered: color;
  let orchid: color;
  let palegoldenrod: color;
  let palegreen: color;
  let paleturquoise: color;
  let palevioletred: color;
  let papayawhip: color;
  let peachpuff: color;
  let peru: color;
  let pink: color;
  let plum: color;
  let powderblue: color;
  let purple: color;
  let red: color;
  let rosybrown: color;
  let royalblue: color;
  let saddlebrown: color;
  let salmon: color;
  let sandybrown: color;
  let seagreen: color;
  let seashell: color;
  let sienna: color;
  let silver: color;
  let skyblue: color;
  let slateblue: color;
  let slategray: color;
  let slategrey: color;
  let snow: color;
  let springgreen: color;
  let steelblue: color;
  let tan: color;
  let teal: color;
  let thistle: color;
  let tomato: color;
  let turquoise: color;
  let violet: color;
  let wheat: color;
  let white: color;
  let whitesmoke: color;
  let yellow: color;
  let yellowgreen: color;


  /**
   * Custom Identfier
   */
  let ident: string => customIdent;

 /**
   * Animatable Properties
   */
  module AnimatableProperty: {
    let all: customIdent;
    let backdropFilter: customIdent;
    let background: customIdent;
    let backgroundColor: customIdent;
    let backgroundPosition: customIdent;
    let backgroundSize: customIdent;
    let border: customIdent;
    let borderBottom: customIdent;
    let borderBottomColor: customIdent;
    let borderBottomLeftRadius: customIdent;
    let borderBottomRightRadius: customIdent;
    let borderBottomWidth: customIdent;
    let borderColor: customIdent;
    let borderLeft: customIdent;
    let borderLeftColor: customIdent;
    let borderLeftWidth: customIdent;
    let borderRadius: customIdent;
    let borderRight: customIdent;
    let borderRightColor: customIdent;
    let borderRightWidth: customIdent;
    let borderTop: customIdent;
    let borderTopColor: customIdent;
    let borderTopLeftRadius: customIdent;
    let borderTopRightRadius: customIdent;
    let borderTopWidth: customIdent;
    let borderWidth: customIdent;
    let bottom: customIdent;
    let boxShadow: customIdent;
    let caretColor: customIdent;
    let clip: customIdent;
    let clipPath: customIdent;
    let color: customIdent;
    let columnCount: customIdent;
    let columnGap: customIdent;
    let columnRule: customIdent;
    let columnRuleColor: customIdent;
    let columnRuleWidth: customIdent;
    let columnWidth: customIdent;
    let columns: customIdent;
    let filter: customIdent;
    let flex: customIdent;
    let flexBasis: customIdent;
    let flexGrow: customIdent;
    let flexShrink: customIdent;
    let font: customIdent;
    let fontSize: customIdent;
    let fontSizeAdjust: customIdent;
    let fontStretch: customIdent;
    let fontVariationSettings: customIdent;
    let fontWeight: customIdent;
    let gridColumnGap: customIdent;
    let gridGap: customIdent;
    let gridRowGap: customIdent;
    let height: customIdent;
    let left: customIdent;
    let letterSpacing: customIdent;
    let lineHeight: customIdent;
    let margin: customIdent;
    let marginBottom: customIdent;
    let marginLeft: customIdent;
    let marginRight: customIdent;
    let marginTop: customIdent;
    let mask: customIdent;
    let maskBorder: customIdent;
    let maskPosition: customIdent;
    let maskSize: customIdent;
    let maxHeight: customIdent;
    let maxWidth: customIdent;
    let minHeight: customIdent;
    let minWidth: customIdent;
    let objectPosition: customIdent;
    let offset: customIdent;
    let offsetAnchor: customIdent;
    let offsetDistance: customIdent;
    let offsetPath: customIdent;
    let offsetRotate: customIdent;
    let opacity: customIdent;
    let order: customIdent;
    let outline: customIdent;
    let outlineColor: customIdent;
    let outlineOffset: customIdent;
    let outlineWidth: customIdent;
    let padding: customIdent;
    let paddingBottom: customIdent;
    let paddingLeft: customIdent;
    let paddingRight: customIdent;
    let paddingTop: customIdent;
    let right: customIdent;
    let scrollSnapCoordinate: customIdent;
    let scrollSnapDestination: customIdent;
    let shapeImageThreshold: customIdent;
    let shapeMargin: customIdent;
    let shapeOutside: customIdent;
    let tabSize: customIdent;
    let textDecoration: customIdent;
    let textDecorationColor: customIdent;
    let textEmphasis: customIdent;
    let textEmphasisColor: customIdent;
    let textIndent: customIdent;
    let textShadow: customIdent;
    let top: customIdent;
    let transform: customIdent;
    let transformOrigin: customIdent;
    let verticalAlign: customIdent;
    let visibility: customIdent;
    let width: customIdent;
    let wordSpacing: customIdent;
    let zIndex: customIdent;
  };
  /**
   * Ad-hoc values
   */
  let none: value([`none]);
  let auto: value([`auto]);

  /* lineWidth */
  let thin:   value([`thin]);
  let medium: value([`medium]);
  let thick:  value([`thick]);

  /* lineStyle */
  let hidden: value([`hidden]);
  let dotted: value([`dotted]);
  let dashed: value([`dashed]);
  let solid:  value([`solid]);
  let double: value([`double]);
  let groove: value([`groove]);
  let ridge:  value([`ridge]);
  let inset:  value([`inset]);
  let outset: value([`outset]);

  /* transition */
  /*let all: value([`all]);*/

};


/*********
 * Properties
 */
module type Properties = {

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

  /* border */
  let border:             value([< lineStyle | `universal]) => declaration;
  let border2:            (~width: value([< lineWidth])=?,
                           ~color: value([< `color])=?,
                           value([< lineStyle])) => declaration;
  let border3:            (~width: value([< lineWidth]),
                           ~style: value([< lineStyle]),
                           ~color: value([< `color])) => declaration;
  let borderWidth:        value([< lineWidth | `universal]) => declaration;
  let borderTopWidth:     value([< lineWidth | `universal]) => declaration;
  let borderRightWidth:   value([< lineWidth | `universal]) => declaration;
  let borderBottomWidth:  value([< lineWidth | `universal]) => declaration;
  let borderLeftWidth:    value([< lineWidth | `universal]) => declaration;
  let borderStyle:        value([< lineStyle | `universal]) => declaration;
  let borderTopStyle:     value([< lineStyle | `universal]) => declaration;
  let borderRightStyle:   value([< lineStyle | `universal]) => declaration;
  let borderBottomStyle:  value([< lineStyle | `universal]) => declaration;
  let borderLeftStyle:    value([< lineStyle | `universal]) => declaration;
  let borderColor:        value([< `color | `universal]) => declaration;
  let borderTopColor:     value([< `color | `universal]) => declaration;
  let borderRightColor:   value([< `color | `universal]) => declaration;
  let borderBottomColor:  value([< `color | `universal]) => declaration;
  let borderLeftColor:    value([< `color | `universal]) => declaration;

  let borderRadius:             value([< `length | `percentage | `universal]) => declaration;
  /* TODO?: borderRadius2-4 */
  let borderTopLeftRadius:      value([< `length | `percentage | `universal]) => declaration;
  let borderTopLeftRadius2:     (~v:value([< `length | `percentage | `universal]),
                                 ~h:value([< `length | `percentage | `universal])) => declaration;
  let borderTopRightRadius:     value([< `length | `percentage | `universal]) => declaration;
  let borderTopRightRadius2:    (~v:value([< `length | `percentage | `universal]),
                                 ~h:value([< `length | `percentage | `universal])) => declaration;
  let borderBottomRightRadius:  value([< `length | `percentage | `universal]) => declaration;
  let borderBottomRightRadius2: (~v:value([< `length | `percentage | `universal]),
                                 ~h:value([< `length | `percentage | `universal])) => declaration;
  let borderBottomLeftRadius:   value([< `length | `percentage | `universal]) => declaration;
  let borderBottomLeftRadius2:  (~v:value([< `length | `percentage | `universal]),
                                 ~h:value([< `length | `percentage | `universal])) => declaration;

};