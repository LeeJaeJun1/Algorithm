#include<iostream>
#include<queue>
using namespace std;

int main() {
    int N, K;
    queue<int> Q;
    
    cin >> N >> K;
    
    for(int i = 1; i <= N; i++) {
        Q.push(i);
    }
    
    cout << "<";
    
    while(Q.size() > 1) {
    for(int i = 1; i < K; i++) {
        int num = Q.front();
        Q.pop();
        Q.push(num);
    }
    cout << Q.front() << ", ";
    Q.pop();
  }
  cout << Q.front() << ">";
}