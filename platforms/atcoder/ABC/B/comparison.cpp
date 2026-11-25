#include <bits/stdc++.h>

using namespace std;

int main() {

  long double a, b;
  cin >> a >> b;

  if (a == b) {
    cout << "EQUAL\n";
  } else if (a > b) {
    cout << "GREATER\n";
  } else if (a < b) {
    cout << "LESS\n";
  }

  return 0;
}