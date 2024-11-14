#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1x[n];
    int arr1y[n];

    for(int i = 0; i < n; i++)
        cin >> arr1x[i] >> arr1y[i];

    sort(arr1x, arr1x+n);
    sort(arr1y, arr1y+n);

    int x = arr1x[n-1] - arr1x[0];
    int y = arr1y[n-1] - arr1y[0];
    int total = x * y;
    cout << total;
}