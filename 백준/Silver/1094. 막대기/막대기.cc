#include<iostream>
using namespace std;

int main() {
    // 64cm 가지고 있고, xcm 가지고 싶어함.
    // 가지고 있는 막대길이 모두 더해서 합이 X보다 크면 반복
    // 1. 가지고 있는 막대 길이가 가장 짧은 것 절반 자른다
    // 2. 자른 막대 절반 버리고 남아있는 막대길이 합 x보다 크거나 같으면 자른 막대 절반 중 하나 버린다
    // 3. 풀로 붙여서 xcm 만든다.
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;

    // 64 -> 32 32 -> 16 16

    int length = 0, first = 64, last = 64, num = 0;

    while(first > 0) {
        first /= 2;
        if(last - first > x) {
            last -= first;
        }
        else {
            length += last;
            num++;
        }

        if(length == x) {
            break;
        }
    }

    cout << num;

    // 64 -> 32x 32 -> 16o 16 -> 8x 8 -> 4o 4 -> 2o 2 -> 1o 1
}