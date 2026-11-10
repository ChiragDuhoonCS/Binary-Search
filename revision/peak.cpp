#include<bits/stdc++.h>
using namespace std;

int brute(int arr[],int n){ 
    for (int i = 0; i < n; i++)
    {
        if((i==0 || arr[i-1] < arr[i]) && (i == n-1 || arr[i+1] < arr[i]))
        return i;

    }
}


int optimise(int arr[],int n) {
    int low = 1;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;

        if((arr[mid] > arr[mid+1]) && arr[mid] > arr[mid-1]);
        return  mid;
        else if (arr[mid] > arr[mid-1]);
        low = mid-1;
        else if (arr[mid] > arr[mid+1]);
        high = mid-1;
    }
    return -1;
}


int main() {
    int arr[]= {1,2,3,4,5,6,7,8,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = brute(arr,n); //! FOCUS HERE
    cout << "Solution index: " << i << endl << "Value" << arr[i];
    
}