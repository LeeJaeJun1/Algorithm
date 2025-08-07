#include<iostream>
#include<algorithm>
using namespace std;

/*
4
123 1 1
356 1 0
327 2 0
489 0 1

2
 */

bool check[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, ques, strike, ball,total = 0;
    cin >> test;
    // 1에서 9까지 3자리 수 123 ~ 987 사이의 수이다.
    // 생각하고 있을 가능성 있는 수의 개수

    // 위치와 숫자 모두 같으면 스트라이크, 숫자만 같으면 볼
    // 그럼 123부터 987안에 있는 수 모두 비교해보자.
    // 서로 다른 숫자 세 개로 구성된 세 자리 수

    while(test--) {
        cin >> ques >> strike >> ball;

        int a = ques / 100;
        int b = ques / 10 % 10;
        int c = ques % 100 % 10;

        for(int i = 123; i <= 987; i++) {
            int d = i / 100;
            int e = i / 10 % 10;
            int f = i % 100 % 10;

            if(check[i]) {
                continue;
            }

            if((d == 0 || e == 0 || f == 0) ||(d==e || e==f || d==f)) {
                // 1~9이기 때문에 0나오면 안되고 서로 다른 수니까 이것도 안됨
                check[i] = true;
                continue;
            }

            // ques값과 i값 비교
            int numS = 0, numB = 0;

            if(a==d) {
                numS++;
            }
            if(b==e) {
                numS++;
            }
            if(c==f) {
                numS++;
            }
            if(a==e || a==f) {
                numB++;
            }
            if(b==d || b==f) {
                numB++;
            }
            if(c==d || c==e) {
                numB++;
            }

            if(numS != strike || numB != ball) {
                check[i] = true;
            }
            else {
                check[i] = false;
            }
        }
    }

    for(int i = 123; i <= 987; i++) {
        if(!check[i]) {
            total++;
        }
    }
    cout << total << "\n";
}