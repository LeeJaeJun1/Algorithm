#include<iostream>
#include<stack>
using namespace std;

int main() {
    // 아치형 곡선을 그어 A는 A끼리, B는 B끼리 쌍을 짓기로 함
    // 선끼리 교차하지 않으면서 각 글자를 정확히 한 개의 다른 위치에 있는 같은 글자와 짝 지을 수 있다면 좋은 글자
    // 글자끼리 짝을 이룸

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num,cnt = 0;
    cin >> num;
    string v;
    for(int i = 0; i < num; i++) {
        cin >> v;
        stack<char> s;
        for(int j = 0; j < v.length(); j++) {
            if(!s.empty() && s.top() == v[j]) {
                s.pop();
                continue;
            }
            s.push(v[j]);
        }
        if(s.empty()) {
            cnt++;
        }
    }
    cout << cnt << "\n";
}