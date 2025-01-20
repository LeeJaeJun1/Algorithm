#include<iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    if(n%5 == 0) {
        cout << n / 5;
    }
    else {
        while(n > 0) {
            n -= 2;
            total++;
            if(n % 5 == 0) {
                total += n / 5;
                cout << total;
                break;
            }

        }
    }
    if(n < 0) {
        cout << -1;
    }

}