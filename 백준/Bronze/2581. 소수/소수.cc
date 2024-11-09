#include<iostream>
using namespace std;

bool Prime(int num) {
    if(num==1) {
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
    int m,n;
    int k = 0;
    int total = 0;
    cin >> m >> n;
    int arr1[n-m+1];

    for(int j = m; j <= n; j++) {
        if(Prime(j)) {
            total += j;
            arr1[k] = j;
            k++;
        }
    }

    if(total == 0) {
        cout << "-1";
    }
    else {
        cout << total << endl;
        cout << arr1[0];
    }
    return 0;
}
