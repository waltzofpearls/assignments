#include <iostream>
using namespace std;

int main() {
  char s[80];
  cin.getline(s, 80);

  int vowels[5] = {0};
  for (int i = 0; i < 80; i++) {
    switch (s[i]) {
      case 'a': vowels[0] += 1; break;
      case 'e': vowels[1] += 1; break;
      case 'i': vowels[2] += 1; break;
      case 'o': vowels[3] += 1; break;
      case 'u': vowels[4] += 1; break;
    }
  }

  cout << vowels[0] << " " << vowels[1] << " "
    << vowels[2] << " " << vowels[3] << " "
    << vowels[4] << endl;

  return 0;
}
