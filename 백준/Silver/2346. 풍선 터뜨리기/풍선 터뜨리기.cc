#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
    // 1번부터 N번까지 N개의 풍선
    // 1번 풍선 왼쪽에 N번 풍선, i-1 -> i -> i+1
    // 각 풍선 안에는 종이 -N ~ N
    // 원형이면 i = (i+N) % N ? 원형 큐?
    // 덱 사용해서 양수면 앞으로 , 음수면 뒤로 가본다
    // 요세푸스랑 비슷한 맹키로 한번
    // 3 2 1 -3 -1  3 -> -3 -> -1 -> 1 -> 2
    // 벡터 사용해서 순서 나타내는 인덱스, 풍선번호

    int N, num;
    deque<pair<int,int>> dq;

    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> num;
        dq.push_back({i,num}); // 풍선 번호 , 종이 번호
    }

    int now = dq.front().second; // now 만큼 움직여야 함.
    cout << dq.front().first << " ";
    dq.pop_front(); // 3 삭제
    // 2 1 -3 -1   ,   출력 : 1
    while(!dq.empty()) {
        if(now > 0) {
            for(int j = 0; j < now - 1; j++) {
                dq.push_back(dq.front()); // -3 -1 2 1
                dq.pop_front();
            }
            now = dq.front().second; // -3
            cout << dq.front().first << " "; // 4
            dq.pop_front(); // -3 삭제 , -1 2 1
        }
        else { // now < 0
            for(int k = 0; k < abs(now) - 1; k++) {
                dq.push_front(dq.back()); // 2 1 -1
                dq.pop_back();
            }
            now = dq.back().second; // -1
            cout << dq.back().first << " "; //  5
            dq.pop_back(); // 2 1
        }
    }

}