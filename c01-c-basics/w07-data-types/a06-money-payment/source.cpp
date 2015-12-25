#include <iostream>
using namespace std;

int main() {
  int amt;
  cin >> amt;

  int b100s = 0;
  int b50s = 0;
  int b20s = 0;
  int b10s = 0;
  int b5s = 0;
  int b1s = 0;
  int remaining = 0;

  b100s = (int) amt / 100;
  remaining = amt - 100*b100s;

  b50s = (int) remaining / 50;
  remaining -= 50*b50s;

  b20s = (int) remaining / 20;
  remaining -= 20*b20s;

  b10s = (int) remaining / 10;
  remaining -= 10*b10s;

  b5s = (int) remaining / 5;
  remaining -= 5*b5s;

  b1s = (int) remaining / 1;
  remaining -= 1*b1s;

  cout << b100s << endl;
  cout << b50s << endl;
  cout << b20s << endl;
  cout << b10s << endl;
  cout << b5s << endl;
  cout << b1s << endl;
}
