#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt( pow(x1-x2, 2.0) + pow(y1-y2, 2.0) );
}

int main() {
  int n;
  cin >> n;

  double points[n][2];
  for (int i = 0; i < n; i++) {
    // x, y
    cin >> points[i][0] >> points[i][1];
  }

  double dis, max = 0.0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 1; j < n; j++) {
      dis = distance(points[i][0], points[i][1], points[j][0], points[j][1]);
      if (dis >= max) {
        max = dis;
      }
    }
  }

  cout << fixed << setprecision(4) << max << endl;

  return 0;
}
