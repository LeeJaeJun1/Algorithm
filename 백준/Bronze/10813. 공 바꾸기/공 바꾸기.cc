#include<iostream>
#include<array>
using namespace std;

// N개 바구니, 1번부터 N번까지 번호 매겨짐.
// M번 공을 바꾼다. 바구니 2개 선택 후, 공을 서로 교환
// M개의 줄에 걸쳐 방법 주어짐. i번 바구니와 j번 바구니 교환

int main(){
    int N,M;
    int i,j;
    int arr1[100];
    cin >> N >> M; // N과 M 주어짐

    for(int a = 1; a <= N; a++) {
        arr1[a] = a; // 각 바구니가 각자의 번호 가진다.
    }
    
    for(int c = 1; c <= M; c++) {
            cin >> i >> j;

            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
        }

    for(int k = 1; k <= N; k++) {
        cout << arr1[k] << " ";
    }
}