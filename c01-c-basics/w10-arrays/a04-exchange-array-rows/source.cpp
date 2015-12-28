#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int matrix[5][5] = {0};
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
    }
  }

  int n, m;
  cin >> n >> m;

  if (n < 0 || n > 4 || m < 0 || m > 4) {
    cout << "error" << endl;
    return 0;
  }

  int temp;
  for (int i = 0; i < 5; i++) {
    temp = matrix[n][i];
    matrix[n][i] = matrix[m][i];
    matrix[m][i] = temp;
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << setw(4) << matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}
