#include<iostream>
#include<cmath>
using namespace std;

// n <= 123,456

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool check[10001] = {false};

    for(int i = 2; i <= sqrt(10000); i++) {
        if(check[i]){
            continue;
        }
        for(int j = 2; i * j <= 10000; j++) {
            check[i*j] = true;
        }
    }

    int test, n;
    cin >> test;

    // 2보다 큰 짝수 n 주어졌을 때 , 두 소수의 합으로 나타낼 수 있다.
    // 두 소수의 차이가 가장 작은 것 출력
    while(test--) {
        cin >> n;
        for(int i = n/2; i >= 2; i--) {
            if(!check[i] && !check[n-i]) {
                cout << i << " " << n - i << "\n";
                break;
            }
        }
    }
}