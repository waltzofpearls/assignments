#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int distance;
  double bikingTime, walkingTime;
  string output = "";
  while (n--) {
    cin >> distance;
    bikingTime = distance / 3.0 + 27 + 23;
    walkingTime = distance / 1.2;

    if (bikingTime < walkingTime) {
      output += "Bike\n";
    } else if (bikingTime > walkingTime) {
      output += "Walk\n";
    } else {
      output += "All\n";
    }
  }

  cout << output;

  return 0;
}
