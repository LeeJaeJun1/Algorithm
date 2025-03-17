#include<iostream>
using namespace std;

int main() {
    // 1번 : i번째 전구상태 x로 변경 / 2번 : l번째부터 r번째 변경
    // 3번 : l번째부터 r번째까지 전구 끈다 / 4번 : l번째부터 r번째까지 전구 킨다.
    // a는 a번째 명령어 의미, b,c는 a가 1인 경우 i x / 2,3,4인 경우 l r
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M,a,b,c; // 전구의 개수, 명령어 개수
    cin >> N >> M;
    int arr[N+1];
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    while(M--) {
        cin >> a >> b >> c;
        if(a==1) {
            arr[b] = c;
        }
        else if(a==2) {
            for(int i = b; i <= c; i++) {
                if(arr[i] == 0) {
                    arr[i] = 1;
                }
                else{
                    arr[i] = 0;
                }
            }
        }
        else if(a==3) {
            for(int i = b; i<=c; i++) {
                arr[i] = 0;
            }
        }
        else{
            for(int i = b; i <= c; i++) {
                arr[i] = 1;
            }
        }
    }
    for(int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}