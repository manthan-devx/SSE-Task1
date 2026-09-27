#include <bits/stdc++.h>
using namespace std;

int main(){
    // array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // arr[3] += 5;
    // cout << arr[3] << "\n";

    // arr[4] = 16;
    // cout << arr[4];

    // 2D array
    // int arr[3][5];

    // arr[1][3] = 78;
    // cout << arr[1][3] << "\n";
    // cout << arr[1][4]; // Garbage Value

    // string
    string s = "Manthan";
    // cout << s[2];
    int len = s.size();
    // cout << len;
    s[len-1] = 'z';
    cout << s[len - 1];

    return  0;
}
