#include <iostream>

using namespace std;

void calc(int);

int main() {
  int num;
  cin >> num;
  calc(num);
  return 0;
}

void calc(int num) {
  if (num == 1) {
    cout << "End" << endl;
  } else {
    int result;
    if (num%2 == 0) {
      result = num/2;
      cout << num << "/2=" << result << endl;
    } else {
      result = num*3 + 1;
      cout << num << "*3+1=" << result << endl;
    }
    calc(result);
  }
}
