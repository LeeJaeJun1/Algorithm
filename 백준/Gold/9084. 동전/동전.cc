#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test,num,money;
    cin >> test;

    while(test--) {
        int coin[21] = {0, };
        int dp[10001] = {0,};
        dp[0] = 1;
        cin >> num;
        for(int i = 0; i < num; i++) {
            cin >> coin[i];
        }
        cin >> money;

        for(int j = 0; j < num; j++) {
            for(int k = coin[j]; k <= money; k++) {
                dp[k] += dp[k - coin[j]];
            }
        }
        cout << dp[money] << "\n";
    }
}