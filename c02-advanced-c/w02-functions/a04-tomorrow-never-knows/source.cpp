#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int);
bool isEndOfMonth(int, int, int);
bool isEndOfYear(int, int, int);
int getLastDayOfMonth(int, int);

int main() {
  int yyyy, mm, dd;
  char dash;
  cin >> yyyy >> dash >> mm >> dash >> dd;

  if (isEndOfYear(yyyy, mm, dd)) {
    yyyy++;
    mm = 1;
    dd = 1;
  } else if (isEndOfMonth(yyyy, mm, dd)) {
    mm++;
    dd = 1;
  } else {
    dd++;
  }

  cout << yyyy
    << "-" << setfill('0') << setw(2) << mm
    << "-" << setfill('0') << setw(2) << dd
    << endl;

  return 0;
}

bool isLeapYear(int year) {
  return ((year%4 == 0 && year%100 != 0) || year%400 == 0);
}

bool isEndOfMonth(int year, int month, int day) {
  return (day >= getLastDayOfMonth(year, month));
}

bool isEndOfYear(int year, int month, int day) {
  return (month >= 12 && isEndOfMonth(year, month, day));
}

int getLastDayOfMonth(int year, int month) {
  int lastDay;
  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      lastDay = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      lastDay = 30;
      break;
    case 2:
      if (isLeapYear(year)) {
        lastDay = 29;
      } else {
        lastDay = 28;
      }
      break;
  }
  return lastDay;
}
