#include<bits/stdc++.h>
using namespace std;

//! BRUTE SOLUTION
int brute(int n,int m) {
    for (int i = 0; i <= m; i++) {
        long long multi = 1;
        for (int j = 0; j < n; j++) {
            multi *= i;
        }
        if (multi == m) {
            return i;
        }
    }
    return -1;
}

in