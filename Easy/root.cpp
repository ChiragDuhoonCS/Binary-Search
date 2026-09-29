#include <bits/stdc++.h>
using namespace std;

//! BRUTE SOLUTION  
int brute(int n) {
    int ans = 0;
    for (int i = 0; i * i <= n; i++) {//! important   here
        ans = i; // Keep updating ans as long as i*i <= n
    }
    return ans;
}

int binary(int n) {
    int ans;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high)/2;
        if (mid*mid <= n) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int main() {
    int n = 25;

    int ans = binary(n);
    cout << "your under root " << ans << endl; 
    return 0;
}