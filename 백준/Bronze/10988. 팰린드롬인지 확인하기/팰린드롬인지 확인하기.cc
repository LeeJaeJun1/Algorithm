#include<iostream>
using namespace std;

bool paildrone(string s) {
    for(int i = 0; i < s.length() /2 ; i++) {
            if(s[i] != s[s.length() - 1- i]) {
                return false;
            }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if(paildrone(s)) {
        cout << "1";
    }
    else{
        cout << "0";
    }
}