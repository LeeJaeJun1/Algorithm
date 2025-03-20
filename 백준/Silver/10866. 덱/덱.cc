#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> dq;

    int n;
    cin >> n;
    
    string command;
    int command_num;
    
    for(int i=0;i<n;i++) {
        cin >> command;
        
        if (command == "push_front") {
            cin >> command_num;
            dq.push_front(command_num);
        } else if (command == "push_back") {
            cin >> command_num;
            dq.push_back(command_num);
        } else if (command == "size") {
            cout << dq.size() << endl;
        } else if (command == "empty") {
            cout << dq.empty() << endl;
        } else if (dq.empty()) {
            cout << -1 << endl;
        } else if (command == "pop_front") {
            cout << dq.front() << endl;
            dq.pop_front();
        } else if (command == "pop_back") {
            cout << dq.back() << endl;
            dq.pop_back();
        } else if (command == "front") {
            cout << dq.front() << endl;
        } else if (command == "back") {
            cout << dq.back() << endl;
        }
    }
    
    return 0;
}