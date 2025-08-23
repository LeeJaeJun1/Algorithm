#include<iostream>
#include<algorithm>
using namespace std;

int ww[101];
int vv[101];
int price[101][100001] = {0,}; // 몇번째 물건까지인지 넣고 가치가 얼마인지

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num, weight;
    cin >> num >> weight;

    for(int i = 1; i <= num; i++) {
        cin >> ww[i] >> vv[i];
    }
    // 무게 , 가치
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= weight; j++) {
            if(j < ww[i]) { // 무게가 더 크기 때문에 넣지 못함.
                price[i][j] = price[i-1][j]; // 그 전까지 한거
            }
            else { // 물건이 들어갈 수 있는 경우 , 안넣었을 때 넣었을 떄
                price[i][j] = max(price[i-1][j], price[i-1][j - ww[i]] + vv[i]);
            }

        }
    }
    cout << price[num][weight];
}