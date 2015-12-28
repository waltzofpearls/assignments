#include <iostream>
#include <ctype.h>
using namespace std;

char strcmp(char *s1, char *s2) {
  int i = 0;
  char result;
  while (s1[i] != '\0' && (tolower(s1[i]) == tolower(s2[i]))) {
    i++;
  }
  if (tolower(s1[i]) > tolower(s2[i])) {
    result = '>';
  } else if (tolower(s1[i]) < tolower(s2[i])) {
    result = '<';
  } else {
    result = '=';
  }
  return result;
}

int main() {
  char s1[80], s2[80];
  cin.getline(s1, 80);
  cin.getline(s2, 80);
  cout << strcmp(s1, s2) << endl;
  return 0;
}
