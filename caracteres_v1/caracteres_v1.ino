#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h> //incluir librerias
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7); // Declarar pines LCD
byte fps = 3; // Numero de caracteres
int frameDelay = 1000 / fps;


class animacion {
  private:
    int filas, columnas;
    byte *dircaracteres;
  public:
    animacion(byte *, int, int);
    void imprimir(int, int);
};

animacion::animacion(byte *_dircaracteres, int _filas, int _columnas) {
  dircaracteres = _dircaracteres;
  filas = _filas;
  columnas = _columnas;
}

void animacion::imprimir(int x, int y) {
  lcd.createChar(1, dircaracteres);
  lcd.setCursor(x, y);
  lcd.print(char(1));
}


byte cara[] = {
  B00000,
  B01010,
  B01010,
  B01010,
  B00000,
  B01110,
  B10001,
  B00000
};

byte milpa[] = {
  //SextoFrame
  B11111,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,

  B00000,
  B01010,
  B01010,
  B01010,
  B00000,
  B10001,
  B01110,
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

  animacion cana(dirNum, 3, 3);

  cana.imprimir(5, 1);
  delay(500);
  cana.imprimir(10, 1);
  delay(500);
  animacion carita(dirCar, 2, 3);
  delay(500);
  carita.imprimir(9, 1);






}

void loop()
{
  // put your main code here, to run repeatedly:

}
