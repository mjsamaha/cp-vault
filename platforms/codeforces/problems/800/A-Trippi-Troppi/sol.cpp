/**
Author: lobsterchops
*/
#include <bits/stdc++.h>
using namespace std;

void yes() { cout << "YES" << '\n'; }
void no() { cout << "NO" << '\n'; }

void solve() {
  string a, b, c;

  cin >> a >> b >> c;

  cout << a[0] << b[0] << c[0] << '\n';
}

int main() {

  // fast I/O
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // test cases
  /** Test Cases ACTION
  int t; cin >> t; while (t--){
    solve();
  }

  */
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
