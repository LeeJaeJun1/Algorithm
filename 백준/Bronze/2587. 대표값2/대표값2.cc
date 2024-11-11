#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr1[6];
    int total = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
        total += arr1[i];
    }
    cout << total / 5 << endl;

    sort(arr1, arr1+5);

    cout << arr1[2];
}