#include<iostream>
#include<vector>
using namespace std;

// N(총 바구니)과 M(몇 번 넣을지) 주어진다.
// i ~ j 까지 k번 넣는다.

int main() {
    int N,M;
    int i;
    int j;
    int k;

    cin >> N >> M;
    vector<int> v(100);

    for(int a = 1; a <= M; a++) {
        cin >> i >> j >> k;
        for(int b = i; b <= j; b++) {
            v[b] = k;
        }
    }

    for(int c = 1; c <= N; c++) {
        cout << v[c] << " ";
    }
    return 0;
}