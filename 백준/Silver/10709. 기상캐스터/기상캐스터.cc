#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,w; string status;
    int weather[101][101] = {}; // 0으로 모두 초기화
    cin >> h >> w;

    for(int i = 0; i < h; i++) {
        cin  >> status;
        for(int j = 0; j < w; j++) {
            if(status[j] == '.') {
                weather[i][j] = -1;
            }
        }
    }

    for(int a = 0; a < h; a++) {
        for(int b = 0; b < w; b++) {
            if(weather[a][b] == 0) {
                int count = 0;
                while(weather[a][b+1] == -1) {
                    weather[a][b+1] = ++count;
                    b++;
                }
            }
        }
    }

    for(int c = 0; c < h; c++) {
        for(int d = 0; d < w; d++) {
            cout << weather[c][d] << " ";
        }
        cout << "\n";
    }
}