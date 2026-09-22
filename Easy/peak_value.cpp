#include<bits/stdc++.h>
using namespace std;


//@ BRUTE FORCE      TC == n    DONE BY LINEAR ITERATION
int peak1(int arr[],int n) {
    for (int i = 0; i < n; i++)
    {
        if((i == 0 || arr[i-1] < arr[i]) && (i == n-1 || arr[i] > arr[i+1])){ //! see here {} i made a mistake
        return i;
        }
    }
    return -1;

}

//@ OPTIMIZE ANSWER BY BINARY SEARCH   TC == NLOGN
int peak2(int arr[],int n){
    if (n==1) return 0; // IF ONLY ONE ELEMENT IN ARRAY
    if (arr[0] > arr[1]) return 0; // FIRST VALUE
    if (arr[n-1] > arr[n-2]) return n-1; // LAST VALUE

    int low = 1;
    int high = n-2;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        return mid;

        else if (arr[mid] > arr[mid-1]) 
        low = mid +1;

        else if(arr[mid] < arr[mid+1])
        high = mid - 1;
    } //! ELSE (LOW = MID+1)   IF ARRAY HAVE MULTIPLE PEAK
    return -1;
}


int main(){
    int arr[]= {1,2,3,4,5,6,7,8,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = peak2(arr,n);
    printf("Your peak value is at: %d ",arr[ans]);


    return 0;
}