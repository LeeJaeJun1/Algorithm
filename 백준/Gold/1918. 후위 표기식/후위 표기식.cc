#include<iostream>
#include<stack>
using namespace std;

int Prior(char str) {
    if(str=='*' || str=='/') return 2;
    if(str=='+' || str=='-') return 1;
    return 0;
}

int main() {
    stack<char> s;
    string com;
    cin >> com;
    for(int i = 0; i < com.size(); i++) {
        if(com[i] >= 'A' && com[i] <= 'Z') {
            cout << com[i];
        }
        else if(com[i] == '(') {
            s.push(com[i]);
        }
        else if(com[i] == ')') {
            while(!s.empty() && s.top() != '(') {
                cout << s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty() && Prior(s.top()) >= Prior(com[i])) {
                cout << s.top();
                s.pop();
            }
            s.push(com[i]);
        }
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}