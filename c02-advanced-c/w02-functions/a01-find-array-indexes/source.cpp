#include <iostream>

using namespace std;

void findArrayIndex(int, int[]);

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  findArrayIndex(n, arr);

  return 0;
}

void findArrayIndex(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    if (i == arr[i]) {
      cout << arr[i] << endl;
      return;
    }
  }

  cout << 'N' << endl;
}
