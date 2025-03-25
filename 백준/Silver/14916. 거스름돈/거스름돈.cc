#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int total = 0;
    while (n > 0) {
        if (n % 5 == 0) {
            total += n / 5;
            break;
        }
        n -= 2;
        total += 1;
    }

    if (n < 0) {
        cout << "-1" << "\n";
    }
    else {
        cout << total << "\n";
       
    }
}