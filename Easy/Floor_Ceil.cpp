//@ floor means target closest small value
//@ ceil means target closest large value
//@ if element our target in array found then all target,ceil aand dloor same value

#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int target, int n) {
    int high = n-1;
    int low = 0;
    int mid;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low+high)/2;
    }

      if(arr[mid] <= target ){
          ans = arr[mid];
          low = mid + 1;
      }
      else{
          high = mid - 1;
      }
    
    return ans;
}


int main(){
    int target = 5;
    int arr[]= {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = floor(arr,n,target);
    cout << "The target is at index: " << arr[ans-1] << endl;


    return 0;
}