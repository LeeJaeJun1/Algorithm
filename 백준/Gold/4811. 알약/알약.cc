#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    // 한 조각 w, 반 조각 h
    int n;
    long dp[1001];
    
    dp[0] = 1; dp[1] = 1; dp[2] = 2;
    // n = 3일때 0 * 2 + 1 * 1 + 2 * 0
    // n = 4일때 0 * 3 + 1 * 2 + 2 * 1 + 3 * 0
    for(int i = 3; i <= 30; i++) {
        for(int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    while(true) {
        cin >> n;
        if(n==0) {
            break;
        }
        cout << dp[n] << "\n";
    }
}