#include <iostream>
#include <vector>
using namespace std;

// quick sort :-
// 1. Pick the pivot
// 2. Partition
// 3. QS (Left) < Pivot < OS (Right)
// 4. Repeating QS recursively

int partition (vector<int> &arr, int st, int end) {
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++) {
        if(arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort (vector<int> &arr, int st, int end){
    if (st < end){
        int pivIdx = partition(arr, st, end);

        quickSort(arr, st, pivIdx-1); // Left
        quickSort(arr, pivIdx, end); // Right
    }
}

int main() {
    vector<int> arr = {13, 31, 35, 8, 32, 17};
    quickSort(arr, 0, arr.size()-1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(nlogn)
// Worst Case: O(N^2)