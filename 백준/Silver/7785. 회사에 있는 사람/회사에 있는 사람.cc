#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,string,greater<>> com;
    string name,sta;
    int num;
    cin >> num;

    while(num--) {
        cin >> name >> sta;
        com[name] = sta;
    }
    for(auto x : com) {
        if(x.second == "enter") {
            cout << x.first << "\n";
        }
    }
}