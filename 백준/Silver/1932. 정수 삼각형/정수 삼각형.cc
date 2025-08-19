#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int triangle[501][501] = {0,};
    int dp[501][501] = {0,};
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    dp[1][1] = triangle[1][1];

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + triangle[i][j];
        }
    }

    int maxNum = dp[n][1];
    for(int i = 2; i <= n; i++) {
        maxNum = max(maxNum, dp[n][i]);
    }
    cout << maxNum << "\n";
}