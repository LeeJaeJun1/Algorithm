#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool od = false;
    int number, odd= 1, even = 1;
    for(int i = 0; i < 3; i++) {
        cin >> number;
        if(number % 2 != 0) {
            odd *= number;
            od = true;
        }
        even *= number;
    }
    if(od) {
        cout << odd << "\n";
    }
    else {
        cout << even << "\n";
    }
}