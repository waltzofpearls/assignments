#include <iostream>

using namespace std;

int main() {
  int p1, p2;
  char op;
  cin >> p1 >> p2 >> op;

  switch (op) {
    case '+': cout << (p1+p2); break;
    case '-': cout << (p1-p2); break;
    case '*': cout << (p1*p2); break;
    case '/':
      if (p2 == 0) {
        cout << "Divided by zero!";
      } else {
        cout << (p1/p2);
      }
      break;
    default: cout << "Invalid operator!";
  }

  cout << endl;

  return 0;
}
