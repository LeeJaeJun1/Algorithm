#include<iostream>
#include<algorithm>
using namespace std;

// next_permutation : 총 원소의 개수 입력 오름차순 정렬 후 호출 순열 출력

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,final = 0;
    cin >> n;
    int arr[10];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    do{
        int sum = 0;
        for(int i = 1; i < n; i++) {
            sum += abs(arr[i] - arr[i-1]);
        }
        final = max(final, sum);
    }
    while(next_permutation(arr, arr+n));

    cout << final << "\n";
}