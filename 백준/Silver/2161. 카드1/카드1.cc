#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    queue<int> qu;
    for(int i = 1; i <= n; i++) {
        qu.push(i); // 1,2,3,4,5,6,7 순서대로 넣음
    }
    // 제일 위에 카드 버리고, 그 다음 카드 맨 아래로 내리기 반복
    while(n--) {
        cout << qu.front() << " ";
        qu.pop();
        if(qu.front() % 2 == 0) {
            qu.push(qu.front());
            qu.pop();
        }
    }

}