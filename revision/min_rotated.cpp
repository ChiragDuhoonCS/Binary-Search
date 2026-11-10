#include<bits/stdc++.h>
using namespace std;

void brute(int arr[], int n,int& mini) { // & coz we are changing value of mini here
    mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini) {
        mini = arr[i];
    }
}
    
    
}

int main() {
    int arr[]= {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini;

    brute(arr,n,mini);
    cout << "Here is your ans: " << mini;
}