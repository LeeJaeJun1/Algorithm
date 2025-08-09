#include<iostream>
#include<vector>
using namespace std;

int player[11][11];
bool visited[11];
int Max;

void search(int position, int maxx) {
    if(position==11) {
         Max = max(Max , maxx);
    }

    for(int i = 0; i < 11; i++) {
        if(!visited[i] && player[i][position] != 0) {
            visited[i] = true;
            search(position+1, maxx + player[i][position]);
            visited[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 11명의 선수가 각각의 포지션에서의 능력 0부터 100
    // 모든 선수의 포지션 정하는 프로그램, 각 선수는 능력치가 0인 포지션에 배치 못함
    // 모든 선수에게 적합한 포지션의 수는 최대 5개(능력치 0보다 크다)

    int test;
    cin >> test;

    while(test--) {
        Max = 0;
        for(int i = 0; i < 11; i++) {
            for(int j = 0; j < 11; j++) {
                cin >> player[i][j];
            }
        }
        search(0,0);
        cout << Max << "\n";
    }
}