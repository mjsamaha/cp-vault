// A - K-City - https://atcoder.jp/contests/abc069/tasks/abc069_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  // 3 - -
  // 4 | | | |
  /**

  input has to be greater than 2

  if number is x (--1)
  if number is x (--1)
  (m - 1 ) * (n - 1)
  2 * 3 = 6
  */
  int m, n;
  cin >> m >> n;

  int res = (m - 1) * (n - 1);
  cout << res << "\n";

  return 0;
}