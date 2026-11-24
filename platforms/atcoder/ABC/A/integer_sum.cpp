// A. Integer Sum - https://atcoder.jp/contests/abc272/tasks/abc272_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;

  cin >> n;

  vector<int> array(n);

  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  if (array.size() > 1) {
    cout << accumulate(array.begin(), array.end(), 0) << "\n";
  } else {
    cout << array.at(0) << "\n";
  }

  return 0;
}