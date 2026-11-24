// A. - CBC - https://atcoder.jp/contests/abc402/tasks/abc402_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  string s;
  cin >> s;

  string res;

  for (int i = 0; i < s.size(); i++) {
    // if the current index is uppercase > append to result
    if (isupper(s.at(i))) {
      res += s.at(i);
    }
  }
  cout << res << '\n';

  return 0;
}