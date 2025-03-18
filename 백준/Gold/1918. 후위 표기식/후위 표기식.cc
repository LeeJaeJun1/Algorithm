#include<iostream>
#include<stack>
using namespace std;

int getPriority(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> sta;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            cout << s[i];
        }
        else if(s[i] == '(') {
            sta.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!sta.empty() && sta.top() != '(') {
                cout << sta.top();
                sta.pop();
            }
            sta.pop();
        }
        else{
            while(!sta.empty() && getPriority(sta.top()) >= getPriority(s[i])) {
                cout << sta.top();
                sta.pop();
            }
            sta.push(s[i]);
        }
    }
    while(!sta.empty()) {
        cout << sta.top();
        sta.pop();
    }
}