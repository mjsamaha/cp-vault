// Author: lobsterchops
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

constexpr int INF = 1e9;
constexpr ll LINF = 4e18;

void solve() {
  string s;
  cin >> s;

  // 'o' and '.'
  // sort string
  // iterate over string, count how many times a 'o' appear and '.' appear,
  // if number of 'o' is even, print --> even x % 2 == 0 --> otherwise print odd
  sort(s.begin(), s.end());

  int oct = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'o') {
      oct++;
    }
  }

  if (oct % 2 == 0) {
    cout << "even" << '\n';
  } else {
    cout << "odd" << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // int t; cin >> t; while (t--)

  solve();
}