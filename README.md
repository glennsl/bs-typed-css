# CSS. Typed.

This repository contains packages implementing a typed interface/DSL to CSS.

### Packages (core)

- `core`: implements the common interface

### Packages (adapters)

- `glamor`: an adapter to the `glamor` CSS library

## Developing

To develop locally, check out the repository and run `yarn` with _workspaces_ enable (packages dependencies will be hoisted).

There are 2 top level commands:

- `yarn build`: will run the `build` task in each package, sequentially
- `yarn start`: will run the `start` task in each package, in parallel

To work on a specific package, `cd` into the package folder and run one of the following commands:

- `yarn clean`: will clean up the build artifacts
- `yarn build`: will compile the sources
- `yarn start`: will compile the sources in watch mode

## Testing

Testing is done using `jest` and `bs-jest`. From the root package simply run `yarn test`.

## Releasing

Releases are managed by [lerna](https://github.com/lerna/lerna) using the _locked_ mode, which operates on a single `version` line.

To release one or more packages, simply run `yarn release`. You will be prompted to select the appropriate version you want to publish.
