#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

// 1ch 256MB
// 시작시간, 종료시간 주어지는 N개 수업
// 시작시간이 빠를수록 처리하고, 종료시간이랑 비교해서 안되면 추가하고 되면 그 강의실 사용
// 입력받은 걸 시작시간 작은순으로 계속 정렬?

// 1 3 , 2 4, 3 5일 때
// 1시작 3끝이니까 그 다음 작은 2는 새로운 강의실 배정되고, 그 다음 3은 끝이니까 그 강의실
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<pair<int,int>> v;

    int n,start,end;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> start >> end;
        v.push_back({start,end});
    }
    sort(v.begin(), v.end());
    // (1,3) , (2,4), (3,5) 정렬된 상태
    // 첫번째 강의실 추가, 이걸 pq 넣고 첫 시간과 비교하는 방식
    pq.push(v[0].second); // 끝시간 3

    // 끝시간보다 그 다음 시작이 크거나 같으면 그 다음 시간의 끝시간이 기준이 되야 함.
    // 끝시간보다 그 다음 시작이 작으면 그대로 유지하면서 그 다음 끝시간 추가

    // (1,3) (4,5) (5,6) 예시 추가
    // 위에서 벡터 정렬해주기 때문에 시작시간 크기 순서대로 있는 상황
    for(int i = 1; i < n; i++) {
        if(pq.top() <= v[i].first) {
            pq.pop();
            pq.push(v[i].second);
        }
        else {
            pq.push(v[i].second);
        }
    }
    cout << pq.size();


}