#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int ans = 0; int sum;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum = 0;
        for(int j = i; j <= n; j++) {
            sum += j;
            if(sum == n) {
                ans += 1;
                break;
            }
            else if(sum > n) {
                break;
            }
        }
    }
    cout << ans << "\n";
}