/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H


#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x005B
#define DEVICE_VER      0x0814
#define MANUFACTURER    t.m.k.
#define PRODUCT         USB to USB keyboard converter


#define DESCRIPTION     Product from t.m.k. keyboard firmware project


#define MOUSEKEY_DELAY 30 // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 20 // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA 4 // Step size
#define MOUSEKEY_MAX_SPEED 10 // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 20 // Time until maximum cursor speed is reached
/* Scroll: */
#define MOUSEKEY_WHEEL_DELAY 300 // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL 100 // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED 8 // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40 // Time until maximum scroll speed is reached

/* matrix size */
#define MATRIX_ROWS 16
#define MATRIX_COLS 16

/* key combination for command */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))) 


// Disable power saving in USB suspend loop but remote wakeup is still valid.
// This allows keep USB::Task() going during suspend without power down time delay.
//#define NO_SUSPEND_POWER_DOWN


// Disable USB startup wait, which can delays starting UHS2 Task() for 350-600ms.
//#define NO_USB_STARTUP_WAIT_LOOP

// Disable USB suspend loop, which blocks UHS2 Task() while power saving.
// Note that this also disables power saving and remote wakeup from keyboard completely.
//#define NO_USB_SUSPEND_LOOP

/* Mechanical locking support. */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

// power saving during suspended without remote wakeup disabled
#define UHS2_POWER_SAVING

#endif
