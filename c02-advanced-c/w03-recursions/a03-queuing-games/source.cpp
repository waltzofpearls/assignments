#include <iostream>

using namespace std;

int findPairs(char[], char, char, int);

int main() {
  char str[101];
  cin.getline(str, 101);

  int i = 0;
  char c, boy, girl;
  while ((c = str[i]) != '\0') {
    if (i == 0) {
      boy = c;
    } else if (c != boy) {
      girl = c;
    }
    i++;
  }

  findPairs(str, boy, girl, 0);

  return 0;
}

int findPairs(char str[], char boy, char girl, int pos) {
  if (str[pos] == boy) { // think as if boy is a '('
    // find one level deeper
    int nextPos = findPair(str, boy, girl, pos+1);
    if (str[nextPos] == girl) { // and think as if girl is a ')'
      // the next char is the matching pair
      // print the pair
      cout << pos << " " << nextPos << endl;
      // and keep searching for the next pair
      // on the same level
      return findPair(str, boy, girl, nextPos+1);
    } else {
      // it should never come here, as there are always the same
      // num of pairs
      return nextPos;
    }
  } else {
    // find a potential pair, but not sure if this one is
    // on the same level
    return pos;
  }
}
