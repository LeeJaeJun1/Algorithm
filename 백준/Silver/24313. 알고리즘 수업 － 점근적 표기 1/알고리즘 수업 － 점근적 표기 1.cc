#include<iostream>
using namespace std;

int main() {
    bool check = false;
    // f(n) = a1 * n + a0
    // n >= n0일 때, f(n) <= c * g(n)

    // a1, a0, c, n0

    int a1,a0,c,n0,f;

    cin >> a1 >> a0 >> c >> n0;

    for(int i = n0; i <= 100; i++) {
        f = a1 * i + a0;
        if(f > c * i) {
            cout << "0\n";
            check =  true;
            break;
        }
    }
    if(!check) {
        cout << "1\n";
    }

}