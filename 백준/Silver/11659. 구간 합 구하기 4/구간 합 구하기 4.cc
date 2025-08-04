#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,n1,n2;
    cin >> n >> m;
    int arr[n+1];
    int prefix[n+1];


    for(int i = 1; i <= n; i++) {
        cin >> arr[i]; // 5 4 3 2 1
        prefix[i] = prefix[i-1] + arr[i];
    }

    while(m--) {
        cin >> n1 >> n2;
        cout << prefix[n2] - prefix[n1-1] << "\n";
    }
}