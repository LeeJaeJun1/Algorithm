#include<iostream>
using namespace std;

int bingo[5][5];
int game[5][5] = {0,};


int check() {
    int co = 0;
    for(int i = 0; i < 5; i++) {
        if(game[0][i] && game[1][i] && game[2][i] && game[3][i] && game[4][i]) {
            co+=1;
        }
        if(game[i][0] && game[i][1] && game[i][2] && game[i][3] && game[i][4]) {
            co+=1;
        }
    }
    if(game[0][0] && game[1][1] && game[2][2] && game[3][3] && game[4][4]) {
        co += 1;
    }
    if(game[0][4] && game[1][3] && game[2][2] && game[3][1] && game[4][0]) {
        co += 1;
    }
    return co;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> bingo[i][j];
        }
    }
    for(int k = 0; k < 25; k++) {
        cin >> num;
        int cnt = 0;
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 5; b++) {
                if (bingo[a][b] == num) {
                    game[a][b] = 1;
                }
            }
        }
        cnt += check();
        if (cnt >= 3) {
            cout << k + 1;
            break;
        }
    }
}