#include <iostream>
using namespace std;

int main() {
  int a, num, sum = 0;
  for (int i = 0; i < 6; i++) {
    cin >> num;
    if (i == 0) {
      a = num;
    } else {
      if (num < a) {
        sum += num;
      }
    }
  }
  cout << sum << endl;
  return 0;
}
