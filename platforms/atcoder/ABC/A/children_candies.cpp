// A - Children and Candies - https://atcoder.jp/contests/abc051/tasks/abc051_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;

  // N children at party
  // one candy in the first, 2 candy in the second, and so on...
  // n * (n + 1) / 2 candies in total
  cout << n * (n + 1) / 2 << endl;

  return 0;
}
