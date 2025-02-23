#include<iostream>
using namespace std;

int check(long a, long b) {
    if(a % b == 0) {
        return b;
    }
    return check(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n,a,b,ta,tb; cin >> n;
    long total = 0;

    while(n--) {
        cin >> a >> b;
        ta = (a / check(a,b));
        tb = (b / check(a,b));
        total = check(a,b) * ta * tb;
        cout << total << endl;
    }
    return 0;
}