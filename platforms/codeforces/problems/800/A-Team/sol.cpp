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

  int count = 0;

  for (int i = 0; i < n; i++) {
    int p, v, t;
    cin >> p >> v >> t;
    if (p + v + t >= 2) {
      count++;
    }
  }
  cout << count << '\n';
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