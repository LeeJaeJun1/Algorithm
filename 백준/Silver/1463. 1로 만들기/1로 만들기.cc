#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    int dp[n+1];
    dp[0] = 0; dp[1] = 0; dp[2] = 1; dp[3] = 1;

    // 3으로 나누어떨어지면, 3으로 나눈다
    // 2로 나누어 떨어지면 2로 나눈다.
    // 1을 뺸다

    for(int i  = 4; i <= n; i++) {
        dp[i] = dp[i-1] + 1;
        if(i % 2 == 0) {
            dp[i] = min(dp[i / 2] + 1, dp[i]);
        }
        if(i % 3 == 0) {
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        }
    }
    cout << dp[n] << "\n";
}