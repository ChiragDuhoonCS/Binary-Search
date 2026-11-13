#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]= {3,4,6,7,9,12,16,17};
    int target = 12;
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target){
            cout << "ans index is : " << mid;
            return 0;
        }
        else if (arr[mid] > target){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Not found";
}