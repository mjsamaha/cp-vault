// A - Two Rectangles - https://atcoder.jp/contests/abc052/tasks/abc052_a
#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, c, d;
  // length of vertical of first are A
  // length of the horizontal of first are B

  // length of vertical of second are C
  // length of the horizontal of second are D
  cin >> a >> b >> c >> d;

  // print the area of the rectangle with the larger area
  int area1 = a * b;
  int area2 = c * d;
  cout << max(area1, area2) << endl;

  return 0;
}