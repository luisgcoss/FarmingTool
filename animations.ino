/*
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

}
*/
