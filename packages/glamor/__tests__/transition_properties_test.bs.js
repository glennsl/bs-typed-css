'use strict';

var TestHelpers = require("./TestHelpers.bs.js");
var TypedGlamor = require("../src/TypedGlamor.bs.js");

describe("transitionProperty", (function () {
        TestHelpers.testDeclaration(TypedGlamor.transitionProperty(TypedGlamor.unset), /* tuple */[
              "transitionProperty",
              "unset"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionProperty(TypedGlamor.none), /* tuple */[
              "transitionProperty",
              "none"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionProperty(TypedGlamor.AnimatableProperty[/* all */0]), /* tuple */[
              "transitionProperty",
              "all"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionProperty(TypedGlamor.AnimatableProperty[/* color */31]), /* tuple */[
              "transitionProperty",
              "color"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionProperty(TypedGlamor.ident("foo")), /* tuple */[
              "transitionProperty",
              "foo"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionProperties(/* :: */[
                  TypedGlamor.AnimatableProperty[/* all */0],
                  /* :: */[
                    TypedGlamor.AnimatableProperty[/* color */31],
                    /* :: */[
                      TypedGlamor.ident("foo"),
                      /* [] */0
                    ]
                  ]
                ]), /* tuple */[
              "transitionProperty",
              "all, color, foo"
            ]);
        return TestHelpers.testDeclaration(TypedGlamor.transitionProperties(/* [] */0), /* tuple */[
                    "transitionProperty",
                    "none"
                  ]);
      }));

describe("transitionDuration", (function () {
        TestHelpers.testDeclaration(TypedGlamor.transitionDuration(TypedGlamor.unset), /* tuple */[
              "transitionDuration",
              "unset"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionDuration(TypedGlamor.s(3.2)), /* tuple */[
              "transitionDuration",
              "3.2s"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionDurations(/* :: */[
                  TypedGlamor.s(3.2),
                  /* :: */[
                    TypedGlamor.ms(400),
                    /* [] */0
                  ]
                ]), /* tuple */[
              "transitionDuration",
              "3.2s, 400ms"
            ]);
        return TestHelpers.testDeclaration(TypedGlamor.transitionDurations(/* [] */0), /* tuple */[
                    "transitionDuration",
                    ""
                  ]);
      }));

describe("transitionTimingFunction", (function () {
        TestHelpers.testDeclaration(TypedGlamor.transitionTimingFunction(TypedGlamor.unset), /* tuple */[
              "transitionTimingFunction",
              "unset"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionTimingFunction(TypedGlamor.linear), /* tuple */[
              "transitionTimingFunction",
              "linear"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionTimingFunctions(/* :: */[
                  TypedGlamor.linear,
                  /* :: */[
                    TypedGlamor.easeIn,
                    /* [] */0
                  ]
                ]), /* tuple */[
              "transitionTimingFunction",
              "linear, ease-in"
            ]);
        return TestHelpers.testDeclaration(TypedGlamor.transitionTimingFunctions(/* [] */0), /* tuple */[
                    "transitionTimingFunction",
                    ""
                  ]);
      }));

describe("transitionDelay", (function () {
        TestHelpers.testDeclaration(TypedGlamor.transitionDelay(TypedGlamor.unset), /* tuple */[
              "transitionDelay",
              "unset"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionDelay(TypedGlamor.ms(100)), /* tuple */[
              "transitionDelay",
              "100ms"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitionDelays(/* :: */[
                  TypedGlamor.s(3.2),
                  /* :: */[
                    TypedGlamor.ms(100),
                    /* [] */0
                  ]
                ]), /* tuple */[
              "transitionDelay",
              "3.2s, 100ms"
            ]);
        return TestHelpers.testDeclaration(TypedGlamor.transitionDelays(/* [] */0), /* tuple */[
                    "transitionDelay",
                    ""
                  ]);
      }));

describe("transition", (function () {
        TestHelpers.testDeclaration(TypedGlamor.transition(TypedGlamor.unset), /* tuple */[
              "transition",
              "unset"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transition(TypedGlamor.none), /* tuple */[
              "transition",
              "none"
            ]);
        TestHelpers.testDeclaration(TypedGlamor.transitions(/* :: */[
                  /* tuple */[
                    TypedGlamor.AnimatableProperty[/* top */100],
                    TypedGlamor.ms(100),
                    TypedGlamor.linear,
                    TypedGlamor.s(1)
                  ],
                  /* :: */[
                    /* tuple */[
                      TypedGlamor.AnimatableProperty[/* left */54],
                      TypedGlamor.ms(200),
                      TypedGlamor.easeIn,
                      TypedGlamor.ms(50)
                    ],
                    /* [] */0
                  ]
                ]), /* tuple */[
              "transition",
              "top 100ms linear 1s, left 200ms ease-in 50ms"
            ]);
        return TestHelpers.testDeclaration(TypedGlamor.transitions(/* [] */0), /* tuple */[
                    "transition",
                    "none"
                  ]);
      }));

/*  Not a pure module */
