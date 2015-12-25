#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sample = 0;
  int range1n18 = 0;
  int range19n35 = 0;
  int range36n60 = 0;
  int range60n = 0;

  double percentage1n18;
  double percentage19n35;
  double percentage36n60;
  double percentage60n;

  int age;
  while (n--) {
    cin >> age;
    if (age >= 1 && age <= 18) {
      range1n18++;
      sample++;
    } else if (age >= 19 && age <= 35) {
      range19n35++;
      sample++;
    } else if (age >= 36 && age <= 60) {
      range36n60++;
      sample++;
    } else if (age > 60) {
      range60n++;
      sample++;
    }
  }

  percentage1n18 = (double)range1n18 / (double)sample * 100.0;
  percentage19n35 = (double)range19n35 / (double)sample * 100.0;
  percentage36n60 = (double)range36n60 / (double)sample * 100.0;
  percentage60n = (double)range60n / (double)sample * 100.0;

  cout << "1-18: " << fixed << setprecision(2) << percentage1n18 << "%" << endl;
  cout << "19-35: " << fixed << setprecision(2) << percentage19n35 << "%" << endl;
  cout << "36-60: " << fixed << setprecision(2) << percentage36n60 << "%" << endl;
  cout << "60-: " << fixed << setprecision(2) << percentage60n << "%" << endl;
}
