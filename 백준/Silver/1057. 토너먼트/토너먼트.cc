#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // N이 홀수면 마지막 번호 자동 진출
    // 다음 라운드에서는 다시 1번부터
    int N, knumber, lnumber, total = 0;
    cin >> N >> knumber >> lnumber;

    // 16 - 1/2 3/4 5/6 7/8 9/10 11/12 13/14 15/16
    // 8 - 4 - 2 - 1
    while(knumber != lnumber) {
        knumber -= knumber / 2;
        lnumber -= lnumber / 2;
        total++;
    }
    cout << total;
}