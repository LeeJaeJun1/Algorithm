#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    int N,M; // 저장된 사이트 주소 N, 비밀번호를 찾으려는 사이트 주소 개수 M
    cin >> N >> M;
    string add; string site;
    map<string, string> m;
    while(N--) {
        cin >> add >> site;
        m[add] = site;
    }
    for(int i = 0; i < M; i++) {
        cin >> add;
        cout << m[add] << endl;
    }
}