#include<iostream>
#include<algorithm>
using namespace std;

// 첫번째는 정렬해서 큰 동전부터 최대한 많이 사용하면서 넘어가려고 했는데 시간초과 무조건 발생
// 그래서 작은 동전부터 차례대로 계산하는 dp 방식 생각
// 10원을 만들려면 예를 들어 2원 사용하면 8원 만드는 방식에 +2하면 되니까 8원 경우의수 +1이다
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;
    int coin[n];
    int dp[10001] = {0};
    dp[0] = 1; // 0원 만들 수 있는건 1가지

    for(int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    
    // 10원을 만들려면 9원 만드는방법에 1원 방법 더해주고 8원 만드는방법에 2원 방법 더해주고 이런식으로 진행하면된다.
    for(int j = 0; j < n; j++) {
        for(int t = coin[j]; t <= k; t++) {
            dp[t] += dp[t - coin[j]];
        }
    }
    cout << dp[k] << "\n";
}