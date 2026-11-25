// A - Restricted - https://atcoder.jp/contests/abc063/tasks/abc063_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int res = a + b;

  if (res >= 10) {
    cout << "error\n";
  } else {
    cout << res << "\n";
  }

  return 0;
}