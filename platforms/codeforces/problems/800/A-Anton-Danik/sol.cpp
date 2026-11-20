/**
Author: lobsterchops
*/
#include <bits/stdc++.h>
using namespace std;

void yes() { cout << "YES" << '\n'; }
void no() { cout << "NO" << '\n'; }

void solve() {
  int n;
  int act = 0;
  int dct = 0;

  cin >> n;

  string games;
  cin >> games;

  for (int i = 0; i < n; i++) {
    if (games[i] == 'D') {
      dct++;
    } else if (games[i] == 'A') {
      act++;
    }
  }

  if (act == dct) {
    cout << "Friendship";
  } else if (act > dct) {
    cout << "Anton";
  } else {
    cout << "Danik";
  }
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

  solve();

  return 0;
}
