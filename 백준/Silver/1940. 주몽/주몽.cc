#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, M, a;
    int arr1[20000];
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> a;
        arr1[i] = a;
    }
    sort(arr1, arr1 + N);

    int s = 0; int e = N-1; int total = 0;
    while(s < e) {
        if(arr1[s] + arr1[e] == M) {
            total++;
            s++;
            e--;
        }
        else if(arr1[s] + arr1[e] < M) {
            s++;
        }
        else if(arr1[s] + arr1[e] > M) {
            e--;
        }
    }
    cout << total;
    return 0;
}