// A. Shuffed Equation - https://atcoder.jp/contests/abc392/tasks/abc392_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  // if any of the two nums, when product equals the other
  if (a * b == c || b * c == a || a * c == b) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }

  return 0;
}