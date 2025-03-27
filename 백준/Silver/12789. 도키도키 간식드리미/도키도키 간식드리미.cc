#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main() {
    int n,pro;
    stack<int> sta;
    queue<int> qu;
    cin >> n;
    int current = 1;

    for(int i = 0; i < n; i++) {
        cin >> pro;
        qu.push(pro);
    }
    while(!qu.empty()) {
        if(current == qu.front()) {
            current++;
            qu.pop();
        }
        else if(qu.front() > current) {
            if(sta.size() != 0 && sta.top() == current) {
                current++;
                sta.pop();
            }
            else {
                sta.push(qu.front());
                qu.pop();
            }
        }
    }
    bool able = true;
    while(able && sta.size() != 0) {
        if(current == sta.top()) {
            current++;
            sta.pop();
        }
        else{
            able = false;
        }
    }
    if(able) {
        cout << "Nice" << "\n";
    }
    else{
        cout << "Sad\n";
    }
}