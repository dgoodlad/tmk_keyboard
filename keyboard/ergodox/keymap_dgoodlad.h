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
     *   |      | ~ `  | LCtl | LAlt | GUI  |                                       | RCtl | Left | Rght |  Up  | Down |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  F1  |  F2  |       |  F3  |  F4  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | SPC  | BkSp |------|       |------| Ret  | SPC  |
     *                                 |      |      |      |       | ~L1  |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Keymap: Layer 1, Arrows, Media Keys, Teensy
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F0  |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Brght+ |      |  Up  |      |      |      | Next |           | Prev |      |      |      |      |      |        |
     * |--------+------+------+------+------+------| Trck |           | Trck |------+------+------+------+------+--------|
     * | Brght- | Left | Down | Rght |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------| Mute |           | Play |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           | Paus |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP( // layer 0 : default, QWERTY
        // left hand
        GRV, 1,   2,   3,   4,   5,    NO,
        ESC ,Q,   W,   E,   R,   T,  LBRC,
        TAB, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,  FN2,
        NO  ,GRV, NO  ,LALT,LGUI,
                                      F1  ,  F2,
                                             NO,
                                  SPC,BSPC,  NO,
        // right hand
           BSLS,  6,   7,   8,   9,   0,    EQL,
           RBRC,  Y,   U,   I,   O,   P,   MINS,
                  H,   J,   K,   L,   SCLN,QUOT,
           FN3 ,  N,   M,   COMM,DOT, SLSH,RSFT,
                       RCTL,LEFT,RGHT,  UP,DOWN,
        F3  ,F4  ,
        NO  ,
        FN1 , ENT, SPC
    ),

    KEYMAP(  // Layer1 : Arrows, Media Keys, Teensy
        // left hand
        TRNS ,F1  ,F2  ,F3  ,F4  ,F5  ,TRNS,
        F16  ,TRNS,UP  ,TRNS,TRNS,TRNS,MRWD,
        F22  ,LEFT,DOWN,RGHT,TRNS,TRNS,
        TRNS ,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,
        FN0  ,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,F6  ,F7  ,F8  ,F9  ,F10 ,TRNS,
             MFFD,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             MPLY,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
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
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] =  ACTION_FUNCTION(TEENSY_KEY),              // FN0  = teensy reprogramming button
    [1] =  ACTION_LAYER_MOMENTARY(1),
    [2] =  ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),
    [3] =  ACTION_MODS_TAP_KEY(MOD_RGUI, KC_ENT),
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

