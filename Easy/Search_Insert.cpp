#include <bits/stdc++.h>
using namespace std;

/*int insert(int arr[], int n, int target) {*/

//! we are using vector we can just use arr.size() instaed of n
//! use vector to insert and exit element in vector  easily editable array by vector


int findInsertPosition(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size(); // Default answer if target is greater than all elements

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If arr[mid] is greater than or equal to target, 
        // it's a potential position, but let's check the left side for a smaller index
        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1; // Target must be on the right side
        }
    }

    return ans;
}

/*int main(){
    int target = 5;
    int arr[]= {3,4,6,7,9,12,16,17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = insert(arr,n,target);
    cout << "The target is at index: " << arr << endl;


    return 0;
}*/

//! we are using vectors to insert stuff in it
int main() {
    int target = 5;
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};

    // Find the correct index using your search logic
    int ans = findInsertPosition(arr, target); //!here is important use of vector  we are inserting ans in it

    // Insert the target into the vector at the found index
    arr.insert(arr.begin() + ans, target); //! we are insterting from begin in array

    cout << "Updated Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Target " << target << " was inserted at index: " << ans << endl;

    return 0;
}