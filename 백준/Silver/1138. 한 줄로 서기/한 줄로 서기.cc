#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,h; cin >> n;
    int arr1[11] = {0};
    for(int i = 0; i < n; i++) {
        cin >> h;
        for(int j = 0; j < n; j++) {
           if(h==0 && arr1[j] == 0) { // 앞에 키 큰 사람 자리가 마련되어있고, 내 자리 비었을 때 앉기
               arr1[j] = i + 1;
               break;
           }
           else if(arr1[j] == 0) { // 앞에 키 큰 사람이 남아있을 때
               h--;
           }
        }
    }
    for(int j = 0; j < n; j++) {
        cout << arr1[j] << " ";
    }
}