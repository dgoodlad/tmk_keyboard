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
     * | ~ `    |   1  |   2  |   3  |   4  |   5  |      |           |   \  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | ESC    |   Q  |   W  |   E  |   R  |   T  |  {   |           |  }   |   Y  |   U  |   I  |   O  |   P  |   -    |
     * |--------+------+------+------+------+------|  [   |           |  ]   |------+------+------+------+------+--------|
     * | TAB    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| GUI  |           | GUI  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  | Esc  |           | Ret  |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | ~ `  |      | LAlt | GUI  |                                       | Ctrl | Left | Rght |  Up  | Down |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       | Left | Rght |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |  Up  |      |      |
     *                                 | SPC  | BkSp |------|       |------| Ret  | SPC  |
     *                                 |      |      |      |       | Down |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        GRV, 1,   2,   3,   4,   5,    NO,
        ESC ,Q,   W,   E,   R,   T,  LBRC,
        FN3, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,  FN1,
        NO  ,GRV, NO  ,LALT,LGUI,
                                      F1  ,  F2,
                                             NO,
                                  SPC,BSPC,  NO,
        // right hand
           BSLS,  6,   7,   8,   9,   0,    EQL,
           RBRC,  Y,   U,   I,   O,   P,   MINS,
                  H,   J,   K,   L,   SCLN, FN4,
           FN2 ,  N,   M,   COMM,DOT, SLSH,RSFT,
                       RCTL,LEFT,RGHT,  UP,DOWN,
        F3  ,F4  ,
        NO  ,
        NO  , ENT, SPC
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
    [0] =  ACTION_FUNCTION(TEENSY_KEY),              // FN0  = teensy reprogramming button
    [1] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),
    [2] =  ACTION_MODS_TAP_KEY(MOD_RGUI, KC_ENT),
    [3] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_TAB),
    [4] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_QUOT),
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

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
//#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    //if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
    //    action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
    //}

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}

