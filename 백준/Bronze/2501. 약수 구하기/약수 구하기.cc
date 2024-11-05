#include<iostream>
using namespace std;

// p와 q가 있을 때, p를 q로 나누었을 때 나머지가 0이면 q는 p의 약수
// 두 자연수 N과 K가 주어질 때, N의 약수들 중 k번쨰로 작은 수 출력
// 약수의 개수가 k보다 적어서 k번째 존재하지 않으면 0을 출력

int main() {
    int n,k;
    int arr1[100] = {0};
    cin >> n >> k;
    int count = 1;
    int total = 0;


    for(int i = 1; i<=n; i++) {
        if(n % i == 0) {
            arr1[count] =i;
            count++;
            total++;
        }
    }

    if(total>=k) {
        cout << arr1[k];
    }
    else{
        cout << "0";
    }
}