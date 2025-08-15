#include<iostream>
#include<algorithm>
using namespace std;

// nxn 체스판 위에 퀸 n개를 서로 공격할 수 없게 놓는 문제
// 퀸을 놓는 방법의 수
// 가로 세로 대각선에 있으며 안됨
// 그럼 백트래킹 방법

int chess[16];
int n,total = 0;

void search(int num) {
    if(num == n) {
        total++;
    }
    for(int i = 0; i < n; i++) {
        chess[num] = i;
        bool check = true;
        for(int j = 0; j < num; j++) {
            if(chess[num] == chess[j] || abs(chess[num] - chess[j]) == num - j) {
                // 같은 열인 경우에 안되고(한 가로에 있을때), 대각선일 때 안됨
                check = false;
                break;
            }
        }
        if(check) {
            search(num+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    search(0);
    cout << total << "\n";
}