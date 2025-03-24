#include<iostream>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K,fro;
    queue<int> qu;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) {
        qu.push(i);
    }
    cout << "<";
    while(!qu.empty()) {
        for(int i = 1; i < K; i++) {
            fro = qu.front();
            qu.pop();
            qu.push(fro);
        }
        if(qu.size() == 1) {
            cout << qu.front() << ">";
            break;
        }
        cout << qu.front() << ", ";
        qu.pop();
    }
}