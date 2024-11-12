#include<iostream>
using namespace std;

int main() {
    int n,b;
    string r;
    cin >> n >> b;

    while(n>0) {
        int t = n % b;
        if(t >= 0 && t <= 9) {
            r += (t + '0');
        }
        else{
            r+= (t - 10 + 'A');
        }
        n /= b;
    }

    for(int i = r.length()-1; i >= 0; i--) {
        cout << r[i];
    }
}