#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    // 상근이가 먼저 시작 1 1 1 1 1 3
    if(N%2==0) {
        cout << "CY";
    }
    else{
        cout << "SK";
    }
    return 0;
}