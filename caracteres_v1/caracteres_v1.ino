#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
//#include "caracteres_v1.h"
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7); // LCD pin declaration

byte fps = 3; // Number of characters per frame
int frameDelay = 1000 / fps;  // Frame duration

class animacion
{
  private:
  int rows, columns;
  byte *dircaracteres;

  public:
  animacion(byte *, int, int);
  void imprimir(int, int);
};

animacion::animacion(byte *_dircaracteres, int _rows, int _columns)
{
  dircaracteres = _dircaracteres;
  rows = _rows;
  columns = _columns;
}

void animacion::imprimir(int x, int y)
{
    for (int i = 0; i < columns; i++)
    {       
        //numChar = 0;
        for (int j = 0; j < rows; j++)
        {
          //numChar++;
          lcd.createChar(1, dircaracteres);
          lcd.setCursor(x, y);
          lcd.print(char(1));
          dircaracteres += 8;


      }
  }
  delay(frameDelay);

}

byte cara[] = {  
    B00000,
    B01010,
    B01010,
    B01010,
    B00100,
    B01110,
    B10001,
    B00000
};

byte milpa[] = {
  //FistFrame
  B00000,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
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

  lcd.setCursor(5, 0);
  lcd.print("CARGANDO");

  animacion cana(dirNum, 2, 3);

  cana.imprimir(2, 0);
  delay(500);
  // cana.imprimir(10, 1);
  // delay(500);
  animacion carita(dirCar, 1, 1);
  delay(500);
  carita.imprimir(9, 1);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
