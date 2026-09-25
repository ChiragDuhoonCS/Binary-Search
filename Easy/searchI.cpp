#include<bits/stdc++.h>
using namespace std;


//! LINEAR SEACH    TC OF N
int brute(int n,int arr[],int target) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
    
}

//! BINARY SEARCH  TC OF NLOGN
int optimise(int n,int arr[],int target) {
    int low = 0;
    int high = n-1;
        while (low <= high) {
        int mid = (low + high )/2;

        if (arr[mid] == target ) return mid;
        else if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            
             else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {7,8,9,1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int ans = optimise(n,arr,target);


    printf("Search in rotated array position: %d ",ans);

    return 0;
}