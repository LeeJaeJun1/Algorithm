#include <iostream>
#include <stack>
#include <sstream> 

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int total, num, number;
    cin >> total;
    
    stack<int> stk;
    stringstream result;  

    for (int i = 0; i < total; i++) {
        cin >> number;

        if (number == 1) {
            cin >> num;
            stk.push(num);
        } 
        else if (number == 2) {
            if (stk.empty()) {
                result << "-1\n";
            } else {
                result << stk.top() << "\n";
                stk.pop();
            }
        } 
        else if (number == 3) {
            result << stk.size() << "\n";
        } 
        else if (number == 4) {
            if (stk.empty()) {
                result << "1\n";
            } else {
                result << "0\n";
            }
        } 
        else {
            if (!stk.empty()) {
                result << stk.top() << "\n";
            } else {
                result << "-1\n";
            }
        }
    }

 
    cout << result.str();

    return 0;
}
