#include <iostream>

using namespace std;

int reverse(char[500], int);

int main() {
  char s[500];
  cin.getline(s, 500);

  int i = 0;
  while (s[i] != '\0') {
    if (s[i] == ' ') {
      cout << " ";
      i++;
    } else {
      i = reverse(s, i);
    }
  }
  cout << endl;

  return 0;
}

int reverse(char s[500], int pos) {
  if (s[pos] == '\0' || s[pos] == ' ') {
    return pos;
  } else {
    int newPos = reverse(s, pos+1);
    cout << s[pos];
    return newPos;
  }
}
