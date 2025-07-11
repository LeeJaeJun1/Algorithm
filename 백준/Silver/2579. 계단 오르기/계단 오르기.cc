#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    // 한번에 한 계단, 두 계단
    // 연속된 세 개 안됨, 마지막 반드시
    // 마지막 반드시 밟아야하니까 마지막부터 시작하면 되지 않을까...
    // 한칸 내려가고, 한칸 점프 or 한칸 점프
    // 도착에서 아래, 아래아래 비교하면서 선택

    ios::sync_with_stdio(0);
    cin.tie(0);


    int arr[301]; int Max[301];
    int num, total = 0;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        cin >> arr[i];
    }

    // 1 2 3 4 5 6  , 1246 / 1356 / 2356

    // arr[1] , arr[2], arr[3] 비교하고 arr[4], arr[5], arr[6] 비교하고
    // 근데 num이 홀수면.. ㅋㅋ , a(n+1) = a(n) + f(n)
    // 12,23,13 , 최댓값을 저장하면서 움직인다. 그럼 새로운 배열을 또 만들어? 어딘가에 저장해야하는데,,,
    // 그니까 최댓값 저장하는 배열 따로 만들고 그걸 점화식 돌린다
    // 최종 도착 신경쓰지 말고 그냥 a번째라면 최댓값 저장하면서 계속 돌린다.

    // if(arr[1] + arr[2] > arr[2] + arr[3])
    // 특이 케이스 계단 1개 2개부터 처리
    Max[1] = arr[1];
    Max[2] = arr[1] + arr[2];

    // 계단 3개부터는 1,2는 있으니까 23,13
    Max[3] = max(arr[2]+arr[3], arr[1] + arr[3]);

    //  계단 4개라면 124 134 / 124라면 1+2+4
    /*
      for(int i = 4; i <=num; i++) {
        Max[i] = max(arr[i] + Max[i-2], arr[i] + Max[i-1]);
        // i = 4일 때, 25 + 20 = 45 / 25 + 35 = 60 Max[4] 60 , 234밟음
        // i = 5일 때, 10 + 25 / 10 + 60 = 70 2345
        // i = 6일 때, 20 + 60 / 20 + 70 = 90 23456
    }
     */

    for(int i = 4; i <= num; i++) {
        Max[i] = max(Max[i-3] + arr[i-1] + arr[i], Max[i-2] + arr[i]);
        // i = 4일 때, 1과 1,2를 비교 124인지 134인지
        // i = 5일 때, 1245 or 135 or 235
        // i = 6일 때, 2356 or 1356 or 1246 or 1346
    }

    cout << Max[num];
}