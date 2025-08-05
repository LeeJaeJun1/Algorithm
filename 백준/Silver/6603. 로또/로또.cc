#include<iostream>
using namespace std;

int first[14]; // 처음 입력되는 숫자
int End[14]; // 채워지는 숫자들 , 조합
int k;

void tech(int start, int num) {
    if(num == 6) { // 6개 모두 골랐을 때
        for(int i = 0; i < 6; i++) {
            cout << End[i] << " ";
        }
        cout << "\n";
    }
    for(int j = start; j < k; j++) { // 조합의 첫번째 수를 변경하면서 계속 채운다.
        End[num] = first[j]; // num이 6개까지 지정되어있고, 각 num 숫자마다 숫자 지정한다.
        tech(j+1, num + 1); // 재귀를 계속 돌리면서 6칸 계속 채운다.
    }
}

int main() {
    // 49가지 수 중 6개 고른다.
    // 완전탐색을 사용해야된다고 생각함.
    // 모든 경우를 봐야하니까 그래프 사용
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true) {
        cin >> k;
        if(k==0) {
            return 0;
        }
        for(int i = 0; i < k; i++) {
            cin >> first[i];
        }
        tech(0,0);
        cout << "\n";
    }

}