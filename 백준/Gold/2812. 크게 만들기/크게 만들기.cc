#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    string s, finish;
    cin >> n >> k >> s;

    for(int i = 0; i < s.length(); i++) {
        while(k && !finish.empty() && s[i] > finish.back()) {
            finish.pop_back();
            k--;
        }
        finish.push_back(s[i]);
    }

    while(k--) {
        finish.pop_back();
    }
    
    cout << finish;
}