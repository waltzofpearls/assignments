#include <iostream>

using namespace std;

int main() {
  int boYangHu, dongTingHu, taiHu, hongZeHu;

  for (boYangHu = 1; boYangHu <= 4; boYangHu++) {
    for (dongTingHu = 1; dongTingHu <= 4; dongTingHu++) {
      if (dongTingHu == boYangHu) {
        continue;
      }
      for (taiHu = 1; taiHu <= 4; taiHu++) {
        if (taiHu == boYangHu || taiHu == dongTingHu) {
          continue;
        }
        hongZeHu = 10 - boYangHu - dongTingHu - taiHu;
        if ((dongTingHu == 1) + (hongZeHu == 4) + (boYangHu == 3) == 1 &&
            (hongZeHu == 1) + (dongTingHu == 4) + (boYangHu == 2) + (taiHu == 3) == 1 &&
            (hongZeHu == 4) + (dongTingHu == 3) == 1 &&
            (boYangHu == 1) + (taiHu == 4) + (hongZeHu == 2) + (dongTingHu == 3) == 1
          ) {
          cout << boYangHu << endl
            << dongTingHu << endl
            << taiHu << endl
            << hongZeHu << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}
