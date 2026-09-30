#include<bits/stdc++.h>
using namespace std;

//! LINEAR SEARCH   TC O(N)
int linear(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (((i == 0) || arr[i] > arr[i - 1]) && ((i == n - 1) || arr[i] > arr[i + 1])) { //! focus here
            return i;  //! made mistake here
        }
    }
    return -1;
}


//! BINARY SEARCH   TC 0(LOG N)
int binary(int arr[] , int n) {
   int low = 1;
    int high = n - 2;
    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 1;
    if(arr[n-1] > arr[n-2]) return n-1;
}






int main() {
    int arr[6] = {1, 2, 3, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = binary(arr, n);
    cout << "your target index " << ans << endl;
    return 0;
}
