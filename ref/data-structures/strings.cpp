#include <bits/stdc++.h>

using namespace std;

int main(){

    char plat[5] = { 'H', 'e', 'l', 'l', 'o' };

    // string class in C++
    string str1 = "Hello";

    string str2 = "World";

    int len1, len2;

    len1 = str1.size();
    len2 = str2.size();

    // traversing
    for (auto i : str1){
        cout << i << " ";
    }
    cout << endl;

    for (char c : str2){
        cout << c << " ";
    }
    cout << endl;

    for (char c : plat){
        cout << c << " ";
    }
    cout << endl;

    // comparing
    string a = "abc";
    string b = "abd";
    if (a == b){
        cout << "a and b are equal" << endl;
    }

    // accessing
    // changing every character in str1 to 'a'
    for (int i = 0; i < str1.size(); i++){
        str1[i] = 'a';
    }

    // length of a string
    int len3 = str1.length();

    // taking string input
    string strz;
    cin >> strz;
    cout << "You entered: " << strz << endl;

    // splitting a sentence using stringstream
    string sentence = "Some nice guy";

    stringstream ss(sentence);
    string word;
    while (ss >> word){
        cout << word << endl;
    }

    // extract a substring
    string sub = "codeforces";
    // starting from index 4, take 6 characters
    string subStr = sub.substr(4, 6);
    cout << "Substring: " << subStr << endl;


    // sort a string
    string toSort = "dcba";
    sort(toSort.begin(), toSort.end());
    cout << "Sorted string: " << toSort << endl;

    // reversing a string
    string toReverse = "abcd";
    reverse(toReverse.begin(), toReverse.end());
    cout << "Reversed string: " << toReverse << endl;

    // store frequencies of characters in a string
    string freqStr = "aabbcc";
    unordered_map<char, int> freq;
    for (char c : freqStr){
        freq[c]++;
    }
    for (auto [ch, count] : freq){
        cout << ch << ": " << count << endl;
    }

    // palindrome checking
    string pal = "racecar";
    bool isPal = true;
    int f = 0;
    int l = pal.size() - 1;
    while (f < l){
        if (pal[f] != pal[l]){
            isPal = false;
        }
        f++;
        l--;
    }
    if (isPal){
        cout << pal << " is a palindrome" << endl;
    } else {
        cout << pal << " is not a palindrome" << endl;
    }

    // convert numeric character to a string
    int num = 1234;
    string s = to_string(num);
    cout << "String representation: " << s << endl; 

    return 0;
}