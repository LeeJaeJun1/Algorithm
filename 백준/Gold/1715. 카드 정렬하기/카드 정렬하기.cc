#include<iostream>
#include<queue>
using namespace std;

/*
 3
10
20
40

 100
 */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int, vector<int>, greater<>> pq;
    int num,card,total = 0;

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> card;
        pq.push(card);
    }

    // 그 전 두 개의 합이 다시 한번 더 더해진다.
    // 10+20 + 10+20+40

    while(!pq.empty()) {
        int fir = pq.top();
        pq.pop();
        if(pq.empty()) {
            break;
        }
        int las = pq.top();
        pq.pop();
        total += fir + las;

        pq.push(fir + las);
    }
    cout << total;
}