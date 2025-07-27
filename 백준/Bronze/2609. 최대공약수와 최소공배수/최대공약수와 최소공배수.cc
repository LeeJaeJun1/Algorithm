#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    }
    return gcd(b%a, a);
}

int lcm(int a, int b) {
    return a * b / gcd(a,b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << "\n" << lcm(a,b);
}