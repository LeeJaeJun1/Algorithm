#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int arr1[n];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1+n, greater<int>());

    cout << arr1[k-1];
}