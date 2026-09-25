#include<bits/stdc++.h>
using namespace std;

int brute(int n , int arr[]){
   
    for (int i = 0; i < n; i++)
    {
       int mini = arr[0]; // Assume the first element is the minimum

    for (int i = 1; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i]; // Update mini if a smaller element is found
        }
    }
        return mini;
    }
}

int optimise(int n, int arr[]) {
    int low = 0;
    int high = n-1;
    int mid;

    while( low <= high){
        int mid = (low + high)/2;
    }
    if (arr[low] <= arr[mid]);
    
}
    



int main() {
    int arr[] = {4,5,6,7,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = brute(n,arr);

    cout << "Here is your min number in array  " << ans << endl;

    return 0;

}