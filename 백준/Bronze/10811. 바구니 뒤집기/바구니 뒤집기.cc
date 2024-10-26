#include<iostream>
using namespace std;

// 첫번째 줄에 N(총 바구니 개수), M(바꾸는 횟수)
// i, j i번 부터 j번 바구니를 역순으로 변경한다.

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int N, M;
    int i, j;
    int arrBucket[100];
    cin >> N >> M;

    for (int m = 1; m <= N; m++) {
        arrBucket[m] = m;
    }

    for (int k = 1; k <= M; k++) {
        cin >> i >> j;

        if (i != j)  {
            for (int a = 0; a <= (j - i) / 2; a++) {
                swap(arrBucket[i + a], arrBucket[j-a]);
            }
        }

    }
    for (int b = 1; b <= N; b++) {
        cout << arrBucket[b] << " ";
    }
}