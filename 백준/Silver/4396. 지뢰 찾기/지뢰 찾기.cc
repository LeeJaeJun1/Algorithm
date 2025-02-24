#include<iostream>
using namespace std;

char arr1[11][11]; // 지뢰 위치
char arr2[11][11]; // 입력
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

void check(int y, int x) {
    int bom = 0;
    for(int i = 0; i < 8; i++) {
        int ny = y + dy[i]; 
        int nx = x + dx[i];
        if(arr1[ny][nx] == '*') {
            bom++;
        }
    }
    arr2[y][x] = bom+'0';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr1[i][j];
            arr2[i][j] = '.';
        }
    }

    for(int a = 0; a < n; a++) {
        for(int b = 0; b < n; b++) {
            char c; cin >> c;
            if(c == 'x' && arr1[a][b] == '.') {  // 열려있는데, 지뢰없을때
                check(a,b);
            }
            else if(c=='x' && arr1[a][b] == '*') { // 열려있는데, 지뢰있을때
                for(int q = 0; q < n; q++) { // 지뢰저장해야한다.
                    for(int p = 0; p < n; p++) {
                        if(arr1[q][p] == '*') {
                            arr2[q][p] = '*';
                        }
                    }
                }
            }
        }
    }
    for(int k = 0; k < n; k++) {
        for(int o = 0; o < n; o++) {
            cout << arr2[k][o];
        }
        cout << "\n";
    }
    return 0;
}