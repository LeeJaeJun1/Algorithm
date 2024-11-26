#include<iostream>
#include<stack>
using namespace std;

string checkvps(string s2) {
    stack<char> s1;
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] == '(') {
            s1.push('(');
        }
        else{
            if(s1.empty()) {
                return "NO";
            }
            else {
                s1.pop();
            }
        }
    }
    if(s1.empty()) {
        return "YES";
    }
    else{
        return "NO";
    }
}

int main() {
    int t;
    string vps;
    cin >> t;
    for(int j = 0; j < t; j++) {
        cin >> vps;
        cout << checkvps(vps) << endl;
    }
}