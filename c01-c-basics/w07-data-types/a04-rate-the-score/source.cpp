#include <iostream>
using namespace std;

int main() {
  int score;
  int level;
  cin >> score;
  if (score >= 95 && score <= 100) {
    level = 1;
  } else if (score >= 90 && score < 95) {
    level = 2;
  } else if (score >= 85 && score < 90) {
    level = 3;
  } else if (score >= 80 && score < 85) {
    level = 4;
  } else if (score >= 70 && score < 80) {
    level = 5;
  } else if (score >= 60 && score < 70) {
    level = 6;
  } else if (score >= 0 && score < 60) {
    level = 7;
  }

  cout << level << endl;
}
