#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T; int k,n;
    int total = 0;
    cin >> T;
    int arr1[15][15] = {};
    for(int i = 1; i < 15; i++) {
        arr1[0][i] = i;
    }

    while(T--) {
        cin >> k >> n; // k층 n호
        for(int a = 1; a <= k; a++) {
            for(int b = 1; b <= n; b++) {
                if(arr1[a][b]) continue;
                for(int j = 1; j <= b; j++) {
                    arr1[a][b] += arr1[a-1][j];
                }
            }
        }
        cout << arr1[k][n] << endl;
    }
    return 0;
}