#include<iostream>
#include<vector>
using namespace std;

// 각각의 가로줄과 세로줄에는 1부터 9까지의 숫자가 한번씩만
// 3x3 정사각형 안에서도 1부터 9까지

int arr[10][10];
int check = 0;
vector<pair<int,int>> v;
bool finish = false;

bool search(int row, int col) {
    // 전체 가로와 세로 판단해야하고 9개 칸 정사각형 확인해야함

    // 자기 자신과의 비교는 막아야 한다!! 계속 출력이 안나왔던 이유
    for(int i = 0; i < 9; i++) {
        if (arr[i][col] == arr[row][col] && i != row) {
            return false;
        }
    }
    for(int j = 0; j < 9; j++){
        if(arr[row][j] == arr[row][col] && j != col) {
            return false;
        }
    }
    int squRow = row / 3;
    int squCol = col / 3;
    for(int i = 3 * squRow; i < 3 * squRow + 3; i++) {
        for(int j = 3 * squCol; j < 3 * squCol + 3; j++) {
            if(arr[i][j] == arr[row][col] && (i != row || j != col)) {
                return false;
            }
        }
    }
    return true;
}

void find(int num) {
    if(num == check) { // 0으로 적힌 곳 모두 채웠다
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        finish = true;
        return;
    }
    int x = v[num].first;
    int y = v[num].second;

    for(int i = 1; i < 10; i++) {
        arr[x][y] = i;
        if(search(x,y)) {
            find(num + 1);
        }
        if(finish) {
            return;
        }
    }
    arr[x][y] = 0;
}

int main() {
    // 빈칸 0으로 주어진다.
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 여기서 0이 입력되면 우리가 확인해야되는 곳이다.
    // 그럼 이것도 백트래킹 dfs를 써야되는건데...
    // 그렇다면 0인곳만 판단하면 되는거잖아?

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 0) {
                v.push_back({i,j});
                check++;
            }
        }
    }
    find(0);
}