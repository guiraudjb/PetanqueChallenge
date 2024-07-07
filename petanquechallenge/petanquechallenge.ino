#include <Keyboard.h>
const int CaptChoc = 10;
const int Cible1 = 4;   
const int Cible2 = 3;   
const int Cible3 = 5;
const int Cible4 = 6;   
const int Cible5 = 7;   
const int Cible6 = 8;
const int Cible7 = 9;   


void setup() {                
  pinMode(CaptChoc, INPUT_PULLUP);
  pinMode(Cible1,INPUT);
  pinMode(Cible2,INPUT); 
  pinMode(Cible3,INPUT);
  pinMode(Cible4,INPUT);
  pinMode(Cible5,INPUT); 
  pinMode(Cible6,INPUT); 
  pinMode(Cible7,INPUT);
  Keyboard.begin();
delay(3000);  
}


void loop(){
    
    if(digitalRead(CaptChoc)) {
      Keyboard.press('h');
      } else {
      Keyboard.release('h');
      }
    

    if(digitalRead(Cible1)) {
       Keyboard.press('v');  
    //delay(100);  
    } else {
    Keyboard.release('v');
    //delay(100);
    }
    
    if(digitalRead(Cible2)) {
        Keyboard.press('c');
      //  delay(100);
    } else {
        Keyboard.release('c');
       // delay(100); 
    }
    if(digitalRead(Cible3)) {
        Keyboard.press('b');
        //delay(100);
    } else {
        Keyboard.release('b');
        //delay(100);
    }

    if(digitalRead(Cible4)) {
       Keyboard.press('e');  
    //delay(100);  
    } else {
    Keyboard.release('e');
    //delay(100);
    }
    
    if(digitalRead(Cible5)) {
        Keyboard.press('t');
      //  delay(100);
    } else {
        Keyboard.release('t');
       // delay(100); 
    }
    if(digitalRead(Cible6)) {
        Keyboard.press('r');
        //delay(100);
    } else {
        Keyboard.release('r');
        //delay(100);
    }

    if(digitalRead(Cible7)) {
        Keyboard.press('f');
        //delay(100);
    } else {
        Keyboard.release('f');
        //delay(100);
    }
 
}
