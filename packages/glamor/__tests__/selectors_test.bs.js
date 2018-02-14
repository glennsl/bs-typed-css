'use strict';

var TestHelpers = require("./TestHelpers.bs.js");
var TypedGlamor = require("../src/TypedGlamor.bs.js");

TestHelpers.testSelector(TypedGlamor.select(":whatever", /* :: */[
          TypedGlamor.margin(TypedGlamor.em(1)),
          /* [] */0
        ]), /* tuple */[
      ":whatever",
      /* :: */[
        /* tuple */[
          "margin",
          "1em"
        ],
        /* [] */0
      ]
    ]);

TestHelpers.testSelector(TypedGlamor.hover(/* :: */[
          TypedGlamor.margin(TypedGlamor.em(1)),
          /* [] */0
        ]), /* tuple */[
      ":hover",
      /* :: */[
        /* tuple */[
          "margin",
          "1em"
        ],
        /* [] */0
      ]
    ]);

/*  Not a pure module */
