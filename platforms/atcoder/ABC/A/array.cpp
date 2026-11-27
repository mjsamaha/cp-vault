#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++){
    cin >> vec[i];
  }

  int x;
  cin >> x;

  cout << vec.at(x - 1); // zero indexed, so -1 is essential

  return 0;
}