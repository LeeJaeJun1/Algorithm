#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int dp[10000];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = 0;

    for(int a = 0; a < n; a++) {
        dp[a] = 1;
        for(int b = 0; b < n; b++) {
            if(arr[a] > arr[b]) {
                dp[a] = max(dp[a], dp[b] + 1);
            }
        }
        total = max(total, dp[a]);
    }
    cout << total << "\n";
}