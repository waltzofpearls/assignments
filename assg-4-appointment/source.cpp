#include <iostream>

using namespace std;

int main() {
  int weekday;

  cin >> weekday;

  if (weekday == 2 || weekday == 4 || weekday == 6 || weekday == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
