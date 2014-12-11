static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Layers:
     *  0: QWERTY, numbers
     *
     *  16: Function keys, F1-F12
     *  17: Symbols: ()[]<>`~
     *
     * Keymap: Default Layer 0, QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | ~      |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Q  |   W  |   E  |   R  |   T  |      |           | BkSp |   Y  |   U  |   I  |   O  |   P  |   -    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TAB    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|      |           | ESC  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | LAlt | GUI  |                                       | Ctrl | RAlt |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | Enter|      |------|       |------| Fn1  | SPC  |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        GRV, 1,   2,   3,   4,   5,    NO,
        NO  ,Q,   W,   E,   R,   T,    NO,
        TAB, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,    NO,
        NO  ,NO , NO  ,LALT,LGUI,
                                      NO  ,  NO,
                                             NO,
                                  ENT , NO,  NO,
        // right hand
             NO,  6,   7,   8,   9,   0,    EQL,
           BSPC,  Y,   U,   I,   O,   P,   MINS,
                  H,   J,   K,   L,   SCLN,QUOT,
            ESC,  N,   M,   COMM,DOT, SLSH,RSFT,
                       RCTL,RALT,NO,    NO,  NO,
        NO  ,  NO,
        NO  ,
        NO  , FN1, SPC
    ),

    KEYMAP(  // Layer1 : home-row parens, etc
        // left hand
        FN0 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN6 ,LBRC,FN4 ,FN2 ,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,FN3 ,FN5 ,RBRC,FN7 ,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/
};

enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum layer_ids {
    QWERTY,
    HOME_ROW_SYMBOLS,
    BLANK_2,
    BLANK_3,
    BLANK_4,
    BLANK_5,
    BLANK_6,
    BLANK_7,
    BLANK_8,
    BLANK_9,
    BLANK_10,
    BLANK_11,
    BLANK_12,
    BLANK_13,
    BLANK_14,
    BLANK_15,
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),              // FN0  = teensy reprogramming button
    ACTION_LAYER_MOMENTARY(HOME_ROW_SYMBOLS), // FN1  = momentary home-row symbols

    ACTION_MODS_KEY(MOD_LSFT, KC_9),          // FN2  = (
    ACTION_MODS_KEY(MOD_LSFT, KC_0),          // FN3  = )
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET),   // FN4  = {
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET),   // FN5  = }
    ACTION_MODS_KEY(MOD_LSFT, KC_COMMA),      // FN6  = <
    ACTION_MODS_KEY(MOD_LSFT, KC_DOT),        // FN7  = >
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}
