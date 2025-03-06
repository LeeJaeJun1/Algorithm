#include<iostream>
using namespace std;

// N에서 3을 빼면서, 5의 배수가 되면 나눈다.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int total = 0;
    while(true) {
        if(n % 5 == 0) {
            total += n / 5;
            break;
        }
        else if(n < 0) {
            total = -1;
            break;
        }
        n-=3;
        total++;
    }
    cout<< total << endl;
}