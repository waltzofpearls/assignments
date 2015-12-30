#include <iostream>

using namespace std;

int main() {
  int num;
  while (cin >> num) {
    int divisible = false;
    if (num%3 == 0) {
      divisible = true;
      cout << "3 ";
    }
    if (num%5 == 0) {
      divisible = true;
      cout << "5 ";
    }
    if (num%7 == 0) {
      divisible = true;
      cout << "7";
    }

    if (!divisible) {
      cout << "n";
    }

    cout << endl;
  }

  return 0;
}
