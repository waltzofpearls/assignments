#include <iostream>
using namespace std;

int main() {
  double N, K, M;
  double saving, propPrice;
  bool isPossible;
  while (cin >> N >> K) {
    saving = 0.0;
    propPrice = 200.0;
    isPossible = false;

    for (int i = 1; i <= 20; i++) {
      saving += N;
      if (saving >= propPrice) {
        isPossible = true;
        M = i;
        break;
      }
      propPrice += propPrice * K / 100.0;
    }

    if (isPossible) {
      cout << M << endl;
    } else {
      cout << "Impossible" << endl;
    }
  }

  return 0;
}
