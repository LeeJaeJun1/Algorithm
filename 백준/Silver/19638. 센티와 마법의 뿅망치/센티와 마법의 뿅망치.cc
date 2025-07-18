#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

// 맞은 사람 키가 l 키 / 2 , 1인경우 영향 안받음
// 가장 키가 큰 거인 중 한 명 때린다
// 인구수와 센티의 키 횟수 제한
// 거인의 키
// 모든 거인이 센티보다 키가 작도록 YES, 최소 횟수
// 거인의 나라에서 센티보다 키가 크거나 같은 거인 NO, 키가 가장 큰 거인
// 1일 때는 영향 미치지 않는다.

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> pq;

    int n, cenH, limit,height,count = 0;


    cin >> n >> cenH >> limit;

    for(int i = 0; i < n; i++) {
        cin >> height;
        pq.push(height);
    }

    for(int j = 0; j < limit; j++) {
        if(pq.top() < cenH) {
            break;
        }
        int cur = pq.top();
        if(cur == 1) {
            break;
        }
        cur /= 2;
        pq.pop();
        pq.push(cur);
        count++;
    }

    if(pq.top() >= cenH) {
        cout << "NO\n" << pq.top();
    }
    else {
        cout << "YES\n" << count;
    }


    // 가장 큰 사람부터 뿅망치 맞추고
    // 32 16  / 32/2 = 16 , 16
}