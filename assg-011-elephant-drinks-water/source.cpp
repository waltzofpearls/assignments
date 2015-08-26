#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int h;
  int r;
  float pi = 3.14;
  double volume;

  cin >> h >> r;

  volume = (pi * pow(r, 2) * h) / 1000;

  cout << ceil(20 / volume) << endl;

  return 0;
}
