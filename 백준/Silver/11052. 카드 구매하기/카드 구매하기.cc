#include<iostream>
using namespace std;

int main() {
    // 1개,2개,n개가 포함된 카드팩 총 n가지
    // 개수가 적더라도 가격이 비싸면 높은 등급 카드 만음
    // 돈을 최대한 많이 지불해서 카드 n개 구매.
    // 카드 i개 포함된 가격 Pi

    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    int card[10001];
    int dp[10001] = {0,};
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> card[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i-j] + card[j]);
        }
    }

    cout << dp[n] << "\n";
}