#include<iostream>
#include<stack>
using namespace std;

int Prior(char s) {
    if(s=='*' || s=='/') return 2;
    if(s=='+' || s=='-') return 1;
    return 0;
}

int main() {
    string s;
    cin >> s;
    stack<char> sta;
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
            while(!sta.empty() && Prior(sta.top()) >= Prior(s[i])) {
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