#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int N,M;
    int total = 0;
    string st, st1;
    map<string, int> m;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> st;
        m[st]++;
    }
    for(int j = 0; j < M; j++) {
        cin >> st1;
        if(m[st1] > 0) {
            total++;
        }
    }
    cout << total;
}