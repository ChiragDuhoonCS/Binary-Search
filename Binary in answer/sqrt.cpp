#include<bits/stdc++.h>
using namespace std;


//! see this i made bit mistake here    generalise it
int brute(int n) {
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (i * i <= n) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
}


//! without using int ans
int optimise(int n) {
    int low = 0, high = n;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid <= n) {
            low = mid + 1;     // try searching in the right half for a larger value
        } else {
            high = mid - 1;    // search in the left half
        }
    }
    
    //! when low and high swap high holds our ans
    return high; // 'high' will hold the correct integer square root
}


int main() {
    int n = 25;
 //   int i = brute(n);
    int mid = optimise(n);
    cout<< "Ans is : " << mid;
    return 0;
}