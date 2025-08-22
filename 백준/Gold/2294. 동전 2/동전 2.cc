#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    int coin[100001];
    int dp[100001];
    dp[0] = 0;

    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    for(int i = 1; i <= k+1; i++) {
        dp[i] = 100001;
    }

    for(int i = 0; i < n; i++) {
        for(int j = coin[i]; j <= k; j++) {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }

    if(dp[k] == 100001) {
        cout << "-1\n";
    }
    else {
        cout << dp[k] << "\n";
    }
}