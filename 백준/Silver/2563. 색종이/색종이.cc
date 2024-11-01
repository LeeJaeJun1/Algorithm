#include<iostream>
using namespace std;

// 가로, 세로의 크기가 각각 10인 정사각형 붙인다.
// 색종이를 여러 장 붙인 후 색종이가 붙은 검은 영역의 넓이 구하기.
// 첫번째 a는 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리
// 두번째 b는 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리

bool arr1[100][100] = {0};

int main() {
    int count; // 색종이 수
    int total = 0;
    cin >> count;
    int x,y; // 세로와 가로 위치 (x,y)

    for(int k = 1; k<=count; k++) {
        cin >> x >> y; // count 수만큼 x,y값 받는다
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                if (arr1[i][j]) { // 만약 중복되는 부분이 있으면 넘어간다.
                    continue;
                }
                arr1[i][j] = 1; // 해당하는 영역을 1로 바꾼다
                total++; // 색칠할 떄마다 total을 1씩 키워주면서, 색칠한 총 넓이를 찾는다.
            }
        }
    }
    cout << total;
}