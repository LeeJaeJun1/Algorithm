#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    // 원래 주려고 생각했던 돈 - (받은 등수 - 1)
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long num,total = 0,money;
    long long tip[100001];
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> tip[i];
    }
    sort(tip, tip+num,greater<int>());
    for(int j = 0; j < num; j++) {
        money = (tip[j] - (j+1 - 1));
        if(money < 0) {
            continue;
        }
        else {
            total += money;
        }
    }
    cout << total << "\n";
}