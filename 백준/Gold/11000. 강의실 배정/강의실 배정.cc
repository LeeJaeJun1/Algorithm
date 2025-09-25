#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,start,end,clas = 0;
    vector<pair<int,int>> v;
    priority_queue<int, vector<int>, greater<>> pq;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> start >> end;
        v.push_back({start,end});
    }
    sort(v.begin(), v.end());

    int cur = v[0].second;
    pq.push(cur);

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