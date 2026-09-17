#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = n; // Default answer if target is greater than all elements

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If arr[mid] is greater than or equal to target, 
        // it's a potential position, but let's check the left side for a smaller index
        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1; // Target must be on the right side
        }
    }

    return ans;
}

int main(){
    int target = 5;
    int arr[]= {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = insert(arr,n,target);

    for (int i = 0; i < n; i++)
    {
        printf("%d , ",arr[i]);
    }
    

    return 0;
}