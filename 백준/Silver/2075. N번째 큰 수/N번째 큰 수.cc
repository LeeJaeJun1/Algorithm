#include<iostream>
#include<queue>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,num;
    cin >> N;
    int size = N * N;

    priority_queue<int, vector<int>, greater<int>> pq; // minHeap -> 루트에 최솟값이 들어감, 최솟값이 top에 위치
    // 우선순위 큐 선언 방법, priority_queue<'자료형', '구현체', '비교연산자'>이름

    for(int i = 0; i < size; i++) {
        cin >> num;
        pq.push(num);

        if(pq.size() > N) {
            pq.pop();
        }
    }
    cout << pq.top();
}