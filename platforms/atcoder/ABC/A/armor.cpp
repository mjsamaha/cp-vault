#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, d;
  cin >> a >> d;
  // power/strngth rep as D or less (blocks), but not block greater than D.

  // output yes if armor blocks attack, no otherwise

  // 4 - 5 > Yes

  if (a == d || a < d){
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}