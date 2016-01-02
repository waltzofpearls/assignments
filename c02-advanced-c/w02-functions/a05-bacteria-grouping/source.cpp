#include <iostream>
#include <iomanip>

using namespace std;

void sort(double[100][2], int);
int findDividPoint(double[100][2], int);

int main() {
  int n;
  cin >> n;

  double rates[n][2];
  for (int i = 0; i < n; i++) {
    int label;
    double before, after;
    cin >> label >> before >> after;
    rates[i][0] = label;
    rates[i][1] = after / before;
  }

  sort(rates, n);
  int dividPoint = findDividPoint(rates, n);

  cout << (n-dividPoint) << endl;
  for (int i = dividPoint; i < n; i++) {
    cout << rates[i][0] << endl;
  }
  cout << dividPoint << endl;
  for (int i = 0; i < dividPoint; i++) {
    cout << rates[i][0] << endl;
  }

  return 0;
}

void sort(double arr[100][2], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 1; j < n-i; j++) {
      if (arr[j-1][1] > arr[j][1]) {
        int label = arr[j][0];
        double rate = arr[j][1];
        arr[j][0] = arr[j-1][0];
        arr[j][1] = arr[j-1][1];
        arr[j-1][0] = label;
        arr[j-1][1] = rate;
      }
    }
  }
}

int findDividPoint(double arr[100][2], int n) {
  int dividPoint;
  double gap = 0.0;
  for (int i = 1; i < n; i++) {
    if (arr[i][1]-arr[i-1][1] >= gap) {
      gap = arr[i][1]-arr[i-1][1];
      dividPoint = i;
    }
  }
  return dividPoint;
}
