#include<iostream>
using namespace std;

int gcd(long a, long b) {
    if(a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long test,a,b;
    cin >> test;
    while(test--) {
        cin >> a >> b;
        cout << (a / gcd(a,b)) * (b / gcd(a,b)) * gcd(a,b) << "\n";
    }
}