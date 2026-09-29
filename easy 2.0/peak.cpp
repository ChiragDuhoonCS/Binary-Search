#include<bits/stdc++.h>
using namespace std;

int linear(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (((i == 0) || arr[i] > arr[i - 1]) && ((i == n - 1) || arr[i] > arr[i + 1])) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[6] = {1, 2, 3, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = linear(arr, n);
    cout << "your target index " << ans << endl;
    return 0;
}
