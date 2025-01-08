#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N; cin >> T;
    while(T--) {
        int total = 0;
        cin >> N;
        if(N < 5) {
            cout << total << "\n";
            continue;
        }
        for(int i = 5; i <= N; i *= 5) {
            total += N / i;
        }
        cout << total << "\n";
    }
}