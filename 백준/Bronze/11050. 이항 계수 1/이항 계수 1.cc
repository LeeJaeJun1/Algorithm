#include<iostream>
using namespace std;

int main() {
    // 이항계수는 nCk
    int n,k;
    int mom = 1; int son = 1;
    cin >> n >> k;
    int kk = k;
    while(k!=0) {
        mom *= k;
        k--;
    }
    for(int i = 0; i < kk; i++) {
        son *= n;
        n--;
    }
    cout << son / mom;
}