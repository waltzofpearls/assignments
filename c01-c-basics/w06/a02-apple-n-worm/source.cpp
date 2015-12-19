#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  int x;
  int y;
  int result;

  cin >> n >> x >> y;

  result = n - ceil((float)y / (float)x);

  if (result < 0) {
    result = 0;
  }

  cout << result << endl;

  return 0;
}
