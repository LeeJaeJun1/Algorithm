#include<iostream>
using namespace std;

bool Prime(int a) {
    if(a < 2) {
        return false;
    }
    for(int i = 2; i * i <= a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n,total = 0;
    int min = 10000;
    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        if(Prime(i)) {
            if(min > i) {
                min = i;
            }
            total += i;
        }
    }
    if(total != 0) {
        cout << total << "\n" << min;
    }
    else {
        cout << "-1\n";
    }
}