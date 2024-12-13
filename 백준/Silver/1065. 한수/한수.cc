#include<iostream>
using namespace std;

int main() {
    int N; cin >> N; // 1<=N<=1000
    int count = 0;

    if( N < 100) {
        count = N;
    }

    else {
        count = 99;
        for (int i = 100; i <= N; i++) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;

            if ((a - b) == (b - c)) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}