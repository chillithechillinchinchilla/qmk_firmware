/* Wait between tap_code register and unregister to fix flaky media keys. */
#undef TAP_CODE_DELAY

#define TAP_CODE_DELAY 20

/* Extend default tap timeout because I'm too slow. :) */
#undef TAPPING_TERM

#define TAPPING_TERM 250

/*
 * Treat mod-tap keys as holds even if the mod-tap key and the key being
 * modified are both relased within TAPPING_TERM. This assumes the mod-tap key
 * isn't usually pressed in quick succession with other tapped keys, which is
 * good when the tap keycode is something like KC_ESC rather than a letter.
 */
#define PERMISSIVE_HOLD

/*
 * Turn off key repeat support of the tap keycode for tap-hold keys, enabling
 * holds to work correctly in quick succession after taps.
 */
#define TAPPING_FORCE_HOLD

#if defined(RGBLIGHT_ENABLE)
    /* Turn off RGB underglow when the host goes to sleep. */
    #define RGBLIGHT_SLEEP

    /* Keep RGB underglow level increments consistent across keyboards. */
    #undef RGBLIGHT_HUE_STEP
    #undef RGBLIGHT_SAT_STEP
    #undef RGBLIGHT_VAL_STEP

    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#if defined(BACKLIGHT_ENABLE)
    /* Enable backlight breathing across the board. */
    #define BACKLIGHT_BREATHING

    /* Keep backlight level increments consistent across keyboards. */
    #undef BACKLIGHT_LEVELS

    #define BACKLIGHT_LEVELS 7
#endif

#if defined(MOUSEKEY_ENABLE)
    /* Make mouse operation smoother. */
    #undef MOUSEKEY_DELAY
    #undef MOUSEKEY_INTERVAL

    #define MOUSEKEY_DELAY 0
    #define MOUSEKEY_INTERVAL 16

    /* Lower mouse speed to adjust for reduced MOUSEKEY_INTERVAL. */
    #undef MOUSEKEY_MAX_SPEED
    #undef MOUSEKEY_TIME_TO_MAX
    #undef MOUSEKEY_WHEEL_MAX_SPEED
    #undef MOUSEKEY_WHEEL_TIME_TO_MAX

    #define MOUSEKEY_MAX_SPEED 7
    #define MOUSEKEY_TIME_TO_MAX 150
    #define MOUSEKEY_WHEEL_MAX_SPEED 3
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 150
#endif
