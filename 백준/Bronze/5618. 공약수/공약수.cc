#include<iostream>
using namespace std;

int main() {
    int n;
    int arr1[4];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    if(n==2) {
        for(int j = 1; j <= 100000000; j++) {
            if(arr1[0] % j == 0 && arr1[1] % j == 0) {
                cout << j << endl;
            }
        }
    }

    else if(n==3) {
        for(int j = 1; j <= 100000000; j++) {
            if(arr1[0] % j == 0 && arr1[1] % j == 0 && arr1[2] % j == 0) {
                cout << j << endl;
            }
        }
    }
}