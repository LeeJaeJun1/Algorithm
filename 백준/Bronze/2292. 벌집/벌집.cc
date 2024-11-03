#include<iostream>
using namespace std;

int main() {
    int n;
    int total=1;
    int floor = 1;

    cin >> n;
    // 2 ~7 : 2번, 8 ~ 19 : 3번, 20~37 : 4번, 38~71:5번

    while(n > total) {
        total += 6 * floor;
        floor++;
    }
    cout << floor;
    return 0;
}