#include <bits/stdc++.h>

using namespace std;

int main() {

  // [1] declaration and initialization of vectors
  // empty vector
  vector<int> n1;

  // vector with initial size, 10 elements, all 0
  vector<int> n2(10);

  // vector with init size and value
  vector<int> n3(10, 32); // 10 elements, all 32

  // vector with initializer list
  vector<int> n4 = {1, 2, 3, 4, 5};

  vector<int> n5{1, 2, 3, 4, 5};

  // vector copy
  vector<int> n6 = n5;

  // [2] common operations
  vector<int> vec;

  // adding elements
  vec.push_back(10);          // add 10 to the back
  vec.emplace_back(20);       // construct and add 20 to the back
  vec.insert(vec.begin(), 5); // insert 5 at the beginning

  // accessing elements
  int first = vec[0];          // access first element directly
  int second = vec.at(1);      // access second element safely
  int last = vec.back();       // access last element
  int first_alt = vec.front(); // access first element alternative way

  // removing elements
  vec.pop_back();         // remove last element
  vec.erase(vec.begin()); // remove first element
  vec.clear();            // remove all elements

  // size information
  size_t size = vec.size();    // get number of elements
  size_t cap = vec.capacity(); // get current allocation space
  bool empty = vec.empty();    // check if vector is empty

  // manage capacity
  vec.reserve(100);    // reserve space for at least 100 elements
  vec.shrink_to_fit(); // reduce capacity to fit current size

  // [3] Modern C++ Features (C++ and Beyond)

  // range-based for loops
  vector<int> list = {2, 4, 6, 8};

  // read only access
  for (const auto &num : list) {
    cout << num << " ";
  }

  // modify elements
  for (auto &num : list) {
    num += 2;
  }

  // [4] Algorithms Container

  vector<int> numz = {5, 3, 8, 9, 1};

  // sort
  sort(numz.begin(), numz.end());

  // find
  auto it = find(numz.begin(), numz.end(), 8);

  // [5] Best Practices

  // prefer range-based for loops over traditional for loops when possible
  // good
  for (const auto &e : numz) {
    cout << e << " ";
  }

  // bad
  for (size_t i = 0; i < numz.size(); i++) {
    cout << numz[i] << " ";
  }

  // use algorithms with vectors
  auto itx = remove_if(numz.begin(), numz.end(), [](int x) {
    // remove even numbers
    return x % 2 == 0;
  });
  // erase the removed elements from the vector
  numz.erase(itx, numz.end());

  return 0;
}
