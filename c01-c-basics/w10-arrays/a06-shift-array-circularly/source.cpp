#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int temp = array[0];
  for (int i = n; i--; ) {
    int from = m*i - n*(m*i/n);
    int to = m*(i+1) - n*(m*(i+1)/n);
    if (i == n-1) {
      to = 0;
    }
    if (i > 0) {
      array[to] = array[from];
    } else {
      array[to] = temp;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }

  cout << endl;

  return 0;
}
