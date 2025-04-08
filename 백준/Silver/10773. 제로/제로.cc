#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> sta;
    int money, num;
    int total = 0;

    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> money;
        if(money != 0) {
            sta.push(money);
        }
        else {
            sta.pop();
        }
    }
    while(!sta.empty()) {
        total += sta.top();
        sta.pop();
    }
    cout << total << "\n";
}