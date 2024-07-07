#include <BleKeyboard.h>
BleKeyboard bleKeyboard ("Arducible v2", "DIY", 100);

const int Cible1 = 25;
const int Cible2 = 26;
const int Cible3 = 27;
const int Cible4 = 5;
const int Cible5 = 18;
const int Cible6 = 23;
const int Cible7 = 19;
const int Captchoc = 10;



void setup() {
  Serial.begin(115200);
  pinMode(Cible1, INPUT);
  pinMode(Cible2, INPUT);
  pinMode(Cible3, INPUT);
  pinMode(Cible4, INPUT);
  pinMode(Cible5, INPUT);
  pinMode(Cible6, INPUT);
  pinMode(Cible7, INPUT);
  pinMode(Captchoc, INPUT)
  bleKeyboard.begin();
}

void loop() {
  serial.print()
    if (bleKeyboard.isConnected()) {
    if (digitalRead(Cible1)) {
      bleKeyboard.press('v');
//      delay(100);
    }
    else {
      bleKeyboard.release('v');
  //    delay(100);
    }

    if (digitalRead(Cible2)) {
      bleKeyboard.press('c');
    //  delay(100);
    } else {
      bleKeyboard.release('c');
     // delay(100);
    }

    if (digitalRead(Cible3)) {
      bleKeyboard.press('b');
      //delay(100);
    }
    else {
      bleKeyboard.release('b');
      //delay(100);
    }
    if (digitalRead(Cible4)) {
      bleKeyboard.press('e');
      //delay(100);
    }
    else {
      bleKeyboard.release('e');
      //delay(100);
    }    if (digitalRead(Cible5)) {
      bleKeyboard.press('t');
      //delay(100);
    }
    else {
      bleKeyboard.release('t');
      //delay(100);
    }    if (digitalRead(Cible6)) {
      bleKeyboard.press('r');
      //delay(100);
    }
    else {
      bleKeyboard.release('r');
      //delay(100);
    }    if (digitalRead(Cible7)) {
      bleKeyboard.press('f');
      //delay(100);
    }
    else {
      bleKeyboard.release('f');
      //delay(100);
    }


  }
  Serial.println("C1: " + String(digitalRead(Cible1)) + " C2: " + String(digitalRead(Cible2))+ " C3: " + String(digitalRead(Cible3))+ " C4: " + String(digitalRead(Cible4))+ " C5: " + String(digitalRead(Cible5))+ " C6: " + String(digitalRead(Cible6))+ " C7: " + String(digitalRead(Cible7)));
}
