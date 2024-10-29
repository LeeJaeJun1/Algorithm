#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << ' ';
        }
        for(int k = 0; k < i + (i - 1); k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for(int l = n - 1; l > 0; l--) {
        for(int a = 0; a < n - l; a++) {
            cout << ' ';
        }
        for(int b = 0; b < l + (l - 1); b++) {
            cout << "*";
        }
        cout << "\n";
    }
}