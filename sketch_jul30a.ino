#include <Keyboard.h>

char eliminarLet = KEY_BACKSPACE;


int pulsador1 = 3;
int pulsador2 = 5;
int pulsador3 = 7;
int pulsador4 = 15;
int pulsador5 = 14;
int pulsador6 = 16;
int espacio = 9;
int eli = 2 ;
int estado1, estado2, estado3, estado4, estado5, estado6;

void setup() {
  Keyboard.begin();
  pinMode(pulsador1, INPUT_PULLUP);
  pinMode(pulsador2, INPUT_PULLUP);
  pinMode(pulsador3, INPUT_PULLUP);
  pinMode(pulsador4, INPUT_PULLUP);
  pinMode(pulsador5, INPUT_PULLUP);
  pinMode(pulsador6, INPUT_PULLUP);
  pinMode(eli, INPUT_PULLUP);
  pinMode(espacio, INPUT_PULLUP);
}

void loop() {
  estado1 = digitalRead(pulsador1);
  estado2 = digitalRead(pulsador2);
  estado3 = digitalRead(pulsador3);
  estado4 = digitalRead(pulsador4);
  estado5 = digitalRead(pulsador5);
  estado6 = digitalRead(pulsador6);
  delay(700);

  if (digitalRead(espacio) == LOW) {
    Keyboard.write(' ');
    delay(500);
  } else {
    // Verificar el botón de eliminar
    if (digitalRead(eli) == LOW) {
      Keyboard.press(eliminarLet);
      delay(100);
      Keyboard.releaseAll();
    }
  }
  
  delay(100);




  
  //A
  if (estado1 == LOW && estado2 == HIGH && estado3 == HIGH && estado4 == HIGH && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('a');
    delay(100);
  } 
  // B
  else if (estado1 == LOW && estado2 == LOW && estado3 == HIGH && estado4 == HIGH && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('b');
    delay(100);
  }
  // C
  else if (estado1 == LOW && estado2 == HIGH && estado3 == HIGH && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('c');
    delay(100);
  }
  //D
  else if (estado1 == LOW && estado2 == HIGH && estado3 == HIGH && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('d');
    delay(100);
  }
  // E
  else if (estado1 == LOW && estado2 == HIGH && estado3 == HIGH && estado4 == HIGH && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('e');
    delay(100);
  }
  // F
  else if (estado1 == LOW && estado2 == LOW && estado3 == HIGH && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('f');
    delay(100);
  }
  // G
  else if (estado1 == LOW && estado2 == LOW && estado3 == HIGH && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('g');
    delay(100);
  }
  // H
  else if (estado1 == LOW && estado2 == LOW && estado3 == HIGH && estado4 == HIGH && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('h');
    delay(100);
  }
  // I
  else if (estado1 == HIGH && estado2 == LOW && estado3 == HIGH && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('i');
    delay(100);
  }
  // J
  else if (estado1 == HIGH && estado2 == LOW && estado3 == HIGH && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('j');
    delay(100);
  }
  // K
    else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW && estado4 == HIGH && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('k');
    delay(100);
  }
  // L
  else if (estado1 == LOW && estado2 == LOW && estado3 == LOW && estado4 == HIGH && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('l');
    delay(100);
  }
  // M
  else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('m');
    delay(100);
  }
  // N
   else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('n');
    delay(100);
  }
  // O
    else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW && estado4 == HIGH && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('o');
    delay(100);
  }
  // P
     else if (estado1 == LOW && estado2 == LOW && estado3 == LOW && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('p');
    delay(100);
  }
  // Q
   else if (estado1 == LOW && estado2 == LOW && estado3 == LOW && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('q');
    delay(100);
  }
  // R
   else if (estado1 == LOW && estado2 == LOW && estado3 == LOW && estado4 == HIGH && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('r');
    delay(100);
  }
  // S
   else if (estado1 == HIGH && estado2 == LOW && estado3 == LOW && estado4 == LOW && estado5 == HIGH && estado6 == HIGH) {
    Keyboard.write('s');
    delay(100);
  }
  // T
   else if (estado1 == HIGH && estado2 == LOW && estado3 == LOW && estado4 == LOW && estado5 == LOW && estado6 == HIGH) {
    Keyboard.write('t');
    delay(100);
  }
  // U
  else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW  && estado4 == HIGH && estado5 == HIGH && estado6 == LOW) {
    Keyboard.write('u');
    delay(100);
  }
  // V
  else if (estado1 == LOW && estado2 == LOW && estado3 == LOW  && estado4 == HIGH && estado5 == HIGH && estado6 == LOW) {
    Keyboard.write('v');
    delay(100);
  }
  // W
  else if (estado1 == HIGH && estado2 == LOW && estado3 == HIGH  && estado4 == LOW && estado5 == LOW && estado6 == LOW) {
    Keyboard.write('w');
    delay(100);
  }
  // X
  else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW  && estado4 == LOW && estado5 == HIGH && estado6 == LOW) {
    Keyboard.write('x');
    delay(100);
  }

 // Y
  else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW  && estado4 == LOW && estado5 == LOW && estado6 == LOW) {
    Keyboard.write('y');
    delay(100);
  }
  // Z
  else if (estado1 == LOW && estado2 == HIGH && estado3 == LOW  && estado4 == HIGH && estado5 == LOW && estado6 == LOW) {
    Keyboard.write('z');
    delay(100);
  } 
  
  Keyboard.releaseAll();
  
   
}
      
