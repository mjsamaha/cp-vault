#include <bits/stdc++.h>

using namespace std;

// primitive approach to find minimum in a vector
int find_min(const vector<int> &v) {
  int min = 0;
  for (int i = 0; i < v.size(); i++) {
    // if the current element is smaller than the current minimum, update the
    // minimum, until the end of the vector
    if (v[i] < min) {
      min = v[i];
    }
  }
  return min;
}

// primitive approach to find maximum in a vector
int find_max(const vector<int> &v) {
  int max = 0;
  for (int i = 0; i < v.size(); i++) {
    // if the current element is larger than the current maximum, update the
    // maximum, until the end of the vector
    if (v[i] > max) {
      max = v[i];
    }
  }
  return max;
}

int main() {
  vector<int> nums = {34, 23, 45, 12, 67};

  // using C++ Algorithm library
  if (!nums.empty()) {
    auto [min_it, max_it] = minmax_element(nums.begin(), nums.end());
    cout << "Min: " << *min_it << ", Max: " << *max_it << endl;
  }

  // finding min with primitive approach
  cout << "Min: " << find_min(nums) << endl;

  // finding max with primitive approach
  cout << "Max: " << find_max(nums) << endl;
}