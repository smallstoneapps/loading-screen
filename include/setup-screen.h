#pragma once


#include <pebble.h>


/**
 * Initialise the setup screen.
 * Should be called in the app setup code, before any other calls to this library.
 */
void setup_screen_init(void);

/**
 * De-initialise the setup screen.
 * Should be called in the app shutdown code.
 */
void setup_screen_deinit(void);

/**
 * Show the setup screen.
 */
void setup_screen_show(void);

/**
 * Hide the setup screen.
 */
void setup_screen_hide(void);

/**
 * Determine if the setup screen is currently visible.
 * @return {bool} True if the setup screen is visible, false otherwise
 */
bool setup_screen_is_visible(void);
