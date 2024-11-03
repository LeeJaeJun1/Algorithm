#include<iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    int num = 2;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        num = num * 2 - 1;
        total = (num * num);
    }

    cout << total;
}