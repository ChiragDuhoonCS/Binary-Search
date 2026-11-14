#include<bits/stdc++.h>
using namespace std;

int main() {
   
    
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