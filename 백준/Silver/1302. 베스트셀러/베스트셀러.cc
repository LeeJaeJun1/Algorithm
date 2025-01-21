#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string book;
    map<string, int> m;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> book;
        m[book]++;
    }

    string title;
    int max  = 0;
    for(auto x : m) {
        if(x.second > max) {
            max = x.second;
            title = x.first;
        }
    }
    cout << title;
}