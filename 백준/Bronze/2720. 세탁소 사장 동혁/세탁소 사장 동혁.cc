#include<iostream>
using namespace std;

int main() {
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    
    int T , C; // T: 테스트 케이스, C:거스름돈

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> C;

        cout << C / q << " ";
        C %= q;
        cout << C / d << " ";
        C %= d;
        cout << C / n << " ";
        C %= n;
        cout << C / p << " ";
        C %= p;
    }
}