#include<iostream>
using namespace std;

int main() {
    long long s;
    cin >> s;
    long long total = 0;
    for(int i = 1; i <= s; i++) {
        total += i;
        if(total > s) {
            total = i - 1;
            break;
        }
    }
    cout << total;
}