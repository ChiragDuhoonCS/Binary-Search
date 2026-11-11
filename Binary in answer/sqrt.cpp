#include<bits/stdc++.h>
using namespace std;

int brute(int n) {
    for (int i = 0; i < n; i++)
    {
        if(i*i <= n){
            return i;
        }
        else{
            break;
        }
    }
    
}

int main() {
    int n = 25;
    int i = brute(n);
    cout<< "Ans is : " << i;
    return 0;
}