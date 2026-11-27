#include <bits/stdc++.h>

using namespace std;

int main() {

  // N people from 1 to N
  // M grapes, distrbuted to N people
  // 1x grape to persons 1, 2, 3, .. N
  // if grapes run out, midway, distribution ends
  // if still grapes remaining after to last person,
  // go back to 1, distribute again,
  // until grapes run out

  int n, m;
  cin >> n >> m;

  vector<int> vec(n);

  for (int i = 0; i < m; i++) {
    int person = i % n;
    vec[person]++;
  }

  for (int i = 0; i < n; i++) {
    cout << vec[i] << "\n";
  }

  return 0;
}