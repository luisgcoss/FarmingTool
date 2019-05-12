#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h> //incluir librerias
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7); // Declarar pines LCD
byte fps = 3; // Numero de caracteres
int frameDelay = 1000 / fps;



class Animation{
  private:
    char arreglo[];
  public:
    Animation(char);
    int imprimir();
  
};

Animation::Animation(char _arreglo){
  arreglo = _arreglo;
}



// Formato del Array [No de framess][No de filas][Bytes lcd]
byte milpa[7][3][2][8] = {
  //PrimerFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00100,
        B00000,
        B00000,
        B00000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //SegundoFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00100,
        B01000,
        B00000,
        B00000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //TercerFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      },
      {
        B00000,
        B00000,
        B00000,
        B00100,
        B00100,
        B01010,
        B11000,
        B01000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //CuartoFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      },
      {
        B00000,
        B00100,
        B00110,
        B01100,
        B00100,
        B01010,
        B11000,
        B01000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //QuintoFreme
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B00000,
        B00001,
        B00010,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00110,
        B01100
      },
      {
        B00101,
        B10110,
        B01100,
        B00100,
        B00100,
        B01010,
        B11000,
        B01000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000

      },
      {
        B10000,
        B01000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //SextoFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00001,
        B00010,
        B00000

      },
      {
        B00000,
        B00001,
        B00010,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00100,
        B00101,
        B10110,
        B01100,
        B00100
      },
      {
        B00101,
        B10110,
        B01100,
        B00100,
        B00100,
        B01010,
        B11000,
        B01000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B10000,
        B01000,
        B00000,
        B00000

      },
      {
        B10000,
        B01000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  },
  //SeptimoFrame
  {
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00001,
        B00010,
        B00000

      },
      {
        B00000,
        B00001,
        B00010,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    },
    {
      {
        B00100,
        B01110,
        B01110,
        B00100,
        B00101,
        B10110,
        B01100,
        B00100
      },
      {
        B00101,
        B10110,
        B01100,
        B00100,
        B00100,
        B01010,
        B11000,
        B01000

      }
    },
    {
      {
        B00000,
        B00000,
        B00000,
        B00000,
        B10000,
        B01000,
        B00000,
        B00000

      },
      {
        B10000,
        B01000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
      }
    }
  }

};

int print() {
  for (int i = 0; i < sizeof(milpa) / sizeof(milpa[0]); i++)
  {
    delay(frameDelay);
    byte chars = 0;
    for (int j = 0; j < sizeof(milpa[0]) / sizeof(milpa[0][0]); j++)
    {
      for (int k = 0; k < sizeof(milpa[0][0]) / sizeof(milpa[0][0][0]); k++)
      {
        byte X,Y;
        X =  1 + j;
        Y =  k;

        chars++;
        lcd.createChar(chars, milpa[i][j][k]);
        lcd.setCursor(X, Y);
        lcd.print(char(chars));

        /*if (chars == ((sizeof(milpa[0]) / sizeof(milpa[0][0])) * (sizeof(milpa[0][0]) / sizeof(milpa[0][0][0])))) {
          chars = 0;
        };*/

      }
    }
  }
  return 0;
}
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(LOW);
  lcd.begin(16, 2);
  lcd.clear();


  lcd.setCursor(5,0);
  lcd.print("CARGANDO");


}

void loop()
{
  // put your main code here, to run repeatedly:
  print();

}