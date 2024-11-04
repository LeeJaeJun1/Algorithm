#include<iostream>
using namespace std;



int main() {
    int x;
    int line = 1;
    cin >> x;

    while(x > line) { // line을 통해 x가 몇번쨰 대각선에 있는지 파악한다.
        x -= line;
        line++;
    }

    // line이 홀수번쨰는 우상향, 짝수번째는 좌하향

    if(line % 2) {
        cout << line+1-x << "/" <<  x;
    }
    else{
        cout << x << "/" << line+1-x;
    }
}