#include <iostream>

using namespace std;

int main() {
  int m;
  int n;
  int i = 0;
  int sum = 0;

  cin >> m >> n;

  if (m < 0) {
    m = 0;
  }

  if (n > 300) {
    n = 300;
  }

  if (m > n) {
    m = n;
  }

  for (i = m; i <= n; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}
