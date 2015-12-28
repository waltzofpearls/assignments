#include <iostream>

using namespace std;

int main() {
  int L, M;
  cin >> L >> M;

  int trees[L+1];
  for (int i = 0; i <= L; i++) {
    trees[i] = 0;
  }

  while (M--) {
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
      trees[i] = 1;
    }
  }

  int treesLeft = L+1;
  for (int i = 0; i <= L; i++) {
    if (trees[i] == 1) {
      treesLeft--;
    }
  }

  cout << treesLeft << endl;

  return 0;
}
