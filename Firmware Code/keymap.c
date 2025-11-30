#include QMK_KEYBOARD_H

enum layers {
    _LAYER_0,
    _LAYER_1,
    _LAYER_2,
    _NUM_LAYERS
};

enum custom_keycodes {
    SPOTIFY_OPEN = SAFE_RANGE,
    DISCORD_MUTE,
    DISCORD_DEAFEN,
    SNIP_TOOL,
    KICAD_OPEN,
    SLEEP_PC
};

uint8_t current_layer = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_LAYER_0] = LAYOUT_ortho_3x3(
        LCTL(KC_C),    LCTL(KC_V),     LCTL(KC_X),
        LCTL(KC_Z),    KC_PSCR,        LCTL(KC_Y),
        LCTL(KC_T),    LCTL(KC_W),     LALT(KC_TAB)
    ),

    [_LAYER_1] = LAYOUT_ortho_3x3(
        KC_A,          KC_B,           KC_C,
        KC_R,          LCTL(KC_S),     KC_DEL,
        LCTL(LSFT(KC_Z)),  S(KC_3),    KC_F3
    ),

    [_LAYER_2] = LAYOUT_ortho_3x3(
        KC_MEDIA_PLAY_PAUSE,  SPOTIFY_OPEN,    KC_MEDIA_NEXT_TRACK,
        DISCORD_MUTE,         KC_NO,           DISCORD_DEAFEN,
        SNIP_TOOL,            KICAD_OPEN,      SLEEP_PC
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;

    switch (keycode) {
        case SPOTIFY_OPEN:
            SEND_STRING(SS_LGUI("r") SS_DELAY(100) "spotify" SS_TAP(X_ENTER));
            return false;
        case DISCORD_MUTE:
            SEND_STRING(SS_LCTL(SS_LSFT("m")));
            return false;
        case DISCORD_DEAFEN:
            SEND_STRING(SS_LCTL(SS_LSFT("d")));
            return false;
        case SNIP_TOOL:
            SEND_STRING(SS_LGUI(SS_LSFT("s")));
            return false;
        case KICAD_OPEN:
            SEND_STRING(SS_LGUI("r") SS_DELAY(100) "KiCad 9.0" SS_TAP(X_ENTER));
            return false;
        case SLEEP_PC:
            SEND_STRING(SS_LGUI("x") SS_DELAY(100) SS_TAP(X_U) SS_TAP(X_S));
            return false;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index != 0) return false;
    current_layer = (current_layer + (clockwise ? 1 : _NUM_LAYERS - 1)) % _NUM_LAYERS;
    layer_move(current_layer);
    return false; // Important: returning false to stop any default encoder behavior
}
