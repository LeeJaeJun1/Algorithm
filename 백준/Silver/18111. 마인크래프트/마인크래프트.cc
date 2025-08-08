#include<iostream>
using namespace std;

// 땅 고루기 작업 세로 N, 가로 M
// 집터 맨 왼쪽 위의 좌표 (0,0)
// 좌표 (i,j)의 가장 위에 있는 블록 제거하여 인벤토리에 넣는다. 2초
// 인벤토리에서 블록 하나를 꺼내어 좌표 (i,j)의 가장 위에 있는 블록 위에 놓는다. 1초
// 땅 고르기 작업 걸리는 최소 시간과 그 경우 땅의 높이
// B개의 블록 들어있고, 땅의 높이 256보다 작거나 같은 자연수

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Block[501][501];
    int n,m,b,T = 100000000, H = 0;
    cin >> n >> m >> b;

    // 1<=m,n <= 500 ,
    // i+2번 째 줄의 j+1번째 수는 좌표 (i,j)에서의 땅의 높이를 나타낸다.
    // 걸리는 시간과 땅의 높이 출력
    // 답이 여러 개 있으면 그중에서 땅의 높이가 가장 높은 것

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> Block[i][j];
        }
    }

    for(int height = 0; height <= 256; height++) {
        int many = 0;
        int less = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(height > Block[i][j]) { // 인벤토리에서 채워 넣어야함
                    many += height - Block[i][j];
                }
                else if(height < Block[i][j]) { // 뺴야함.
                    less += Block[i][j] - height;
                }
                else { // 같은 경우
                    continue;
                }
            }
        }

        // 빼는거랑 인벤토리 채워 넣는거랑 비교해야됨

        if(b + less >= many) {
            int time = less * 2 + many * 1;
            // 이 조건문이 문제일텐데
            // 작업에 걸리는 최소 시간과 그 경우 땅의 높이를 출력
            // 땅의 높이가 가장 높은 것
            if(time <= T) {
                T = time;
                H = height;
            }
        }
    }
    cout << T << " " << H;
}