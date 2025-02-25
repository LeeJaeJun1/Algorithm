#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    string str;
    int count = 0;
    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(' && str[i+1] == ')') {
            count += s.size();
            i += 1;
        }
        else if(str[i] == '(') {
            s.push(i);
        }
        else if(str[i] == ')') {
            count += 1;
            s.pop();
        }
    }
    cout << count << endl;
}