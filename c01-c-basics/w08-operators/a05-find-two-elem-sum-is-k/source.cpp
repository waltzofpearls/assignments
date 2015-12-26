#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int i, j, data[n];
  for (i = 0; i < n; i++) {
    cin >> data[i];
  }

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (data[i] + data[j] == k) {
        cout << "yes" << endl;
        return 0;
      }
    }
  }

  cout << "no" << endl;

  return 0;
}
