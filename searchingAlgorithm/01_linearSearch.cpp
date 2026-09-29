#include <iostream>
using namespace std;


// linear search :-
// A basic method used to find a specific item in a list by checking every item one by one from the start to the end

void linearSearch(int arr[], int len, int value){
    // Method-1
    // int i;
    // for (i = 0; i < len; i++)
    // {
    //     if(arr[i]==value){
    //         cout << "Elment found at index: " << i;
    //         break;
    //     }

    // }
    // if(i==len){
    //     cout << "Element not found";
    // }

    // Method-2
    int i, found = 0;
    for (i = 0; i < len; i++)
    {
        if(arr[i]==value){
            cout << "Elment found at index: " << i;
            found = 1;
            break;
        }

    }
    if(!found){
        cout << "Element not found";
    }
}

int main() {
    int arr[10] = {10, 15, 5, 50, 65, 84, 97, 43, 88, 34};
    int len = size(arr);
    int value = 500;

    linearSearch(arr, len, value);
    
    return 0;
}

// Time Complexity: O(n)