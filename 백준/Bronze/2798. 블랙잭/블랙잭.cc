#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int card = 0;
    int max = 0;
    int arr1[n];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int a = 0; a < n-2; a++) {
        for(int b = a+1; b < n-1; b++) {
            for(int c = b+1; c < n; c++) {
                card = arr1[a] + arr1[b] + arr1[c];
                    if (card <= m && max < card) {
                        max = card;
                    }
                }
            }
        }
    cout << max;
}