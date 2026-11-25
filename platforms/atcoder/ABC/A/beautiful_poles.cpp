// A - https://atcoder.jp/contests/abc058/tasks/abc058_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  // int res = b - a
  // if c - b = res --> "YES"

  int res = b - a;
  if (c - b == res) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}