// A - https://atcoder.jp/contests/abc046/tasks/abc046_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  // a = color bought two days ago
  // b = color bought one day ago
  // c = color bought today
  int n = 3;
  vector<int> vec(n);

  // output: # of kinds of colors of paint cans

  // 3, 1, 4
  // three dif colors, 1, 3, 4
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  // sort input
  sort(vec.begin(), vec.end());

  int spare = 0;
  int unq = 0;

  for (int i = 0; i < n; i++) {
    // if the current element is not the same as the previous unique element
    if (vec[i] != spare) {
      // increment the count of unique colors
      unq++;
      // update the last seen unique color
      spare = vec[i];
    }
  }

  cout << unq << "\n";

  return 0;
}