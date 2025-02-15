#include<iostream>
using namespace std;

long long a,b,c;

long long fun(long long a, long long b) {
    if(b == 0) return 1;
    if(b==1) return a % c;

    long long temp = fun(a, b/2);

    if(b%2==0) {
        return (temp*temp) % c;
    }
    else{
        return (temp * temp) % c * a % c;
    }
}

int main() {
    cin >> a >> b >> c;
    cout << fun(a,b);
}