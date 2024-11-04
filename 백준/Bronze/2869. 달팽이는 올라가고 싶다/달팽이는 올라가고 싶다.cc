#include<iostream>
using namespace std;

// 달팽이는 높이가 v미터인 나무 올라간다.
// 낮에 a미터 올라가고, 밤에 b미터 미끄러진다.
// 정상 올라간 후에는 떨어지지 않는다.

int main() {
    int a,b,v;
    int day;
    cin >> a >> b >> v;
    day = (v-a) / (a-b);

    if((v-a) % (a-b) == 0) {
        day+=1; // 다음날 a만큼 올라가면 정상 도달하기 때문에 +1
    }
    else{
        day+=2; // 다음날 a만큼 올라가도 정상 도달하지 못하기 때문에 +2
    }
    cout << day;
}