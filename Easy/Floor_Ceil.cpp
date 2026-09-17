//@ floor means target closest small value
//@ ceil means target closest large value
//@ if element our target in array found then all target,ceil aand dloor same value

#include<bits/stdc++.h>
using namespace std;


//! Floor = largest element <= target
int floorValue(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; //! its safer because int remove decimals

        if (arr[mid] <= target)
        {
            // arr[mid] can be the floor
            ans = arr[mid];

            // Try to find a bigger value which is still <= target
            low = mid + 1;
        }
        else
        {
            // arr[mid] is too large
            // Search on the left side
            high = mid - 1;
        }
    }

    return ans;
}


int ceilValue(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; //

        if (arr[mid] >= target)
        {
            // arr[mid] can be the floor
            ans = arr[mid];

            high = mid - 1; //! here its different

        }
        else
        {
            low = mid + 1; //! here    they just swap

        }
    }

    return ans;
}


int main()
{
    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 5;

    int ans = ceilValue(arr, target, n);

    cout << "Target: " << target << endl;
    cout << "Floor value: " << ans << endl; //@ floor value not index

    return 0;
}