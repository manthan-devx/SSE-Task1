#include <iostream>
using namespace std;

// insertion sort :-
// takes one element at a time and places it in its correct position in the sorted part.

void insertionSort(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr ){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main() {
    int arr[5] = {4, 1, 5, 2, 3};
    int len = size(arr);

    insertionSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Time Complexity: O(n^2)