#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int dp[1001];
    dp[1] = 1; dp[2] = 3;

    if(n % 2 == 0) {
        for(int i = 4; i <= n; i += 2) {
            dp[i] = (dp[i-2] * 4 - 1) % 10007;
        }
    }
    else {
        for(int i = 3; i <= n; i+=2) {
            dp[i] = (dp[i-2] * 4 + 1) % 10007;
        }
    }

    cout << dp[n] << "\n";
 }