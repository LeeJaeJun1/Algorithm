#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int arr1[1000];
    int t;
    cin >> t;
    while(t--) {
        int j,n;
        cin >> j >> n;
        for(int a = 0; a < n; a++) {
            int i,r;
            cin >> i >> r;
            arr1[a] = i * r;
        }
        sort(arr1, arr1+n, cmp);
        int count = 0;
        for(int b = 0; b < n; b++) {
            if(j <= 0) {
                break;
            }
            count += 1;
            j -= arr1[b];
        }
        cout << count << endl;
    }
}