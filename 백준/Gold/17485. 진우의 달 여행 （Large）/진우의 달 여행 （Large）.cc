#include<iostream>
#include<algorithm>
using namespace std;

int arr[1001][1001];
int dp[1001][1001][3];

int main() {
    // 같은 방향으로 두 번 연속으로 움직일 수 없다.
    // 정수 삼각형이랑 비슷하면서도 다른 문제
    // 방향을 기억하려면 3차원 배열을 사용?
    // 최솟값을 구하는거라 dp 초기화를 엄청 큰수로 해야됨

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < 3; k++) {
                dp[i][j][k] = 1000000000;
            }
        }
    }

    for(int k = 0; k < m; k++) {
        dp[0][k][0] = dp[0][k][1] = dp[0][k][2] =  arr[0][k];
    }

    for(int a = 1; a < n; a++) {
        for(int b = 0; b < m; b++) {
                // 맨 좌측 맨 우측 고려해야됨
                // 바로 위에서 내려오는 경우
                dp[a][b][1] = arr[a][b] + min(dp[a-1][b][0], dp[a-1][b][2]);

                // 왼쪽 위에서 내려오는 경우
                if(b > 0) {
                    dp[a][b][0] = arr[a][b] + min(dp[a-1][b-1][1], dp[a-1][b-1][2]);
                }

                // 오른쪽 위에서 내려오는 경우
                if(b < m - 1) {
                    dp[a][b][2] = arr[a][b] + min(dp[a-1][b+1][0], dp[a-1][b+1][1]);
                }

        }
    }

    int minn = 1000000000;
    for(int i = 0; i < m; i++) {
        minn = min({minn, dp[n-1][i][0], dp[n-1][i][1], dp[n-1][i][2]});
    }
    cout << minn << "\n";
}
