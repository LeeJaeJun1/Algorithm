#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w;
    int arr1[1000000];
    cin >> n;
    for(int i = 0; i < 2 * n; i++) {
        cin >> w;
        arr1[i] = w;
    }
    sort(arr1, arr1+ 2*n);
    int a = 0; int b = 2*n-1;
    int min = arr1[a] + arr1[b];
    while(a < b) {
        if(arr1[a] + arr1[b] < min) {
            min = arr1[a] + arr1[b];
        }
        a+=1; b-=1;
    }
    cout << min;
}