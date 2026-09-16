//$ BINARY SEARCH BASIC

#include<bits/stdc++.h>
using namespace std;

//!ITERATION

int fnx1(int arr[],int n,int target) {
    int low = 0,high = n-1,mid;
    while(low <= high){
        mid = (low+high)/2;

        if(arr[mid] == target)
        return mid;

        else if(target > arr[mid])
        low = mid+1;
        
        else high = mid-1;
    }
    return -1;
}

//! BY RECUSRION
int fnx1Recursive(int arr[], int target, int low, int high) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        return mid;

        else if(target > arr[mid])
        return fnx1Recursive(arr, target, mid + 1, high);
        
        else
        return fnx1Recursive(arr, target, low, mid - 1);
}

/*int main(){
    int target = 12;
    int arr[]= {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    fnx1(arr,n,target);

    int result = fnx1(arr, n, target);
    cout << "The target is at index: " << result << endl;


    return 0;
}*/

