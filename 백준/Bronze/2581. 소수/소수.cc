#include<iostream>
using namespace std;

// 소수는 1과 자기 자신만을 약수로 가지는 수
// m <= x <= n 값 중에서, 소수의 합과 최솟값 찾기

bool check(int a) {
    if(a==1) {
        return false;
    }
    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m,n;
    int total = 0;  int min = 10000;
    cin >> m >> n;
    for(int i = m; i <= n; i++) {
        if(check(i)) {
            total += i;
            if(min > i) {
                min = i;
            }
        }
    }

    if(total == 0)
        cout << -1 << endl;

    else
        cout << total << "\n" << min << "\n";
    
}