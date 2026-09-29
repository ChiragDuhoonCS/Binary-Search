#include <bits/stdc++.h>
using namespace std;

int brute(int n) {
    int ans = 0;
    for (int i = 0; i * i <= n; i++) {//! important   here
        ans = i; // Keep updating ans as long as i*i <= n
    }
    return ans;
}

int main() {
    int n = 25;

    int ans = brute(n);
    cout << "your under root " << ans << endl; 
    return 0;
}