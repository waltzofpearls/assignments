#include <iostream>

using namespace std;

int main() {
  int n;
  int i = 0;
  int maximum = 0;

  cin >> n;

  int scores[n];

  for (i = 0; i < n; i++) {
    cin >> scores[i];
  }

  for (i = 0; i < n; i++) {
    if (scores[i] > maximum) {
      maximum = scores[i];
    }
  }

  cout << maximum << endl;

  return 0;
}
