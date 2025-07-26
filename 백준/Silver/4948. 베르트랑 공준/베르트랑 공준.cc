#include<iostream>
#include<cmath>
using namespace std;

// n <= 123,456

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool check[246913] = {false};
    int n,count;

    for(int i = 2; i <= sqrt(246912); i++) {
        if(check[i]){
            continue;
        }
        for(int j = 2; i * j <= 246912; j++) {
            check[i*j] = true;
        }
    }

    while(true) {
        cin >> n;
        if(n==0) {
            break;
        }
        count = 0;
        for(int k = n+1; k <= 2 * n; k++) {
            if(!check[k]) {
                count++;
            }
        }
        cout << count << "\n";
    }
}