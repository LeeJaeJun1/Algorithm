#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

// n장 가지고 있고, i번 카드엔 a(i) 쓰여져 있다
// x번 카드와 y번 카드 골라 더한 값 계산하고 계산한 값 x,y번 카드 두 장 덮음
// m번 하면 놀이 끝남.
// m번 합체 끝낸 뒤, n장의 카드에 쓰여있는 수 모두 더한 값
// 가장 작게 만드는 것 목표
// 2 <= n <= 1000 , 0<=m<=15*n , a(i) <= 1,000,000
// 한 장 최대 1,000,000 , 최소 15,000
// 15000000000 int 넘음

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m,num,total = 0;
    priority_queue<long long, vector<long long>, greater<long long>> qu;
    cin >> n >> m;


    for(long long i = 0; i < n; i++) {
        cin >> num;
        qu.push(num);
        // 2 3 6
    }

    for(long long j = 0; j < m; j++) {
        long long curMin = qu.top();
        qu.pop();
        long long curMinMin = qu.top();
        qu.pop();
        long long cur = curMin + curMinMin;
        qu.push(cur);
        qu.push(cur);
    }

    while(!qu.empty()) {
        total += qu.top();
        qu.pop();
    }
    cout << total;
}