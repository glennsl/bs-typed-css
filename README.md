# CSS. Typed.

This repository contains packages implementing a typed interface/DSL to CSS.

### Packages (core)

- `core`: implements the common interface

### Packages (adapters)

- `glamor`: an adapter to the `glamor` CSS library
- `react`: an adapter to write "styled" components to be used with ReasonReact

## Developing

To develop locally, check out the repository and run `yarn`. This will install the main dev dependencies and run `lerna bootstrap`, which will install all the dependencies in each package.

To work on a specific package, simply `cd` into the package folder and run one of the following commands:

- `yarn clean`: will clean up the build artifacts
- `yarn build`: will compile the sources
- `yarn start`: will compile the sources in watch mode

## Testing

Testing is done using `jest` and `bs-jest`. From the root package simply run `yarn test`.

## Releasing

Releases are managed by [lerna](https://github.com/lerna/lerna) using the _locked_ mode, which operates on a single `version` line.

To release one or more packages, simply run `yarn release`. You will be prompted to select the appropriate version you want to publish.
