:construction: **THIS LIBRARY USES AN UNRELEASED VERSION OF THE PEBBLE SDK. DO NOT USE IN YOUR APPS.** :construction:

# Loading Screen

A Pebble library for displaying loading / setup screens in your app.

## Installing

```
npm install --save pebble-loading-screen
```

## Usage

```c
#include "pebble-loading-screen/loading-screen.h"

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
