'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$String = require("bs-platform/lib/js/string.js");
var Js_dict = require("bs-platform/lib/js/js_dict.js");

var Value = /* module */[];

function join(vs) {
  return $$String.concat(", ", vs);
}

var Values = /* module */[/* join */join];

var Declaration = /* module */[];

function toDict(declarations) {
  return Js_dict.fromList(List.flatten(declarations));
}

var Declarations = /* module */[/* toDict */toDict];

var Selector = /* module */[];

exports.Value = Value;
exports.Values = Values;
exports.Declaration = Declaration;
exports.Declarations = Declarations;
exports.Selector = Selector;
/* Js_dict Not a pure module */
