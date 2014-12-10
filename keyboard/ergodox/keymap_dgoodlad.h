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
     * |        |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Q  |   W  |   E  |   R  |   T  |      |           | BkSp |   Y  |   U  |   I  |   O  |   P  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TAB    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      | LAlt | GUI  |                                       | Ctrl | RAlt |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | Enter|      |------|       |------|      | SPC  |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        NO , 1,   2,   3,   4,   5,    NO,
        NO  ,Q,   W,   E,   R,   T,    NO,
        TAB, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,    NO,
        NO  ,NO , NO  ,LALT,LGUI,
                                      NO  ,  NO,
                                             NO,
                                  ENT , NO,  NO,
        // right hand
             NO,  6,   7,   8,   9,   0,     NO,
           BSPC,  Y,   U,   I,   O,   P,     NO,
                  H,   J,   K,   L,   SCLN,QUOT,
             NO,  N,   M,   COMM,DOT, SLSH,RSFT,
                       RCTL,RALT,NO,    NO,  NO,
        NO  ,  NO,
        NO  ,
        NO  ,  NO, SPC
    ),
};

enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(TEENSY_KEY),
};
