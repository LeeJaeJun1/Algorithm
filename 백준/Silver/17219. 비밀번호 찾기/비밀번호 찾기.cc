#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int save, find;
    string site,pass;
    map<string,string> m;
    cin >> save >> find;

    while(save--) {
        cin >> site >> pass;
        m[site] = pass;
    }

    while(find--) {
        cin >> site;
        cout << m[site] << "\n";
    }
}