#include "pyxelcore/common.h"

#define CHECK_CONSTANT(constant)        \
  do {                                  \
    if (strcmp(name, #constant) == 0) { \
      return constant;                  \
    }                                   \
  } while (false)

namespace pyxelcore {

int32_t GetConstantNumber(const char* name) {
  for (int32_t i = 0; i < COLOR_COUNT; i++) {
    std::string constant = "DEFAULT_PALETTE_";

    if (i < 10) {
      constant += "0";
    }

    constant += std::to_string(i);

    if (std::string(name) == constant) {
      return DEFAULT_PALETTE[i];
    }
  }

  CHECK_CONSTANT(COLOR_COUNT);

  CHECK_CONSTANT(DEFAULT_FPS);
  CHECK_CONSTANT(DEFAULT_SCALE);
  CHECK_CONSTANT(DEFAULT_FPS);
  CHECK_CONSTANT(DEFAULT_BORDER_WIDTH);
  CHECK_CONSTANT(DEFAULT_BORDER_COLOR);

  CHECK_CONSTANT(KEY_SPACE);
  CHECK_CONSTANT(KEY_APOSTROPHE);
  CHECK_CONSTANT(KEY_COMMA);
  CHECK_CONSTANT(KEY_MINUS);
  CHECK_CONSTANT(KEY_PERIOD);
  CHECK_CONSTANT(KEY_SLASH);
  CHECK_CONSTANT(KEY_0);
  CHECK_CONSTANT(KEY_1);
  CHECK_CONSTANT(KEY_2);
  CHECK_CONSTANT(KEY_3);
  CHECK_CONSTANT(KEY_4);
  CHECK_CONSTANT(KEY_5);
  CHECK_CONSTANT(KEY_6);
  CHECK_CONSTANT(KEY_7);
  CHECK_CONSTANT(KEY_8);
  CHECK_CONSTANT(KEY_9);
  CHECK_CONSTANT(KEY_SEMICOLON);
  CHECK_CONSTANT(KEY_EQUAL);
  CHECK_CONSTANT(KEY_A);
  CHECK_CONSTANT(KEY_B);
  CHECK_CONSTANT(KEY_C);
  CHECK_CONSTANT(KEY_D);
  CHECK_CONSTANT(KEY_E);
  CHECK_CONSTANT(KEY_F);
  CHECK_CONSTANT(KEY_G);
  CHECK_CONSTANT(KEY_H);
  CHECK_CONSTANT(KEY_I);
  CHECK_CONSTANT(KEY_J);
  CHECK_CONSTANT(KEY_K);
  CHECK_CONSTANT(KEY_L);
  CHECK_CONSTANT(KEY_M);
  CHECK_CONSTANT(KEY_N);
  CHECK_CONSTANT(KEY_O);
  CHECK_CONSTANT(KEY_P);
  CHECK_CONSTANT(KEY_Q);
  CHECK_CONSTANT(KEY_R);
  CHECK_CONSTANT(KEY_S);
  CHECK_CONSTANT(KEY_T);
  CHECK_CONSTANT(KEY_U);
  CHECK_CONSTANT(KEY_V);
  CHECK_CONSTANT(KEY_W);
  CHECK_CONSTANT(KEY_X);
  CHECK_CONSTANT(KEY_Y);
  CHECK_CONSTANT(KEY_Z);
  CHECK_CONSTANT(KEY_LEFT_BRACKET);
  CHECK_CONSTANT(KEY_BACKSLASH);
  CHECK_CONSTANT(KEY_RIGHT_BRACKET);
  CHECK_CONSTANT(KEY_GRAVE_ACCENT);
  CHECK_CONSTANT(KEY_ESCAPE);
  CHECK_CONSTANT(KEY_ENTER);
  CHECK_CONSTANT(KEY_TAB);
  CHECK_CONSTANT(KEY_BACKSPACE);
  CHECK_CONSTANT(KEY_INSERT);
  CHECK_CONSTANT(KEY_DELETE);
  CHECK_CONSTANT(KEY_RIGHT);
  CHECK_CONSTANT(KEY_LEFT);
  CHECK_CONSTANT(KEY_DOWN);
  CHECK_CONSTANT(KEY_UP);
  CHECK_CONSTANT(KEY_PAGE_UP);
  CHECK_CONSTANT(KEY_PAGE_DOWN);
  CHECK_CONSTANT(KEY_HOME);
  CHECK_CONSTANT(KEY_END);
  CHECK_CONSTANT(KEY_CAPS_LOCK);
  CHECK_CONSTANT(KEY_SCROLL_LOCK);
  CHECK_CONSTANT(KEY_NUM_LOCK);
  CHECK_CONSTANT(KEY_PRINT_SCREEN);
  CHECK_CONSTANT(KEY_PAUSE);
  CHECK_CONSTANT(KEY_F1);
  CHECK_CONSTANT(KEY_F2);
  CHECK_CONSTANT(KEY_F3);
  CHECK_CONSTANT(KEY_F4);
  CHECK_CONSTANT(KEY_F5);
  CHECK_CONSTANT(KEY_F6);
  CHECK_CONSTANT(KEY_F7);
  CHECK_CONSTANT(KEY_F8);
  CHECK_CONSTANT(KEY_F9);
  CHECK_CONSTANT(KEY_F10);
  CHECK_CONSTANT(KEY_F11);
  CHECK_CONSTANT(KEY_F12);
  CHECK_CONSTANT(KEY_KP_0);
  CHECK_CONSTANT(KEY_KP_1);
  CHECK_CONSTANT(KEY_KP_2);
  CHECK_CONSTANT(KEY_KP_3);
  CHECK_CONSTANT(KEY_KP_4);
  CHECK_CONSTANT(KEY_KP_5);
  CHECK_CONSTANT(KEY_KP_6);
  CHECK_CONSTANT(KEY_KP_7);
  CHECK_CONSTANT(KEY_KP_8);
  CHECK_CONSTANT(KEY_KP_9);
  CHECK_CONSTANT(KEY_KP_DECIMAL);
  CHECK_CONSTANT(KEY_KP_DIVIDE);
  CHECK_CONSTANT(KEY_KP_MULTIPLY);
  CHECK_CONSTANT(KEY_KP_SUBTRACT);
  CHECK_CONSTANT(KEY_KP_ADD);
  CHECK_CONSTANT(KEY_KP_ENTER);
  CHECK_CONSTANT(KEY_KP_EQUAL);
  CHECK_CONSTANT(KEY_LEFT_SHIFT);
  CHECK_CONSTANT(KEY_LEFT_CONTROL);
  CHECK_CONSTANT(KEY_LEFT_ALT);
  CHECK_CONSTANT(KEY_LEFT_SUPER);
  CHECK_CONSTANT(KEY_RIGHT_SHIFT);
  CHECK_CONSTANT(KEY_RIGHT_CONTROL);
  CHECK_CONSTANT(KEY_RIGHT_ALT);
  CHECK_CONSTANT(KEY_RIGHT_SUPER);
  CHECK_CONSTANT(KEY_MENU);
  CHECK_CONSTANT(KEY_SHIFT);
  CHECK_CONSTANT(KEY_CONTROL);
  CHECK_CONSTANT(KEY_ALT);
  CHECK_CONSTANT(KEY_SUPER);

  CHECK_CONSTANT(MOUSE_LEFT_BUTTON);
  CHECK_CONSTANT(MOUSE_MIDDLE_BUTTON);
  CHECK_CONSTANT(MOUSE_RIGHT_BUTTON);

  CHECK_CONSTANT(GAMEPAD_1_A);
  CHECK_CONSTANT(GAMEPAD_1_B);
  CHECK_CONSTANT(GAMEPAD_1_X);
  CHECK_CONSTANT(GAMEPAD_1_Y);
  CHECK_CONSTANT(GAMEPAD_1_LEFT_SHOULDER);
  CHECK_CONSTANT(GAMEPAD_1_RIGHT_SHOULDER);
  CHECK_CONSTANT(GAMEPAD_1_SELECT);
  CHECK_CONSTANT(GAMEPAD_1_START);
  CHECK_CONSTANT(GAMEPAD_1_UP);
  CHECK_CONSTANT(GAMEPAD_1_RIGHT);
  CHECK_CONSTANT(GAMEPAD_1_DOWN);
  CHECK_CONSTANT(GAMEPAD_1_LEFT);

  CHECK_CONSTANT(GAMEPAD_2_A);
  CHECK_CONSTANT(GAMEPAD_2_B);
  CHECK_CONSTANT(GAMEPAD_2_X);
  CHECK_CONSTANT(GAMEPAD_2_Y);
  CHECK_CONSTANT(GAMEPAD_2_LEFT_SHOULDER);
  CHECK_CONSTANT(GAMEPAD_2_RIGHT_SHOULDER);
  CHECK_CONSTANT(GAMEPAD_2_SELECT);
  CHECK_CONSTANT(GAMEPAD_2_START);
  CHECK_CONSTANT(GAMEPAD_2_UP);
  CHECK_CONSTANT(GAMEPAD_2_RIGHT);
  CHECK_CONSTANT(GAMEPAD_2_DOWN);
  CHECK_CONSTANT(GAMEPAD_2_LEFT);

  char buf[256];
  snprintf(buf, sizeof(buf), "unknown constant name '%s'", name);
  PRINT_ERROR(buf);

  return 0;
}

const char* GetConstantString(const char* name) {
  CHECK_CONSTANT(VERSION);

  CHECK_CONSTANT(DEFAULT_CAPTION);

  char buf[256];
  snprintf(buf, sizeof(buf), "unknown constant name '%s'", name);
  PRINT_ERROR(buf);

  return "";
}

}  // namespace pyxelcore