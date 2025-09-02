#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 가장 키가 큰 거인 가운데 하나를 때린다.
    // 뿅먕치 맞은 사람의 키 / 2로 변함
    priority_queue<int> pq;
    long long num,senti,test,h,count = 0;
    cin >> num >> senti >> test;

    for(int i = 0; i < num; i++) {
        cin >> h;
        pq.push(h);
    }

    while(test--) {
        int t = pq.top();
        if(t >= senti && t != 1) {
            pq.pop();
            pq.push(t/2);
            count++;
        }
        else {
            break;
        }
    }

    if(pq.top() >= senti) {
        cout << "NO\n" << pq.top();
    }
    else {
        cout << "YES\n" << count;
    }
}