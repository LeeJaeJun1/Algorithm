#include<iostream>
#include<stack>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; string s;
    cin >> t;
    while(t--) {
        stack<char> sta;
        bool isValid = true;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                sta.push(s[i]);
            }
            else{
                if(sta.empty()) {
                    cout << "NO" << "\n";
                    isValid = false;
                    break;
                }
                else{
                    sta.pop();
                }
            }
        }
        if(isValid) {
            if (sta.empty()) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
}