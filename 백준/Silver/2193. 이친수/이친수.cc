#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; long long arr1[100];
    cin >> N;
    arr1[0] = 0;
    arr1[1] = 1;
    arr1[2] = 1;
    for(int i = 3; i <= N; i++) {
        arr1[i] = arr1[i-1] + arr1[i-2];
    }
    cout << arr1[N];
}