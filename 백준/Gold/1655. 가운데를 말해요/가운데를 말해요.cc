#include<iostream>
#include<queue>
using namespace std;

/*
 1.
 처음에 우선순위 큐를 사용해서 정렬해야겠다고 생각.
우선순위 큐를 사용해서 정렬하고 pop을 이용해 중앙값 찾으려고 함.
스터디장 피드백. 시간초과 무조건 발생.
그러면 우선순위 큐를 두 개 써보자고 생각함.
최소힙, 최대힙 두개를 사용함
처음에는 min.size >= max.size로 넣는 순서 정함
근데 계속해서 앞에 1과 -99가 출력될 수 밖에 없음
그래서 반대로 생각한 후 max힙의 크기를 더 크게 함
그랬더니 예제대로 1 1 2 2 2 2 5가 출력되긴 함.

 1은 그냥 1출력
 2는 1과 2중에서 더 작은 수 출력
 
2.
 출력되는 곳을 정해야된다고 생각.
 그러면 최소힙에서는 계속해서 작은 값만 나오기 때문에 최대힙 top을 출력하는걸로

 예시 5 1 7 2 10 -99 7 5에서는 반례 발생

 min , max : 5
 min : 1 , max : 5 이러면 5가 출력되는데 정답은 2이다. 그럼 이런 경우에 swap 해본다
 min : 5 , max : 1 이러면 1 출력
 min : 5 , max : 7 -> 1 정답은 5여야되는데 7출력. 그럼 swap
 min : 7 , max : 5 -> 1 정답 5출력
 min : 2 -> 7 , max : 5 -> 1 정답은 2여야 된다. 근데 5출력
 min : 5 -> 7 , max : 2 -> 1 정답은 2출력
 min : 5 -> 7 , max : 10 - > 2 -> 1 정답 5인데 10
 min : 7 -> 10, max : 5 -> 2 -> 1 정답 5 출력
 */


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>,greater<int>> minHeap;

    int n,number;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> number;

        if(maxHeap.size() > minHeap.size()) {
            minHeap.push(number);
        }
        else if(maxHeap.size() == minHeap.size()) {
            maxHeap.push(number);
        }

        if(minHeap.size() != 0 && maxHeap.top() > minHeap.top()) { // 첫번째 조건 추가안하니까 처음에 오류 발생
            // maxHeap.top().swap(minHeap.top()) 이거 안됨... 2개의 큐 내용만 변경 가능
            int max = maxHeap.top();
            int min = minHeap.top();
            maxHeap.pop();
            minHeap.pop();
            maxHeap.push(min);
            minHeap.push(max);
        }
        cout << maxHeap.top() << "\n";
    }
}