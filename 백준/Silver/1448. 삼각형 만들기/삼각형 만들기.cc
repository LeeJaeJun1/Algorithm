#include<iostream>
#include<algorithm>
using namespace std;

// 가장 긴 변의 길이가 댜른 두변의 합보다 작아야 한다.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int arr1[1000000];
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1+n, greater<int>());
    int total = 0;
    for(int j = 0; j <= n / 2; j++) {
        if(arr1[j] < arr1[j+1] + arr1[j+2]) {
            total = arr1[j] + arr1[j+1] + arr1[j+2];
            cout << total;
            break;
        }
    }
    if(total == 0) {
        cout << -1;
    }
}