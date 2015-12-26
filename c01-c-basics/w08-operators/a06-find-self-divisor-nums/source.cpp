#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n < 10 || n >= 100) {
    return 0;
  }

  int tens, single;
  for (int num = 10; num <= n; num++) {
    tens = (int) num/10;
    single = num - tens*10;
    if (num % (tens+single) == 0) {
      cout << num << endl;
    }
  }

  return 0;
}
