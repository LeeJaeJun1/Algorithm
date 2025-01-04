#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    int count = 1;
    cin >> a >> b >> c; //고정비용, 가변비용, 판매비용
    // 판미비용 > 고정+가변
    if(b >= c) {
        cout << -1;
    }
    else{
        count = a / (c-b) + 1;
        cout << count;
    }
}