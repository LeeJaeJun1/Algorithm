#include<iostream>
using namespace std;

int main() {
    unsigned long long arr1[100];
    arr1[0] = 0; arr1[1] = 1; arr1[2] = 1; arr1[3] = 1;

    for(int i = 4; i < 101; i++) {
        arr1[i] = arr1[i-2] + arr1[i-3];
    }

    int T; cin >> T;
    
    while(T--) {

        int N; cin >> N;
        cout << arr1[N] << endl;
    }
    return 0;
}