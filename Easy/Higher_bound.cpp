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

