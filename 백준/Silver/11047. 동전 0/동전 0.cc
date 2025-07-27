#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,num = 0;
    cin >> n >> k;
    int arr1[n];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int j = n - 1; j >= 0; j--) {
        if(k >= arr1[j]) {
            num += k / arr1[j];
            k %= arr1[j];
        }
    }
    cout << num;
}