#include <iostream>
#include <string>

using namespace std;

int main() {
  string str, substr;
  while (cin >> str >> substr) {
    int biggest = 0, index = 0;
    for (int i = 0; i < str.size(); i++) {
      if (str[i] > biggest) {
        biggest = str[i];
        index = i;
      }
    }

    cout << str.substr(0, index+1) << substr << str.substr(index+1) << endl;
  }

  return 0;
}
