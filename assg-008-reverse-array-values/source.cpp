#include <iostream>

using namespace std;

int main() {
  int n;
  int i;
  int j;
  int tmp;
  int half;

  cin >> n;

  int data[n];

  for (i = 0; i < n; i++) {
    cin >> data[i];
  }

  half = (n % 2) ? (n - 1) / 2 : n / 2;

  for (i = 0; i < half; i++) {
    j = n - i - 1;

    tmp = data[j];
    data[j] = data[i];
    data[i] = tmp;
  }

  for (i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  return 0;
}
