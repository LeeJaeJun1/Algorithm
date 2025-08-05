#include<iostream>
#include<algorithm>
using namespace std;

// next_permutation , 총 원소의 개수 입력 오름차순 정렬 후 호출 순열 출력
// do - while 문을 사용해야한다. do에서 값 넣어주고, while에서 재 정렬

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 최대 8개 되게 작다.
    // 배열에 들어있는 수 순서 적절히 바꿈. C는 중복 제한이라 P를 써야한다고 생각

    int n,final = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    // next_permutation 사용해서 모든 경우의 수 구하면서
    // 계속 돌리고 합 구하면서 더 크면 바꿔본다.
    do {
        int sum = 0;
        for(int i = 1; i < n; i++) {
            sum += abs(arr[i] - arr[i-1]);
        }
        final = max(sum, final);
    }while(next_permutation(arr, arr+n));

    cout << final << "\n";
}