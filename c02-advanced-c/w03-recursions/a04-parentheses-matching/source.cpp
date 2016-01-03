#include <iostream>

using namespace std;

int verify(char[], int, int);

int main() {
  char str[100][101];
  int i = 0;
  while (cin.getline(str[i], 101) && str[i][0] != '\0') {
    cout << str[i] << endl;
    int pos = 0;
    while (str[i][pos] != '\0') {
      pos = verify(str[i], pos, pos);
      if (pos == -1) {
        break;
      } else {
        switch (str[i][pos]) {
          case '(':
            str[i][pos] = '$';
            break;
          case ')':
            str[i][pos] = '?';
            break;
          default:
            str[i][pos] = ' ';
        }
        pos++;
      }
    }
    cout << str[i] << endl;
    i++;
  }
  return 0;
}

int verify(char str[], int startPos, int curPos) {
  if (startPos == curPos && str[curPos] == ')') {
    str[curPos] = '?';
    return verify(str, startPos, curPos+1);
  } else if (str[curPos] == '(') {
    str[curPos] = '$';
    int nextPos, i = 1;
    while (true) {
      nextPos = verify(str, startPos, curPos+i);
      if (str[nextPos] == ')') {
        str[curPos] = ' ';
        str[nextPos] = ' ';
        break;
      } else if (str[nextPos] == '\0') {
        return -1;
      } else {
        str[nextPos] = ' ';
      }
      i++;
    }
    return verify(str, startPos, nextPos+1);
  } else {
    return curPos;
  }
}
