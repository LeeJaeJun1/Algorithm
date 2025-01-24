#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr1[10];
    int a,b,n,button;
    cin >> a >> b >> n;
    int total = abs(a-b);
    int min = abs(a-b);
    for(int i = 0; i < n; i++) {
        cin >> button;
        arr1[i] = button;
    }
    for(int j = 0; j < n; j++) {
        if(arr1[j] == b) {
            total = 1;
        }
        else{
            if(abs(b - arr1[j]) < min) {
                min = abs(b-arr1[j]);
                total = min+1;
            }
        }
    }
    cout << total;
}