#include<iostream>
using namespace std;

int main() {
    string s;
    string result = "zzzzzzzzzz";
    cin >> s;

    int len = s.length();

    for(int i = 0; i < len - 2; i++) {
        for(int j = i + 1; j < len-1; j++) {
            string tmp;

            for(int k = i; k >= 0; k--) {
                tmp += s[k];
            }

            for(int a = j; a > i; a--) {
                tmp += s[a];
            }

            for(int b = len-1; b > j; b--) {
                tmp += s[b];
            }

            if(result > tmp) {
                result = tmp;
            }
        }
    }
    cout << result;
}