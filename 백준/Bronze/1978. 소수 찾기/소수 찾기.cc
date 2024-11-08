#include<iostream>
using namespace std;

bool Prime(int num) { // 소수 구하는 함수
    if(num == 1) {
        return false;
    }
    
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n,m;
    cin >> n;
    int total = 0;
    for(int j = 1; j <= n; j++) {
        cin >> m;
        if(Prime(m)) {
            total++;
        }
    }
    cout << total;
}