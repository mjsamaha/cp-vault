#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b;
    // n = hours
    // plan (a x t(yen))
    // plan (b)

    cin >> n >> a >> b;

    // 5 20 100
    // (1) 5 x 20 = 120
    // (2) 120
    // minimum is 100

    int res = min(n * a, b);
    cout << res << "\n";
    
    return 0;
}