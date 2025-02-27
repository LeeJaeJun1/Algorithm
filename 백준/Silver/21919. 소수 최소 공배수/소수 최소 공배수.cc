#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(long long a) {
    if(a < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

long long gcd(long a, long long b) {
    if(a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

long long lcd(long long a, long long b) {
    return a * b / gcd(a,b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,number;
    long long total = 1;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        cin >> number;
        if(isPrime(number)) {
            total = lcd(total, number);
        }
    }
    if(total==1) {
        cout << -1 << "\n";
    }
    else{
        cout << total << endl;
    }
}