#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,X;
    double count = 0, total = 0; // 평균
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> X;

    for(int j = 0; j < N; j++) {
        if(gcd(arr[j],X) == 1) {
            count++;
            total += arr[j];
        }
        else{
            continue;
        }
    }
    cout << total / count;
}