#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string,int> m ;
    int book; string name;
    cin >> book;
    for(int i = 0; i < book; i++) {
        cin >> name;
        m[name]++;
    }

    int max = 0;
    string Max;
    for(auto x : m) {
        if(x.second > max) {
            max = x.second;
            Max = x.first;
        }
    }
    cout << Max << "\n";
}