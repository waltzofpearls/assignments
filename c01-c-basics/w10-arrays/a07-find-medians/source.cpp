#include <iostream>

using namespace std;

int select(int *list, int n, int k) {
  for (int i = 0; i < k; i++) {
    int minIndex = i;
    int minValue = list[i];
    for (int j = i+1; j < n; j++) {
      if (list[j] < minValue) {
        minIndex = j;
        minValue = list[j];
        int temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
      }
    }
  }
  return list[k-1];
}

int main() {
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    int data[n];
    for (int i = 0; i < n; i++) {
      cin >> data[i];
    }

    int median1 = select(data, n, n/2 + 1);
    int median2 = select(data, n, n/2);

    if (n%2 == 0) {
      cout << ((median1+median2) / 2) << endl;
    } else {
      cout << median1 << endl;
    }
  }

  return 0;
}
