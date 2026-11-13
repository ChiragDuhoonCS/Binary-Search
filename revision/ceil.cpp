#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]= {3,4,6,7,9,12,16,17};
    int target = 13; // Ceil for 13 is 16
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        
        if(arr[mid] < target) { 
            low = mid + 1; 
        }
        else {
            high = mid - 1; // Keep searching left for a closer ceil
        }
    }
    
    cout << "Ceil Index: " << low << endl << "Ceil Value: " << arr[low];
}