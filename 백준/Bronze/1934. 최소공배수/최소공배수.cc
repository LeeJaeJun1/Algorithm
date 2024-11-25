#include<iostream>
using namespace std;

int Findgcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return Findgcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    int arrx[t];
    int arry[t];
    int gcd[t];
    for(int i = 0; i < t; i++) {
        cin >> arrx[i] >> arry[i];
        gcd[i] = Findgcd(arrx[i], arry[i]);
    }

    for(int j = 0; j < t; j++) {
        if(gcd[j] == 1) {
            cout << arrx[j] * arry[j] << endl;
        }
        else{
            cout << gcd[j] * (arrx[j] / gcd[j]) * (arry[j] / gcd[j]) << endl;
        }
    }
}