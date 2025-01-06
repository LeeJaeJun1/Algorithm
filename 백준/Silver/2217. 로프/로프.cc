#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N,w;
    int arr[100000];
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> w;
        arr[i] = w;
    }
    sort(arr, arr+N);

    int sum = arr[N-1]; // 가장 큰 로프 하나만 이용했을 때
    for(int j = 0; j < N; j++) {
        if(arr[j] * (N-j) > sum) {
            sum = arr[j] * (N-j);
        }
    }
    cout << sum << endl;
    return 0;
}