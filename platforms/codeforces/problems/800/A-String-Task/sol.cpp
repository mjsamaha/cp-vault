#include <bits/stdc++.h>

using namespace std;

int main() {

  // read input string
  string s;
  cin >> s;

  // delete all vowels, insert a '.' before each consonant, replace all
  // uppercase letters with lowercase
  string res;
  for (char c : s) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' &&
        c != 'E' && c != 'I' && c != 'O' && c != 'U') {
      res += '.';
      res += tolower(c);
    }
  }
  cout << res << '\n';

  return 0;
}