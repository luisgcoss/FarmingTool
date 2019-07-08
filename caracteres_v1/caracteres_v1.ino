#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
//#include "caracteres_v1.h"
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7); // LCD pin declaration

const long fps = 3; // Number of characters per frame
unsigned long frameDelay = 1000 / fps;  // Frame duration
unsigned long previousMillis = 0;
unsigned long currentMillis = 0;

class animation
{
  private:
  int rows, cols, frames;
  byte *dirChars;

  public:
  animation(byte *, int, int, int);
  void draw(int, int);
};

animation::animation(byte *_dirChars, int _rows, int _cols, int _frames)
{
  dirChars = _dirChars;
  rows = _rows;
  cols = _cols;
  frames = _frames;
}

void animation::draw(int x, int y)
{
  const byte *address;
  address = dirChars;    //saving initial memory address 
  
  
  for(int i=0; i<frames; i++) {     //bucle for (frames)
    byte numChar = 0;
    Serial.println(currentMillis);
    //if (currentMillis - previousMillis >= fram) {
      previousMillis = currentMillis;
      for (int j = 0; j < cols; j++) {     //bucle for (cols) 
        for (int k = 0; k < rows; k++) {   //bucle for (rows)
        byte _x = x + j;    //x cord
        byte _y = y + k;    //y cord
        lcd.createChar(numChar, dirChars);
        lcd.setCursor(_x, _y);
        lcd.print(char(numChar));
        lcd.setCursor(_x + 13,_y);
        lcd.print(char(numChar));
        dirChars += 8;
        numChar++;

      }
    }
while(currentMillis - previousMillis <= frameDelay){
      currentMillis = millis();
}
  }
//}
  dirChars = address;     //restarting initial memory adress
  // for(int i=0; i<(x * y); i++){
  //   byte voidChar[] = {  
  //     B00000,
  //     B00000,
  //     B00000,
  //     B00000,
  //     B00000,
  //     B00000,
  //     B00000,
  //     B00000
  //   };
  //   lcd.createChar(1, voidChar);
  // }

}



byte cara[] = {  
  B00000,
  B01010,
  B01010,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000
};

byte milpa[] = {
  //FistFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00100,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //SecondFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00100,
  B01000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //ThirdFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00100,
  B00100,
  B01010,
  B11000,
  B01000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //FourthFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00100,
  B00110,
  B01100,
  B00100,
  B01010,
  B11000,
  B01000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //FifthFreme
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00001,
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00110,
  B01100,

  B00101,
  B10110,
  B01100,
  B00100,
  B00100,
  B01010,
  B11000,
  B01000,

  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B10000,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //SixthFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00010,
  B00000,

  B00000,
  B00001,
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00000,
  B00000,
  B00000,
  B00100,
  B00101,
  B10110,
  B01100,
  B00100,

  B00101,
  B10110,
  B01100,
  B00100,
  B00100,
  B01010,
  B11000,
  B01000,

  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B01000,
  B00000,
  B00000,

  B10000,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  //SeventhFrame
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00010,
  B00000,

  B00000,
  B00001,
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,

  B00100,
  B01110,
  B01110,
  B00100,
  B00101,
  B10110,
  B01100,
  B00100,

  B00101,
  B10110,
  B01100,
  B00100,
  B00100,
  B01010,
  B11000,
  B01000,

  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B01000,
  B00000,
  B00000,

  B10000,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(LOW);
  lcd.begin(16, 2);
  lcd.clear();

  byte *dirNum, *dirCar;
  dirNum = milpa;
  dirCar = cara;

  lcd.setCursor(4, 0);
  lcd.print("CARGANDO");

  animation cana(dirNum, 2, 3,7);

  cana.draw(0, 0);
  //cana.draw(13, 0);

  // cana.draw(10, 1);
  // delay(500);
  animation carita(dirCar, 1, 1,1);
  carita.draw(8,1);
  delay(500);
  //carita.draw(9, 1);
}

void loop()
{
  // put your main code here, to run repeatedly:

}
