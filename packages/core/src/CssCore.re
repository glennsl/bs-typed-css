
/*********
 * Types
 */

type declaration;

 /* values */
type value('a) constraint 'a = [>];
type universal      = value([`universal]);
type zero           = value([`zero]);
type length         = value([`length]);
type percentage     = value([`percentage]);
type angle          = value([`angle]);
type time           = value([`time]);
type uri            = value([`uri]);
/*type counter      = value([`counter]);*/
type color          = value([`color]);
type shape          = value([`shape]);
type customIdent    = value([`customIdent]);
type timingFunction = value([`timingFunction]);
type transform      = value([`transform]);

/* property-specific */
type marginWidth              = [`length | `zero | `percentage | `auto];
type paddingWidth             = [`length | `zero | `percentage];
type lineWidth                = [`thin | `medium | `thick | `length | `zero];
type lineStyle                = [`none | `hidden | `dotted | `dashed | `solid | `double | `groove | `ridge | `inset | `outset];

type singleTransitionProperty = [`customIdent];
/* TODO: use record? or function with optional args? */
type singleTransition('a)     = (value([< singleTransitionProperty] as 'a), time, timingFunction, time);

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

  let zero: value([`zero]);


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
   * Shape
   */
  let rect: (~top:    value([< `length | `zero | `auto]),
             ~right:  value([< `length | `zero | `auto]),
             ~bottom: value([< `length | `zero | `auto]),
             ~left:   value([< `length | `zero | `auto])) => shape;


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
   * Timing Function
   */
  let linear:       timingFunction;
  let ease:         timingFunction;
  let easeIn:       timingFunction;
  let easeOut:      timingFunction;
  let easeInOut:    timingFunction;
  let cubicBezier:  ((float, float), (float, float)) => timingFunction; /* TODO labeled arguments? */
  let stepStart:    timingFunction;
  let stepEnd:      timingFunction;
  let steps:        (int, value([< `start | `end_])) => timingFunction;
  let frames:       int => timingFunction;


  /**
   * Transform
   */
  let matrix:     (float, float, float, float, float, float) => transform;
  let translate:  (value([< `length | `zwro | `percentage]), value([< `length | `zero | `percentage])) => transform;
  let translateX: value([< `length | `zero | `percentage]) => transform;
  let translateY: value([< `length | `zero | `percentage]) => transform;
  let scale:      (float, float) => transform;
  let scaleX:     float => transform;
  let scaleY:     float => transform;
  let rotate:     value([< `angle | `zero]) => transform;
  /*let skew -- deprecated*/
  let skewX:      value([< `angle | `zero]) => transform;
  let skewY:      value([< `angle | `zero]) => transform;


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

  /* display */
  let inline:           value([`inline]);
  let block:            value([`block]);
  let listItem:         value([`listItem]);
  let inlineBlock:      value([`inlineBlock]);
  let table:            value([`table]);
  let inlineTable:      value([`inlineTable]);
  let tableRowGroup:    value([`tableRowGroup]);
  let tableHeaderGroup: value([`tableHeaderGroup]);
  let tableFooterGroup: value([`tableFooterGroup]);
  let tableRow:         value([`tableRow]);
  let tableColumnGroup: value([`tableColumnGroup]);
  let tableColumn:      value([`tableColumn]);
  let tableCell:        value([`tableCell]);
  let tableCaption:     value([`tableCaption]);
  let flex:             value([`flex]);
  let inlineFlex:       value([`inlineFlex]);

  /* position */
  let static:   value([`static]);
  let relative: value([`relative]);
  let absolute: value([`absolute]);
  let fixed:    value([`fixed]);

  /* float */
  let left:   value([`left]);
  let right:  value([`right]);

  /* clear */
  /*let left:   value([`left]); -- already defined */
  /*let right:  value([`right]); -- already defined */
  let both:   value([`both]);

  /* direction */
  let ltr: value([`ltr]);
  let rtl: value([`rtl]);

  /* unicodeBidi */
  let normal:       value([`normal]);
  let embed:        value([`embed]);
  let bidiOverride: value([`bidiOverride]);

  /* verticalAlign */
  let baseline:   value([`baseline]);
  let sub:        value([`sub]);
  let super:      value([`super]);
  let top:        value([`top]);
  let textTop:    value([`textTop]);
  let middle:     value([`middle]);
  let bottom:     value([`bottom]);
  let textBottom: value([`textBottom]);

  /* overflow */
  let visible:  value([`visible]);
  /*let hidden:   value([`hidden]); -- already defined */
  let scroll:   value([`scroll]);

  /* visibility */
  /*let visible: value([`visible]); -- already defined */
  /*let hidden: value([`hidden]); -- already defined */
  let collapse: value([`collapse]);

  /* transition */
  /*let all: value([`all]);*/

  /* timing function */
  let start: value([`start]);
  let end_: value([`end_]);

  /* backgroundRepeat */
  let repeat:   value([`repeat]);
  let repeatX:  value([`repeatX]);
  let repeatY:  value([`repeatY]);
  let noRepeat: value([`noRepeat]);

  /* backgroundAttachment */
  /*let scroll:  value([`scroll]); -- already defined */
  /*let fixed:  value([`fixed]); -- already defined */

  /* backgroundPosition */
  let center: value([`center]);
  /*let top:    value([`top]); -- already defined */
  /*let right:  value([`right]); -- already defined */
  /*let bottom: value([`bottom]); -- already defined */
  /* let left:   value([`left]); -- already defined */

  /* fontFamilies */
  let serif:      string;
  let sansSerif:  string;
  let cursive:    string;
  let fantasy:    string;
  let monospace:  string;

  /* fontStyle */

  /*let normal:   value([`normal]); -- already defined */
  let italic:   value([`italic]);
  let oblique:  value([`oblique]);

  /* fontVariant */
  /*let normal:   value([`normal]); -- already defined */
  let smallCaps:   value([`smallCaps]);

  /* fontWeight */
  /*let normal:   value([`normal]); -- already defined */
  let bold:     value([`normal]);
  let bolder:   value([`normal]);
  let lighter:  value([`normal]);
  let _100:     value([`_100]);
  let _200:     value([`_200]);
  let _300:     value([`_300]);
  let _400:     value([`_400]);
  let _500:     value([`_500]);
  let _600:     value([`_600]);
  let _700:     value([`_700]);
  let _800:     value([`_800]);
  let _900:     value([`_900]);

  /* fontSize */
  let xxSmall:  value([`xxSmall]);
  let xSmall:   value([`xSmall]);
  let small:    value([`small]);
  let meduium:  value([`medium]);
  let large:    value([`large]);
  let xLarge:   value([`xLarge]);
  let xxLarge:  value([`xxLarge]);
  let larger:   value([`larger]);
  let smaller:  value([`smaller]);

  /* fontSize */
  let caption:      value([`caption]);
  let icon:         value([`icon]);
  let menu:         value([`menu]);
  let messageBox:   value([`messageBox]);
  let smallCaption: value([`smallCaption]);
  let statusBar:    value([`statusBar]);

  /* textAlign */
  /*let left:     value([`left]); -- already defined */
  /*let right:    value([`right]); -- already defined */
  /*let center:   value([`center]); -- already defined */
  let justify:  value([`justify]);

  /* textDecoration */
  let underline:    value([`underline]);
  let overline:     value([`overline]);
  let lineThrough:  value([`lineThrough]);
  let blink:        value([`blink]);

  /* textTransform */
  let capitalize: value([`capitalize]);
  let uppercase:  value([`uppercase]);
  let lowercase:  value([`lowercase]);

  /* whiteSpace */
  let pre:      value([`pre]);
  let nowrap:   value([`nowrap]);
  let preWrap:  value([`preWrap]);
  let preLine:  value([`preLine]);

  /* cursor */
  let crosshair:  value([`crosshair]);
  let default:    value([`default]);
  let pointer:    value([`pointer]);
  let move:       value([`move]);
  let eResize:    value([`eResize]);
  let neResize:   value([`neResize]);
  let nwResize:   value([`nwResize]);
  let nResize:    value([`nResize]);
  let seResize:   value([`seResize]);
  let swResize:   value([`swResize]);
  let sResize:    value([`sResize]);
  let wResize:    value([`wResize]);
  let text:       value([`text]);
  let wait:       value([`wait]);
  let help:       value([`help]);
  let progress:   value([`progress]);

  /* outlineColor */
  let invert: value([`invert]);

  /* transformBox */
  let borderBox:  value([`borderBox]);
  let fillBox:    value([`fillBox]);
  let viewBox:    value([`viewBox]);

  /* flexDirection */
  let row:            value([`row]);
  let rowReverse:     value([`rowReverse]);
  let column:         value([`column]);
  let columnReverse:  value([`columnReverse]);

  /* flexWrap */
  let wrap:         value([`wrap]);
  let wrapReverse:  value([`wrapReverse]);

  /* flexBasis */
  let content:  value([`content]);

  /* justifyContent */
  let flexStart:    value([`flexStart]);
  let flexEnd:      value([`flexEnd]);
  let spaceBetween: value([`spaceBetween]);
  let spaceAround:  value([`spaceAround]);

  /* alignitems */
  let stretch:  value([`stretch]);


  /**
   * Primitives
   */
  let int:  int => value([`integer]);
  let num:  float => value([`number]);
};


/*********
 * Properties
 */
module type Properties = {

  /**
   * Box model
   */

  let margin:         value([< marginWidth | `universal]) => declaration;
  let margin2:        (~v:      value([< marginWidth]),
                       ~h:      value([< marginWidth])) => declaration;
  let margin3:        (~top:    value([< marginWidth]),
                       ~h:      value([< marginWidth]),
                       ~bottom: value([< marginWidth])) => declaration;
  let margin4:        (~top:    value([< marginWidth]),
                       ~right:  value([< marginWidth]),
                       ~bottom: value([< marginWidth]),
                       ~left:   value([< marginWidth])) => declaration;
  let marginTop:      value([< marginWidth | `universal]) => declaration;
  let marginRight:    value([< marginWidth | `universal]) => declaration;
  let marginBottom:   value([< marginWidth | `universal]) => declaration;
  let marginLeft:     value([< marginWidth | `universal]) => declaration;

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

  let border:             value([< lineStyle | `universal]) => declaration;
  let border2:            (~width: value([< lineWidth])=?,
                           ~color: value([< `color])=?,
                           value([< lineStyle])) => declaration;
  let border3:            (value([< lineWidth]),
                           value([< lineStyle]),
                           value([< `color])) => declaration;
  let borderTop:          value([< lineStyle | `universal]) => declaration;
  let borderTop3:         (value([< lineWidth]),
                           value([< lineStyle]),
                           value([< `color])) => declaration;
  let borderRight:         value([< lineStyle | `universal]) => declaration;
  let borderRight3:       (value([< lineWidth]),
                           value([< lineStyle]),
                           value([< `color])) => declaration;
  let borderBottom:        value([< lineStyle | `universal]) => declaration;
  let borderBottom3:      (value([< lineWidth]),
                           value([< lineStyle]),
                           value([< `color])) => declaration;
  let borderLeft:         value([< lineStyle | `universal]) => declaration;
  let borderLeft3:        (value([< lineWidth]),
                           value([< lineStyle]),
                           value([< `color])) => declaration;
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

  let borderRadius:             value([< `length | `zero | `percentage | `universal]) => declaration;
  /* TODO?: borderRadius2-4 */
  let borderTopLeftRadius:      value([< `length | `zero | `percentage | `universal]) => declaration;
  let borderTopLeftRadius2:     (~v:value([< `length | `zero | `percentage | `universal]),
                                 ~h:value([< `length | `zero | `percentage | `universal])) => declaration;
  let borderTopRightRadius:     value([< `length | `zero | `percentage | `universal]) => declaration;
  let borderTopRightRadius2:    (~v:value([< `length | `zero | `percentage | `universal]),
                                 ~h:value([< `length | `zero | `percentage | `universal])) => declaration;
  let borderBottomRightRadius:  value([< `length | `zero | `percentage | `universal]) => declaration;
  let borderBottomRightRadius2: (~v:value([< `length | `zero | `percentage | `universal]),
                                 ~h:value([< `length | `zero | `percentage | `universal])) => declaration;
  let borderBottomLeftRadius:   value([< `length | `zero | `percentage | `universal]) => declaration;
  let borderBottomLeftRadius2:  (~v:value([< `length | `zero | `percentage | `universal]),
                                 ~h:value([< `length | `zero | `percentage | `universal])) => declaration;


  /**
   * Visual formatting model
   */
  let display:        value([< `inline | `block | `listItem | `inlineBlock | `table
                             | `inlineTable | `tableRowGroup | `tableHeaderGroup
                             | `tableFooterGroup | `tableRow | `tableColumnGroup
                             | `tableColumn | `tableCell | `tableCaption | `none
                             | `flex | `inlineFlex | `universal]) => declaration;
  let position:       value([< `static | `relative | `absolute | `fixed | `universal]) => declaration;
  let offsetTop:      value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let offsetRight:    value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let offsetBottom:   value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let offsetLeft:     value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let float:          value([< `left | `right | `none | `universal]) => declaration;
  let clear:          value([< `none | `left | `right | `both | `universal]) => declaration;
  let zIndex:         value([< `auto | `integer | `universal]) => declaration;
  let direction:      value([< `ltr | `rtl | `universal]) => declaration;
  let unicodeBidi:    value([< `normal | `embed | `bidiOverride | `universal]) => declaration;
  let width:          value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let minWidth:       value([< `length | `zero | `percentage | `universal]) => declaration;
  let maxWidth:       value([< `length | `zero | `percentage | `none | `universal]) => declaration;
  let height:         value([< `length | `zero | `percentage | `auto | `universal]) => declaration;
  let minHeight:      value([< `length | `zero | `percentage | `universal]) => declaration;
  let maxHeight:      value([< `length | `zero | `percentage | `none | `universal]) => declaration;
  let lineHeight:     value([< `normal | `number | `length | `zero | `percentage | `universal]) => declaration; /* TODO? move to fonts */
  let verticalAlign:  value([< `baseline | `sub | `super | `top | `textTop | `middle
                             | `bottom | `textBottom | `percentage | `length | `zero | `universal]) => declaration;


  /**
   * Visual effects
   */
  let overflow:   value([< `visible | `hidden | `scroll | `auto | `universal]) => declaration;
  let clip:       value([< `shape | `auto | `universal]) => declaration;
  let visibility: value([< `visible | `hidden | `collapse | `universal]) => declaration;


  /* TODO: Generated content etc... */
  /* TODO: Paged Media */


  /**
   * Colors and Backgrounds
   */
  let color:                value([< `color | `universal]) => declaration;
  let opacity:              float => declaration;
  let background:           value([< `color | `uri | `none | `universal]) => declaration;
  let backgroundColor:      value([< `color | `universal]) => declaration;
  let backgroundImage:      value([< `uri | `none | `universal]) => declaration;
  let backgroundRepeat:     value([< `repeat | `repeatX | `repeatY | `noRepeat | `universal]) => declaration;
  let backgroundAttachment: value([< `scroll | `fixed | `universal]) => declaration;
  let backgroundPosition:   value([< `universal]) => declaration;
  let backgroundPosition2:  (~h: value([< `percentage | `length | `zero | `left | `center | `right]),
                             ~v: value([< `percentage | `length | `zero | `top | `center | `bottom])) => declaration;


  /**
   * Fonts
   */
  let fontFamily:   value([< `universal]) => declaration;
  let fontFamilies: list(string) => declaration;
  let fontStyle:    value([< `normal | `italic | `oblique | `universal]) => declaration;
  let fontVariant:  value([< `normal | `smallCaps | `universal]) => declaration;
  let fontWeight:   value([< `normal | `bold | `bolder | `lighter | `_100
                           |`_200 | `_300 | `_400 | `_500 | `_600 | `_700
                           | `_800 | `_900 | `universal]) => declaration;
  let fontSize:     value([< `xxSmall | `xSmall | `small | `medium | `large
                           | `xLarge | `xxLarge | `larger | `smaller | `length
                           | `percentage | `universal]) => declaration;
  let font:         value([< `caption | `icon | `menu | `messageBox
                           | `smallCaption | `statusBar | `universal]) => declaration;
  /*TODO? let fontX*/


  /**
   * Text
   */
  let textIndent:     value([< `length | `zero | `percentage | `universal]) => declaration;
  let textAlign:      value([< `left | `right | `center | `justify | `universal]) => declaration;
  let textDecoration: value([< `none | `underline | `overline | `lineThrough | `blink | `universal]) => declaration;
  let letterSpacing:  value([< `normal | `length | `zero | `universal]) => declaration;
  let wordSpacing:    value([< `normal | `length | `zero | `universal]) => declaration;
  let textTransform:  value([< `capitalize | `uppercase | `lowercase | `none | `universal]) => declaration;
  let whiteSpace:     value([< `normal | `pre | `nowrap | `preWrap | `preLine | `universal]) => declaration;


  /* TODO: Tables */
  

  /**
   * User interface
   */
  let cursor:       value([< `uri | `auto | `crosshair | `default | `pointer
                           | `move | `eResize | `neResize | `nwResize | `nResize
                           | `seResize | `swResize | `sResize | `wResize | `text
                           | `wait | `help | `progress | `universal]) => declaration;
  let outline:      value([< lineStyle | `universal]) => declaration;
  let outline2:     (~width: value([< lineWidth])=?,
                     ~color: value([< `color])=?,
                     value([< lineStyle])) => declaration;
  let outline3:     (value([< lineWidth]),
                     value([< lineStyle]),
                     value([< `color])) => declaration;
  let outlineWidth: value([< lineWidth | `universal]) => declaration;
  let outlineStyle: value([< lineStyle | `universal]) => declaration;
  let outlineColor: value([< `color | `invert | `universal]) => declaration;


  /**
   * Transitions
   */
  /* TODO: The values of these longhand properties are related to each other, e.g.
   * the 2nd value of transition-duration applies only to the 2nd value of
   * transition-property. I wonder if this is actually useful for some purpose
   * other than shooting yourself in the foot, or if it'd be better to just remove
   * them.
   * 
   * TODO? Remove singleTransitionProperty from the singulat value
   */
  let transitionProperty:         value([< `none | singleTransitionProperty | `universal]) => declaration;
  let transitionProperties:       list(value([< singleTransitionProperty])) => declaration;
  let transitionDuration:         value([< `time | `universal]) => declaration;
  let transitionDurations:        list(time) => declaration;
  let transitionTimingFunction:   value([< `timingFunction | `universal]) => declaration;
  let transitionTimingFunctions:  list(timingFunction) => declaration;
  let transitionDelay:            value([< `time | `universal]) => declaration;
  let transitionDelays:           list(time) => declaration;
  let transition:                 value([< `none | `universal]) => declaration;
  let transitions:                list(singleTransition('a)) => declaration;


  /**
   * Transforms
   */
  let transform:            value([< `none | `universal]) => declaration;
  let transforms:           list(value([`transform])) => declaration;
  let transformOrigin:      value([< `universal]) => declaration;
  let transformOrigin2:     (~h: value([< `percentage | `length | `zero | `left | `center | `right]),
                             ~v: value([< `percentage | `length | `zero | `top | `center | `bottom])) => declaration;
  let transformBox:         value([< `borderBox | `fillBox | `viewBox | `universal]) => declaration;


  /**
   * Flexible Box Layout Model
   */
  let flexDirection:  value([< `row | `rowReverse | `column | `columnReverse | `universal]) => declaration;
  let flexWrap:       value([< `nowrap | `wrap | `wrapReverse | `universal]) => declaration;
  let flexFlow:       value([< `row | `rowReverse | `column | `columnReverse
                             | `nowrap | `wrap | `wrapReverse | `universal]) => declaration;
  let flexFlow2:      (value([< `row | `rowReverse | `column | `columnReverse]),
                      value([< `nowrap | `wrap | `wrapReverse])) => declaration;
  let order:          int => declaration;
  let flex_:          value([< `content | `auto | `none | `universal]) => declaration;
  let flex3:          (~grow:   float,
                       ~shrink: float,
                       value([< `content | `length | `zero | `percentage | `auto])) => declaration;
  let flexGrow:       float => declaration;
  let flexShrink:     float => declaration;
  let flexBasis:      value([< `content | `length | `percentage | `auto | `universal]) => declaration;
  let justifyContent: value([< `flexStart | `flexEnd | `center | `spaceBetween | `spaceAround | `universal]) => declaration;
  let alignItems:     value([< `flexStart | `flexEnd | `center | `baseline | `stretch | `universal]) => declaration;
  let alignSelf:      value([< `auto | `flexStart | `flexEnd | `center | `baseline | `stretch | `universal]) => declaration;
  let alignContent:   value([< `flexStart | `flexEnd | `center | `spaceBetween | `spaceAround | `stretch | `universal]) => declaration;

};