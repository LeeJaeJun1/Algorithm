#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// N개의 회의에 대해 회의실 사용표
// 시작시간과 끝나는 시간 주어짐
// 각 회의 겹치지 않게 회의실 사용할 수 있는 회의 최대 개수
// 동시 다음 회의 가능, 시작 시간 끝나는 시간 같을 수 있음

// 2초 , 128

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int,int>> v;

    int num,start,end,count = 1;
    cin >> num;

    // (1,4) -> (5,7) -> (8,11) -> (12,14)
    // 저번 비슷한 문제에서는 정렬할 때 시작시간.
    // 근데 한 강의실에서 할 수 있는 최대의 회의를 구하는거니까
    // 끝시간 시작시간 차이 최대한 작게 해야함 그리고 최대한 끝시간 작아야함
    // 시작시간, 끝시간 기준으로 모두 정렬해봄
    // 끝시간 정렬할 때 그 다음 수 first와 현재 second 비교하면서 도전
    
    // 최대한 많이 회의실 사용이라서 끝시간이 포인트라고 생각!!

    for(int i = 0; i < num; i++) {
        cin >> start >> end;
        v.push_back({end,start});
    }
    sort(v.begin(), v.end());

    // (1,4)->(3,5)->(0,6)->(5,7)->(3,8)->(5,9)->(6,10)->(8,11)->(8,12)->(12,13)->(12,14)
    // (4,1)->(5,3)->(6,0)->(7,5)->(8,3)->(9,5)->(10,6)->(11,8)->(12,8)->(13,12)->(14,12)

    // (1,4) -> (5,7) -> (8,11) -> (12,14)

    int cur = v[0].first;

    for(int i = 1; i < num; i++) {
        if(cur <= v[i].second) {
            cur = v[i].first;
            count++;
        }
    }
    cout << count;
}