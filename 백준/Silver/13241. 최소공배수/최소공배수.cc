#include<iostream>
using namespace std;

int Findgcd(long long int a, long long int b) {
    if(b==0) {
        return a;
    }
    return Findgcd(b, a%b);
}

int main() {
    long long int a,b;
    cin >> a >> b;
    long long int num = Findgcd(a,b);
    if(num==1) {
        cout << a * b;
    }
    else{
        cout << num * (a / num) * (b/num);
    }
}