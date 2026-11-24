#include <bits/stdc++.h>

using namespace std;

int main(){

    // create a deque
    deque<int> dq;

    // adding and removing elements
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.pop_back();
    dq.pop_front();

    // iterate over the deque
    for (int x : dq) {
        cout << x << ' ';
    }
    cout << '\n';

    for (auto i : dq){
        cout << i << ' ';
    }
    cout << '\n';



    // check if the deque is empty
    if (dq.empty()){
        cout << "Deque is empty\n";
    } else {
        cout << "Deque is not empty\n";
    }

    // access the front and back elements
    if (!dq.empty()) {
        cout << "Front element: " << dq.front() << '\n';
        cout << "Back element: " << dq.back() << '\n';
    }
    
    // get the size of the deque
    cout << "Size of deque: " << dq.size() << '\n';

    // clear the deque
    dq.clear();
    cout << "Size of deque after clearing: " << dq.size() << '\n';

    // adding objects to the front and back
    dq.emplace_front(10);
    dq.emplace_back(20);

    // iterate over the deque after adding objects
    for (int x : dq) {
        cout << x << ' ';
    }
    cout << '\n';

    // accessing elements
    cout << "First: " << dq.at(0);
    cout << " Last: " << dq.at(dq.size() - 1) << '\n';

    return 0;
}