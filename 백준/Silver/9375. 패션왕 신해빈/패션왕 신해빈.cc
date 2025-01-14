#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T, n;
    cin >> T;
    string name,type;
    // 각 type의 수를 파악하고, type+1을 total에 곱해준다.
    // 바지 3개, 안경 3개 있을 때의 경우의 수는 바지(4가지) * 안경(4가지) - 1 = 15가지
    while(T--) {
        map<string,int> m;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> name >> type;
            m[type] += 1;
        }
        int total = 1;
        for(auto x: m) {
            total *= (x.second + 1);
        }
        cout << total - 1 << endl;
    }
}