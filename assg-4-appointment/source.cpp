#include <iostream>

using namespace std;

int main() {
  int weekday;

  cin >> weekday;

  if (weekday == 2 || weekday == 4 || weekday == 6) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
