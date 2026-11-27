#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  // c is cost
  // if a + b is greater than c _> yes
  if (a + b >= c) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}