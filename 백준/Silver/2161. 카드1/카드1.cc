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
        qu.push(i);
    }
    while(!qu.empty()) {
        cout << qu.front() << " ";
        qu.pop();
        if(qu.empty()) {
            break;
        }
        int a = qu.front();
        qu.pop();
        qu.push(a);
    }
}