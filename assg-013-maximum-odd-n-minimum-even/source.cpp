#include <iostream>

using namespace std;

int main() {
  int n = 6;
  int i = 0;
  int numbers[n];
  int maxOdd = 1;
  int minEven = 100;

  for (i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  for (i = 0; i < n; i++) {
    if (numbers[i] % 2 == 0) {
      // even
      if (numbers[i] <= minEven) {
        minEven = numbers[i];
      }
    } else {
      // odd
      if (numbers[i] >= maxOdd) {
        maxOdd = numbers[i];
      }
    }
  }

  cout << abs(maxOdd - minEven) << endl;

  return 0;
}
