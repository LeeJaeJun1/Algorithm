#include<iostream>
using namespace std;

int main() {
    int T; cin >> T;

    while(T--) {
        int n,m;
        int a = 1;
        int total = 1;
        cin >> n >> m;

        for(int i = m; i > m-n; i--) {
            total *= i;
            total /= a;
            a++;
        }
        cout << total << endl;
    }
    return 0;
}