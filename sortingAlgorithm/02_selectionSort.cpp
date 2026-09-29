#include <iostream>
using namespace std;

// selection sort :-
// repeatedly finds the smallest element from the unsorted part and places it at the beginning of that part until the array is sorted.

void selectionSort(int arr[], int len){
    for(int i=0; i<(len-1); i++)
    {
        int smallestIdx = i;
        for (int j = i+1; j < len; j++)
        {
            if(arr[j]<arr[smallestIdx])
                smallestIdx = j;
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

int main() {
    int arr[5] = {4, 1, 5, 2, 3};
    int len = size(arr);

    selectionSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Time Complexity: O(n^2)