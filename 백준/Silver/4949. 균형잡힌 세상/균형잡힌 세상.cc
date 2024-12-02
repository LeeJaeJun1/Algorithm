#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        string s;
        bool ans = true;
        stack<char> sta;
        getline(cin, s);
            if(s.length() == 1 && s[0] == '.') {
                break;
            }
            for(int i = 0; i < s.length(); i++) {
                    if (s[i] == '(' || s[i] == '[') {
                        sta.push(s[i]);
                    }
                    if (s[i] == ')') {
                        if(sta.empty() || sta.top() == '[') {
                            ans = false;
                        }
                        else{
                            sta.pop();
                        }
                    }
                    if(s[i] == ']') {
                        if(sta.empty() || sta.top() == '(') {
                            ans = false;
                        }
                        else{
                            sta.pop();
                        }
                    }
            }
        if(sta.empty() && ans) {
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}