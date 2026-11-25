// A - One out of Three - https://atcoder.jp/contests/abc075/tasks/abc075_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int n = 3;
  vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  /**
  Iterate over the sorted array, and keep track of each index
  - init a unique value
  - if current value is unique, assign it
  - if
   */

  sort(vec.begin(), vec.end());

  if (vec[0] == vec[1]) {
    cout << vec[2];
  } else if (vec[0] == vec[2]) {
    cout << vec[1];
  } else {
    cout << vec[0];
  }

  return 0;
}