#include <iostream>

using namespace std;

void spread(char[100][100], int);
int count(char[100][100], int);

int main() {
  int n;
  cin >> n;

  char rooms[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> rooms[i][j];
    }
  }

  int m;
  cin >> m;

  for (int i = 0; i < m-1; i++) {
    spread(rooms, n);
  }

  cout << count(rooms, n) << endl;

  return 0;
}

void spread(char rooms[100][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      switch (rooms[i][j]) {
        case '.':
        case '#':
          continue;
        case '@':
          // left
          if (i > 0 && rooms[i-1][j] == '.') {
            rooms[i-1][j] = '@';
          }
          // top
          if (j > 0 && rooms[i][j-1] == '.') {
            rooms[i][j-1] = '@';
          }
          // right
          if (i < n-1 && rooms[i+1][j] == '.') {
            rooms[i+1][j] = 'x';
          }
          // bottom
          if (j < n-1 && rooms[i][j+1] == '.') {
            rooms[i][j+1] = 'x';
          }
        case 'x':
          rooms[i][j] = '@';
          break;
      }
    }
  }
}

int count(char rooms[100][100], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (rooms[i][j] == '@') {
        count++;
      }
    }
  }
  return count;
}
