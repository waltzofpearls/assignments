#include <iostream>
#include <iomanip>

using namespace std;

int getIdIndex(int);
int getTypeIndex(char);
void addToTotals(int, char, float, float[2][3]);

int main() {
  int s = 3;
  int id, n;
  char type;
  float amount;

  float totals[2][3] = {
    {0.0, 0.0, 0.0},
    {0.0, 0.0, 0.0}
  };

  while (s--) {
    cin >> id >> n;
    while (n--) {
      cin >> type >> amount;
      addToTotals(id, type, amount, totals);
    }
  }

  cout << "1 " << fixed << setprecision(2) << totals[0][0] << endl;
  cout << "2 " << fixed << setprecision(2) << totals[0][1] << endl;
  cout << "3 " << fixed << setprecision(2) << totals[0][2] << endl;
  cout << "A " << fixed << setprecision(2) << totals[1][0] << endl;
  cout << "B " << fixed << setprecision(2) << totals[1][1] << endl;
  cout << "C " << fixed << setprecision(2) << totals[1][2] << endl;

  return 0;
}

int getIdIndex(int id) {
  return id-1;
}

int getTypeIndex(char type) {
  switch (type) {
    case 'A': return 0;
    case 'B': return 1;
    case 'C': return 2;
    default: return 0;
  }
}

void addToTotals(int id, char type, float amount, float totals[2][3]) {
  totals[0][getIdIndex(id)] += amount;
  totals[1][getTypeIndex(type)] += amount;
}
