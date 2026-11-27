#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  // int sum = a + b + c;

  // first solution
  //   if (sum % 2 == 0) {
  //     cout << "Yes\n";
  //   } else {
  //     cout << "No\n";
  //   }

  // second solution: a + b = c || a + c = b || b + c == a
  if (a + b == c || a + c == b || b + c == a) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}