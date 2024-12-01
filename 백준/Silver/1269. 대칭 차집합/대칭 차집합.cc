#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,num;
    int total = 0;
    map<int,int> a1;
    map<int,int> a2;
    cin >> a >> b;

    for(int i = 0; i < a; i++) {
        cin >> num;
        a1[num]++;
        total+=a1[num];
    }
    for(int j = 0; j < b; j++) {
        cin >> num;
        a2[num]++;
        total+=a2[num];
        if(a1[num]==a2[num]) {
            total-=a1[num];
            total-=a2[num];
        }
    }
    cout << total;
    // a-b는 a의 원소 중 b에 있으면 삭제 시키는 것
}
