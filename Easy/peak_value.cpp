#include<bits/stdc++.h>
using namespace std;


//@ BRUTE FORCE      TC == n
int peak1(int arr[],int n) {
    for (int i = 0; i < n; i++)
    {
        if((i == 0 || arr[i-1] < arr[i]) && (i == n-1 || arr[i] > arr[i+1])){ //! see here {} i made a mistake
        return i;
        }
    }
    return -1;

}




int main(){
    int arr[]= {1,2,3,4,5,6,7,8,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = peak1(arr,n);
    printf("Your peak value is at: %d ",arr[ans]);


    return 0;
}