/**
Author: lobsterchops
*/
#include <bits/stdc++.h>
using namespace std;

void yes() { cout << "YES" << '\n'; }
void no() { cout << "NO" << '\n'; }

void solve() {

  int n;
  cin >> n;

  if (n > 2 && n % 2 == 0) {
    yes();
  } else {
    no();
  }
}

int main() {

  // fast I/O
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // test cases
  /** Test Cases ACTION
  int t; cin >> t; while (t--){

  }

  */

  solve();

  return 0;
}