#include<iostream>
using namespace std;

int Findgcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return Findgcd(b, a%b);
}

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int m = b * d;
    int n = a * d + b * c;

    int gcd = Findgcd(n,m);
    cout << n / gcd << " " << m / gcd;
}