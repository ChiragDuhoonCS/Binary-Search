//! LOWER BOUND

#include<bits/stdc++.h>
using namespace std;

int lowerbound(int arr[],int n,int target){
    int low = 0;int high = n-1;
    int ans = n;

    while (low <= high){
    int mid = (low+high)/2;

    if (arr[mid] >= target){
        ans = mid;
        high = mid-1;
    }

    else
        low = mid + 1;
    }

    return ans;
}

int main(){
    int target = 5;
    int arr[]= {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = lowerbound(arr,n,target);
    cout << "The target is at index: " << ans << endl;


    return 0;
}