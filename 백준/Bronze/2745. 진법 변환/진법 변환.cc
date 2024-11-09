#include<iostream>
using namespace std;

int main() {
    int total = 0;
    int b;
    string n;
    cin >> n >> b;

    for(int i = 0; i < n.length(); i++) {
        if('0' <= n[i] && n[i] <= '9') {
            total = total * b + (n[i] - '0');
        }
        else{
            total = total * b + (n[i] - 'A' + 10);
        }
    }
    cout << total;
}