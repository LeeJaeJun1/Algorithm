#include<iostream>
#include<stack>

using namespace std;

// 이번 학기 몇 분 : N , 1 A T -> 만점 A 걸리는 시간 T
// 큐나 스택을 사용해서 과제 3분 걸리면 3개 쌓고, 바로 시작 이런 느낌
// 100점 짜리 과제 1이 주어지면 map?
// 점수 체크를 어떻게 할 것인지 큐를 사용한다면

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, give, score, time,total = 0;
    stack<int> st;
    stack<pair<int,int>> sta;
    // 스택에 넣고, top과 pop 후의 top값 다르면 점수 더함.

    cin >> N;

    while(N--) {
        cin >> give;
        if(give == 1) {
            cin >> score >> time;
            sta.push({score,time});
        }

        if(!sta.empty()) {
            int cur = sta.top().first;
            sta.top().second--;
            if(sta.top().second == 0) {
                sta.pop();
                total += cur;
            }
        }
    }
    cout << total;
}