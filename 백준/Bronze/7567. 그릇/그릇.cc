#include<iostream>
#include<stack>
using namespace std;

int main() {
    // )바닥에 놓인 상태 - 10cm , ) 거꾸로 놓인 상태, 같은 방향 포개면 5증가, 처음 10
    // (((( 25cm,
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int total = 0;
    stack<int> sta;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(sta.empty()) {
            sta.push(s[i]);
            total+=10;
            continue;
        }

        if(sta.top() == s[i]) {
            total += 5;
            sta.push(s[i]);
        }
        else {
            total += 10;
            sta.push(s[i]);
        }
    }
    cout << total << "\n";
}