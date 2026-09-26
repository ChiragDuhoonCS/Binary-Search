#include<bits/stdc++.h>
using namespace std;

int linear(int n,int arr[],int target) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[8] = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int ans = linear(n,arr,target);
    cout << "your target index " << ans << endl;
    return 0;
}