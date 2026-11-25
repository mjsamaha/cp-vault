// A - ABC/ARC - https://atcoder.jp/contests/abc053/tasks/abc053_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int x;
  // if x is less than 1200, print ABC otherwise print ARC

  cin >> x;

  if (x < 1200) {
    cout << "ABC\n";
  } else {
    cout << "ARC\n";
  }

  return 0;
}