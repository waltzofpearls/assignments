#include <iostream>

using namespace std;

int main() {
  char s[500];
  cin.getline(s, 500);

  int longest = 0, count = 0;
  int start = 0, end = 0;
  for (int i = 0; i < 500; i++) {
    if (s[i] == ' ' || s[i] == '.') {
      if (count+1 > longest) {
        longest = count+1;
        start = i - count;
        end = i - 1;
      }
      count = 0;
      if (s[i] == '.') {
        break;
      }
    } else {
      count++;
    }
  }

  for (int i = start; i <= end; i++) {
    cout << s[i];
  }

  cout << endl;

  return 0;
}
