#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int cells[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> cells[i][j];
    }
  }

  int cell, up, right, down, left;
  int count = 0;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      cell = cells[i][j];
      up = cells[i-1][j];
      right = cells[i][j+1];
      down = cells[i+1][j];
      left = cells[i][j-1];
      if (up - cell >= 50 &&
          right - cell >= 50 &&
          down - cell >= 50 &&
          left - cell >= 50
      ) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
