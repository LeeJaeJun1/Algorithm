#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string rever(string s) {

    string fs = "";
    for(int j = s.length()-1; j >= 0; j--) {
        fs += s[j];
    }
    return fs;
}

int main() {
    // int -> string = to_string
    // string -> int = stoi 함수
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x,y;
    cin >> x >> y;
    int rx = stoi(rever(x));
    int ry = stoi(rever(y));
    int total = rx + ry;
    cout << stoi(rever(to_string(total))) << "\n";
}