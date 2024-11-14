#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    int total = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        int Bool = 1;
        for(int j = 0; j < s.length(); j++) {
            for(int k = j + 1; k < s.length(); k++) {
                if(s[k-1] != s[j] && s[k] == s[j]) {
                    Bool = 0;
                    break;
                }
            }
            if(Bool == 0)
                break;
        }
        if(Bool == 1)
            total++;
    }
    cout << total;
}