#include<iostream>
using namespace std;

int main() {
    string s;
    while(true) {
        getline(cin, s); // 공백까지 모두 받기 위해 getline 사용
        if(s=="") {
            break;
        }
        cout << s << endl;
    }
}