#include <iostream>
using namespace std;

// binary search :-
// Used to find the position of a target value within a sorted array. 
// It works by repeatedly dividing the search interval in half.

int binarySearch(int arr[], int len, int value){
    int l = 0, r = len-1, mid;
    while (l<r)
    {
        mid = (l+r)/2;
        if(value==arr[mid])
            return mid;
        else if(value < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
    
}

int main() {
    int arr[10] = {5, 13, 34, 47, 56, 66, 78, 89, 92, 98};
    int len = size(arr);
    int value = 56;

    int result = binarySearch(arr, len, value);
    cout << result;

    return 0;
}

// Time Complexity: O(logn)