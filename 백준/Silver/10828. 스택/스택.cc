#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n, num;
    stack<int> stk;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == "push") {
            cin >> num;
            stk.push(num);
        }
        else if(s == "pop") {
            if(stk.empty()) {
                cout << "-1" << endl;
            }
            else{
                cout << stk.top() << endl;
                stk.pop();
            }

        }
        else if(s == "size") {
            cout << stk.size() << endl;
        }
        else if(s == "empty") {
            if(stk.empty()) {
                cout << "1" << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
        else if(s=="top") {
            if(stk.empty()) {
                cout << "-1" << endl;
            }
            else{
                cout << stk.top() << endl;
            }
        }
    }
    return 0;
}