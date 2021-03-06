#define MAX_PATTERN 22
typedef uint8_t Pattern[10][10];

static const Pattern patterns[] PROGMEM = {
  { // 0 зигзаг ********
    {3, 3, 3, 3, 3, 4, 4, 4, 4, 4},
    {4, 3, 3, 3, 3, 3, 4, 4, 4, 4},
    {4, 4, 3, 3, 3, 3, 3, 4, 4, 4},
    {4, 4, 4, 3, 3, 3, 3, 3, 4, 4},
    {4, 4, 4, 4, 3, 3, 3, 3, 3, 4},
    {4, 4, 4, 4, 4, 3, 3, 3, 3, 3},
    {4, 4, 4, 4, 3, 3, 3, 3, 3, 4},
    {4, 4, 4, 3, 3, 3, 3, 3, 4, 4},
    {4, 4, 3, 3, 3, 3, 3, 4, 4, 4},
    {4, 3, 3, 3, 3, 3, 4, 4, 4, 4},
  },
  { // 1 ноты ********* белые на цветном фоне
    {3, 3, 3, 3, 3, 2, 2, 2, 3, 3},
    {3, 3, 3, 3, 3, 2, 3, 3, 2, 3},
    {3, 3, 3, 3, 3, 2, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 2, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 2, 3, 3, 3, 3},
    {3, 3, 2, 2, 2, 2, 3, 3, 3, 3},
    {3, 2, 2, 2, 2, 2, 3, 3, 3, 3},
    {3, 3, 2, 2, 2, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 2, 3, 3, 3, 3},
  },
  { // 3 Маска ********
    {3, 3, 3, 3, 2, 2, 3, 3, 3, 3},
    {3, 2, 2, 3, 3, 3, 3, 2, 2, 3},
    {3, 2, 3, 3, 2, 2, 3, 3, 2, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {2, 3, 2, 3, 2, 2, 3, 2, 3, 2},
    {2, 3, 2, 3, 2, 2, 3, 2, 3, 2},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 2, 3, 3, 2, 2, 3, 3, 2, 3},
    {3, 2, 2, 3, 3, 3, 3, 2, 2, 3},
    {3, 3, 3, 3, 2, 2, 3, 3, 3, 3},
  },
  { // 4 клеточка *********
    {3, 3, 3, 4, 4, 4, 4, 4, 4, 3},
    {3, 3, 3, 3, 4, 4, 4, 4, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 3, 3, 3},
    {4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {4, 4, 4, 3, 3, 3, 3, 3, 3, 4},
    {4, 4, 4, 4, 3, 3, 3, 3, 4, 4},
    {4, 4, 4, 3, 3, 3, 3, 3, 3, 4},
    {4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 3, 3, 3},
    {3, 3, 3, 3, 4, 4, 4, 4, 3, 3},
  },
  { // 3 ********** зигзаг
    {3, 0, 4, 4, 4, 4, 4, 0, 3, 3},
    {3, 3, 0, 4, 4, 4, 0, 3, 3, 3},
    {3, 3, 3, 0, 4, 0, 3, 3, 3, 3},
    {3, 3, 3, 3, 0, 3, 3, 3, 3, 0},
    {0, 3, 3, 3, 3, 3, 3, 3, 0, 4},
    {4, 0, 3, 3, 3, 3, 3, 0, 4, 4},
    {4, 4, 0, 3, 3, 3, 0, 4, 4, 4},
    {4, 4, 4, 0, 3, 0, 4, 4, 4, 4},
    {4, 4, 4, 4, 0, 4, 4, 4, 4, 0},
    {0, 4, 4, 4, 4, 4, 4, 4, 0, 3},
  },
  { // 4 ********* полосы
    {3, 3, 3, 3, 3, 3, 4, 4, 4, 4},
    {4, 3, 3, 3, 3, 3, 3, 4, 4, 4},
    {4, 4, 3, 3, 3, 3, 3, 3, 4, 4},
    {4, 4, 4, 3, 3, 3, 3, 3, 3, 4},
    {4, 4, 4, 4, 3, 3, 3, 3, 3, 3},
    {3, 4, 4, 4, 4, 3, 3, 3, 3, 3},
    {3, 3, 4, 4, 4, 4, 3, 3, 3, 3},
    {3, 3, 3, 4, 4, 4, 4, 3, 3, 3},
    {3, 3, 3, 3, 4, 4, 4, 4, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 4, 4, 3},
  },
  { // 8  ******** Вышиванка
    {1, 2, 2, 2, 0, 0, 2, 2, 2, 1},
    {2, 1, 1, 0, 2, 2, 0, 1, 1, 2},
    {2, 2, 0, 1, 2, 2, 1, 0, 2, 2},
    {2, 0, 2, 1, 2, 2, 1, 2, 0, 2},
    {0, 2, 2, 2, 1, 1, 2, 2, 2, 0},
    {0, 2, 2, 2, 1, 1, 2, 2, 2, 0},
    {2, 0, 2, 1, 2, 2, 1, 2, 0, 2},
    {2, 2, 0, 1, 2, 2, 1, 0, 2, 2},
    {2, 1, 1, 0, 2, 2, 0, 1, 1, 2},
    {1, 2, 2, 2, 0, 0, 2, 2, 2, 1},
  },
  { // 9 ********* плетёнка
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 3},
    {4, 4, 4, 4, 4, 4, 4, 4, 3, 4},
    {4, 4, 4, 4, 4, 4, 4, 3, 3, 3},
    {3, 4, 4, 4, 4, 4, 3, 3, 3, 3},
    {3, 3, 4, 4, 4, 3, 4, 3, 3, 3},
    {3, 3, 3, 4, 3, 4, 4, 4, 3, 3},
    {3, 3, 3, 3, 4, 4, 4, 4, 4, 3},
    {3, 3, 3, 4, 4, 4, 4, 4, 4, 4},
    {4, 3, 4, 4, 4, 4, 4, 4, 4, 4},
    {3, 4, 4, 4, 4, 4, 4, 4, 4, 4},
  },
  { //10 Ромбы ********
    {0, 3, 3, 3, 3, 3, 3, 3, 3, 0},
    {4, 0, 3, 3, 3, 3, 3, 3, 0, 4},
    {4, 4, 0, 3, 3, 3, 3, 0, 4, 4},
    {4, 4, 4, 0, 3, 3, 0, 4, 4, 4},
    {4, 4, 4, 4, 0, 0, 4, 4, 4, 4},
    {4, 4, 4, 4, 0, 0, 4, 4, 4, 4},
    {4, 4, 4, 0, 3, 3, 0, 4, 4, 4},
    {4, 4, 0, 3, 3, 3, 3, 0, 4, 4},
    {4, 0, 3, 3, 3, 3, 3, 3, 0, 4},
    {0, 3, 3, 3, 3, 3, 3, 3, 3, 0},
  },
  { //11 Dont Know ********
    {3, 3, 3, 3, 3, 2, 2, 2, 2, 2},
    {3, 2, 2, 2, 3, 2, 4, 4, 4, 2},
    {3, 2, 3, 2, 3, 2, 4, 2, 4, 2},
    {3, 2, 2, 2, 3, 2, 4, 4, 4, 2},
    {3, 3, 3, 3, 3, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 3, 3, 3, 3, 3},
    {2, 4, 4, 4, 2, 3, 2, 2, 2, 3},
    {2, 4, 2, 4, 2, 3, 2, 3, 2, 3},
    {2, 4, 4, 4, 2, 3, 2, 2, 2, 3},
    {2, 2, 2, 2, 2, 3, 3, 3, 3, 3},
  },
  { // 13 Круги ********
    {3, 3, 3, 2, 2, 2, 2, 3, 3, 3},
    {3, 3, 2, 3, 3, 3, 3, 2, 3, 3},
    {3, 2, 3, 3, 0, 0, 3, 3, 2, 3},
    {2, 3, 3, 0, 3, 3, 0, 3, 3, 2},
    {2, 3, 0, 3, 4, 4, 3, 0, 3, 2},
    {2, 3, 0, 3, 4, 4, 3, 0, 3, 2},
    {2, 3, 3, 0, 3, 3, 0, 3, 3, 2},
    {3, 2, 3, 3, 0, 0, 3, 3, 2, 3},
    {3, 3, 2, 3, 3, 3, 3, 2, 3, 3},
    {3, 3, 3, 2, 2, 2, 2, 3, 3, 3},
  },
  { // 14 Маска ********
    {4, 4, 4, 4, 4, 4, 4, 4, 3, 4},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 4},
    {4, 3, 4, 4, 4, 4, 3, 4, 3, 4},
    {4, 3, 3, 3, 3, 3, 3, 4, 3, 4},
    {4, 3, 4, 3, 4, 4, 3, 4, 3, 4},
    {4, 3, 4, 3, 4, 4, 3, 4, 3, 4},
    {4, 3, 4, 3, 3, 3, 3, 3, 3, 4},
    {4, 3, 4, 3, 4, 4, 4, 4, 3, 4},
    {4, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {4, 3, 4, 4, 4, 4, 4, 4, 4, 4},
  },
  { // 12 Маска4 ********
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 4, 3, 3, 4, 3, 3, 3},
    {4, 3, 3, 3, 3, 3, 3, 3, 3, 4},
    {4, 3, 3, 3, 3, 3, 3, 3, 3, 4},
    {3, 3, 3, 4, 3, 3, 4, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
  },
  { // 13 Маска3 ********
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 4, 4, 3, 4, 4, 3, 4, 4, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 4, 4, 3, 4, 4, 3, 4, 4, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
  },
  { // 14 Маска 9********
    {3, 0, 0, 3, 0, 0, 3, 0, 0, 3},
    {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
    {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
    {3, 0, 0, 3, 0, 0, 3, 0, 0, 3},
    {0, 3, 3, 0, 0, 0, 0, 3, 3, 0},
    {0, 3, 3, 0, 0, 0, 0, 3, 3, 0},
    {3, 0, 0, 3, 0, 0, 3, 0, 0, 3},
    {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
    {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
    {3, 0, 0, 3, 0, 0, 3, 0, 0, 3},
  },
  { // 18 Маска 10********
    {0, 4, 4, 0, 0, 0, 0, 4, 4, 0},
    {4, 4, 4, 0, 4, 4, 0, 4, 4, 4},
    {4, 4, 4, 0, 4, 4, 0, 4, 4, 4},
    {0, 0, 0, 4, 4, 4, 4, 0, 0, 0},
    {0, 4, 4, 4, 0, 0, 4, 4, 4, 0},
    {0, 4, 4, 4, 0, 0, 4, 4, 4, 0},
    {0, 0, 0, 4, 4, 4, 4, 0, 0, 0},
    {4, 4, 4, 0, 4, 4, 0, 4, 4, 4},
    {4, 4, 4, 0, 4, 4, 0, 4, 4, 4},
    {0, 4, 4, 0, 0, 0, 0, 4, 4, 0},
  },
  { // 19 Маска 11********
    {4, 4, 4, 3, 3, 3, 3, 4, 4, 4},
    {4, 3, 3, 3, 3, 3, 3, 3, 3, 4},
    {4, 3, 4, 4, 3, 3, 4, 4, 3, 4},
    {3, 3, 4, 4, 4, 4, 4, 4, 3, 3},
    {3, 3, 3, 4, 3, 3, 4, 3, 3, 3},
    {3, 3, 3, 4, 3, 3, 4, 3, 3, 3},
    {3, 3, 4, 4, 4, 4, 4, 4, 3, 3},
    {4, 3, 4, 4, 3, 3, 4, 4, 3, 4},
    {4, 3, 3, 3, 3, 3, 3, 3, 3, 4},
    {4, 4, 4, 3, 3, 3, 3, 4, 4, 4},
  },
  { // 20 Маска 13********
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
  },
  { // 21 Маска 14********
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
    {4, 3, 3, 3, 4, 4, 3, 3, 3, 4},
    {3, 3, 4, 3, 4, 4, 3, 4, 3, 3},
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
    {4, 4, 4, 4, 3, 3, 4, 4, 4, 4},
    {4, 4, 4, 4, 3, 3, 4, 4, 4, 4},
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
    {3, 3, 4, 3, 4, 4, 3, 4, 3, 3},
    {4, 3, 3, 3, 4, 4, 3, 3, 3, 4},
    {4, 4, 3, 3, 4, 4, 3, 3, 4, 4},
  },
  { // 22 Маска 12********
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 3, 4, 3, 3, 3, 3, 4, 3, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 3, 4, 3, 3, 3, 3, 4, 3, 4},
    {4, 3, 4, 3, 4, 4, 3, 4, 3, 4},
    {4, 3, 4, 3, 4, 4, 3, 4, 3, 4},
    {4, 3, 4, 3, 3, 3, 3, 4, 3, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 3, 4, 3, 3, 3, 3, 4, 3, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
  },
  { // 23 Маска 13********
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {4, 3, 4, 4, 4, 4, 4, 4, 3, 4},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 4, 3, 4, 4, 4, 4, 3, 4, 3},
    {3, 4, 3, 4, 3, 3, 4, 3, 4, 3},
    {3, 4, 3, 4, 3, 3, 4, 3, 4, 3},
    {3, 4, 3, 4, 4, 4, 4, 3, 4, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {4, 3, 4, 4, 4, 4, 4, 4, 3, 4},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
  },
  { // 24 Маска 18********
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {3, 3, 4, 3, 3, 3, 3, 4, 3, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
    {3, 3, 3, 3, 4, 4, 3, 3, 3, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
    {3, 3, 4, 3, 3, 3, 3, 4, 3, 3},
    {3, 4, 3, 3, 3, 3, 3, 3, 4, 3},
    {4, 3, 3, 4, 3, 3, 4, 3, 3, 4},
  },
};
