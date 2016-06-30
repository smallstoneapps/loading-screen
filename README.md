# Loading Screen [![Build Status](http://img.shields.io/travis/smallstoneapps/loading-screen.svg?style=flat-square)](https://travis-ci.org/smallstoneapps/loading-screen/)&nbsp;[![npm (scoped)](https://img.shields.io/npm/v/@smallstoneapps/loading-screen.svg?maxAge=2592000&style=flat-square)](https://www.npmjs.com/package/@smallstoneapps/loading-screen)&nbsp;[![MIT License](http://img.shields.io/badge/license-MIT-lightgray.svg?style=flat-square)](./LICENSE)

A Pebble library for displaying loading / setup screens in your app.

## Installation

*You must be using Pebble SDK 3.12 or newer to use this library.*

To install the package to your app, use the pebble tool:

```
pebble package install @smallstoneapps/loading-screen
```

## Usage

```c
#include <@smallstoneapps/loading-screen/loading-screen.h>

// Must be called once before any other calls
loading_screen_init();

// Pushes the loading screen onto the window stack
loading_screen_show();

// Removes the loading screen from the window stack
loading_screen_hide();
```

## Screenshots

### Loading Screen

![Loading screen on Aplite](docs/loading_aplite.png)
![Loading screen on Basalt](docs/loading_basalt.png)

### Setup Screen

![Setup screen on Aplite](docs/setup_aplite.png)
![Setup screen on Basalt](docs/setup_basalt.png)
