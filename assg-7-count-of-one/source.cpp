#include <iostream>
#include <bitset>
#include <climits>

using namespace std;

size_t popcount(size_t n) {
  bitset<sizeof(size_t) * CHAR_BIT> b(n);
  return b.count();
}

int main() {
  int n;

  cin >> n;

  int data[n];

  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }

  for (int i = 0; i < n; i++) {
    cout << popcount(data[i]) << endl;
  }

  return 0;
}
