#include<iostream>
using namespace std;

long gcd(long a, long b) {
    if(a % b == 0) {
        return b;
    }
    return gcd(b%a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long arr1[200];
    long test, num;
    cin >> test;
    while(test--) {
        long total = 0;
        cin >> num;
        for(int i = 0; i < num; i++) {
            cin >> arr1[i];
        }
        // 3개 일 때, 1-2, 1-3, 2-3 비교

        for(int a = 0; a < num; a++) {
            for(int b = a + 1; b < num; b++) {
                total += gcd(arr1[a], arr1[b]);
            }
        }
        cout << total << "\n";
    }

}