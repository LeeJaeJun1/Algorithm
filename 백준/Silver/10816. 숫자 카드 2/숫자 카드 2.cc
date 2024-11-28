#include <iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int N,num;
    cin >> N;
    map<int,int> m;

    for(int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
    }

    int M, number;
    cin >> M;
    for(int j = 0; j < M; j++) {
        cin >> number;
        cout << m[number] << " ";
    }
}