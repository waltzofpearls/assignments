#include <iostream>

using namespace std;

int main() {
  int k;
  int data[100];
  int i;
  int one = 0;
  int five = 0;
  int ten = 0;

  cin >> k;
  if (k < 0) {
    k = 0;
  }
  if (k > 100) {
    k = 100;
  }
  for (i = 0; i < k; i++) {
    cin >> data[i];
  }

  for (i = 0; i < k; i++) {
    if (data[i] == 1) {
      one += 1;
    } else if (data[i] == 5) {
      five += 1;
    } else if (data[i] == 10) {
      ten += 1;
    }
  }

  cout << one << endl;
  cout << five << endl;
  cout << ten << endl;
}
