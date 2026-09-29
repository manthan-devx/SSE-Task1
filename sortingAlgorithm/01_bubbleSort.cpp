#include <iostream>
using namespace std;

// bubble sort :-
// Repeatedly compares adjacent elements and swaps them if they are in the wrong order, until the entire array is sorted.

void bubbleSort(int arr[], int len){
    bool isSwap = false;

    for(int i=0; i<(len-1); i++)
    {
        for(int j=0; j<(len-i-1); j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){
            return;
        }
    }
}

int main() {
    int arr[5] = {4, 1, 5, 2, 3};
    int len = size(arr);

    bubbleSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}

// Time Complexity: O(n^2)