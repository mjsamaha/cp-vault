#include <bits/stdc++.h>

using namespace std;

int main(){

    int myArray[5];

    int myArray2[5]{1, 2, 3, 4, 5};

    int myArray3[]{1, 2, 3, 4, 5};

    // accessing elements
    int first = myArray2[0]; // access first element
    int last = myArray2[4];

    // iteration
    for (auto i : myArray2){
        cout << i << " ";
    }

    // size (how many elements)
    cout << "Length: " << size(myArray2) << endl;

    // sizeof() > returns how many bytes the array occupies
}