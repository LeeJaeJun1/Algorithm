#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,num;
    string com;
    queue<int> q1;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> com;
        if(com == "push") {
            cin >> num;
            q1.push(num);
        }
        else if(com == "pop") {
            if(q1.empty()) {
                cout << "-1" << "\n";
            }
            else{
                cout << q1.front() << "\n";
                q1.pop();
            }
        }
        else if(com == "size") {
            cout << q1.size() << "\n";
        }
        else if(com == "empty") {
            if(q1.empty()) {
                cout << "1" << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }
        else if(com == "front") {
            if(q1.empty()) {
                cout << "-1" << "\n";
            }
            else{
                cout << q1.front() << "\n";
            }
        }
        else if(com == "back") {
            if(q1.empty()) {
                cout << "-1" << "\n";
            }
            else{
                cout << q1.back() << "\n";
            }
        }
    }
    return 0;
}