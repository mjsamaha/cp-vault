#include <bits/stdc++.h>

using namespace std;

int main() {

  // syllables in 5, 7, and 5 in this order
  // [1: (5)] [2: (7)] [3: (5)]
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end());

  if (v[0] == 5 && v[1] == 5 && v[2] == 7) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}