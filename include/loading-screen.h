#pragma once


#include <pebble.h>


/**
 * Initialise the loading screen.
 * Should be called in the app setup code, before any other calls to this library.
 */
void loading_screen_init(void);

/**
 * De-initialise the loading screen.
 * Should be called in the app shutdown code.
 */
void loading_screen_deinit(void);

/**
 * Show the loading screen.
 */
void loading_screen_show(void);

/**
 * Hide the loading screen.
 */
void loading_screen_hide(void);

/**
 * Determine if the loading screen is currently visible.
 * @return {bool} True if the loading screen is visible, false otherwise
 */
bool loading_screen_is_visible(void);
