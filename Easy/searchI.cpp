#include<bits/stdc++.h>
using namespace std;

int brute(int n,int arr[],int target) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
    
}

int main() {
    int arr[] = {7,8,9,1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int ans = brute(n,arr,target);


    printf("Search in rotated array position: %d ",arr[ans]);

    return 0;
}