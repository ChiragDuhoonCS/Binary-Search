#include<bits/stdc++.h>
using namespace std;

int binary(int n,int arr[],int target) {
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target) return mid;
            else if (arr[mid] < target)
            low = mid + 1;
            else high = mid -1;

        }
    return -1;
}

int main() {
    int arr[8] = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int ans = binary(n,arr,target);
    cout << "your target index " << ans << endl;
    return 0;
}