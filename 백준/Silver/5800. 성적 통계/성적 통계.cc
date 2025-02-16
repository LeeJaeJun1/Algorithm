#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int k,N,gap;
    int arr1[110];
    cin >> k; // 반의 수
    for(int i = 1; i <= k; i++) {
        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> arr1[j];
        }
        sort(arr1, arr1+N, greater<int>());

        int max = 0;
        for(int a = 0; a < N-1; a++) {
            if(abs(arr1[a] - arr1[a+1]) > max) {
                max = abs(arr1[a] - arr1[a+1]);
            }
            gap = max;
        }
        cout << "Class " << i << endl;
        cout << "Max " << arr1[0] << ", Min " << arr1[N-1] << ", Largest gap " << gap << endl;
    }
}