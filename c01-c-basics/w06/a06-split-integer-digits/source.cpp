#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int number;
  int ones;
  int tens;
  int hundreds;

  cin >> number;

  hundreds = floor(number / 100);
  tens = floor((number % 100) / 10);
  ones = number - 100 * hundreds - 10 * tens;

  cout << hundreds << endl;
  cout << tens << endl;
  cout << ones << endl;

  return 0;
}
