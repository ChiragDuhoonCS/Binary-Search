#include<bits/stdc++.h>
using namespace std;

//! DO AGAIN


long long fnx(int piles[], int n, int k) {
    long long totalHours = 0;
    for(int i = 0; i < n; i++) {
        totalHours += (piles[i] + k - 1) / k;
    }
    return totalHours;
}

int brute(int piles[], int n, int h) {
    int maxPile = 0;
    for(int i = 0; i < n; i++) {
        maxPile = max(maxPile, piles[i]);
    }

    for(int k = 1; k <= maxPile; k++) {
        long long totalHours = fnx(piles, n, k);
        if(totalHours <= h) {
            return k;
        }
    }
    return maxPile;
}


int optimise(int piles[], int n, int h){
    int low = 1;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        
    }

}
int main() {
    int piles[] = {3, 6, 7, 11};
    int n = sizeof(piles) / sizeof(piles[0]);
    int h = 8;

    cout << "Ans is : " << brute(piles, n, h);
    return 0;
}