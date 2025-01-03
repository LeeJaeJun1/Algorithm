#include<iostream>
using namespace std;

int main() {
    int cnt = 0;
    int N; cin >> N;
    for(int i = 1; i <= N; i++) {

        if(i % 5 == 0) {
            cnt++;
            if(i % 25 == 0) {
                cnt++;
            }
            if(i % 125 == 0) {
                cnt++;
            }
        }
    }
    cout << cnt;
}