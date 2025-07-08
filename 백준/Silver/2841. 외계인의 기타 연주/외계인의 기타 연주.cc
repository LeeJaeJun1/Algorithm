#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 누르고 있는 것보다 큰거오면 그대로, 작으면 앞에게 다 뗴고 누른다.
    // 으으음,,, 배열 2개 or 스택 ???
    // 근데 그럼 1,2번이면 쪼개야하나
    // 넣고 top보다 크면 그대로, 작으면 클 때까지 pop

    stack<int> st[7]; // 6번줄까지

    int num, p, line, pret,count = 0;
    cin >> num >> p;

    while(num--) {
        cin >> line >> pret;
        // top이 pret보다 크면, pop하면서 작을 때까지 반복
        while(!st[line].empty() && st[line].top() > pret) {
            st[line].pop();
            count++;
        }

        // 비어있으면 채운다, top보다 크면 누른다
        
        if(st[line].empty() || st[line].top() < pret) {
            st[line].push(pret);
            count++;
        }

    }
    cout << count << "\n";
}