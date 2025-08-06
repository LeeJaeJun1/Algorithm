#include<iostream>
#include<algorithm>
using namespace std;

int first[21][21];

/*
4
0 1 2 3
4 0 5 6
7 1 0 2
3 4 5 0
 */
int main() {
    int n,result = 1000000,diff;
    cin >> n;
    int team[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }
    // n = 4인 경우는 , 0,1,2,3 중에서 2개씩 선택한다.
    // 4C2를 해서 6가지 모두 구한다음에 가장 값 최소인거 하면 되지 않나?
    // 근데 (1,2) (3,4), (1,3) (2,4), (1,4) (2,3) / (2,3) (1,4), (2,4) (1,3), (3,4) (1,2)
    // 이렇게 되면 겹치는 경우 발생. 그럼 하프?
    // 일단 팀을 두 개로 쪼깨서 파악해본다.

    for(int j = 0; j < n; j++) { // 앞에 두 개는 0, 뒤에 두 개는 1로 넣어놓고 이걸로 조합 만들어서 비교해본다.
        if(j < n/2) {
            team[j] = 0; // 0, 1
        }
        else {
            team[j] = 1; // 2, 3
        }
    }
    do {
        int sumS = 0, linkS = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(team[i] == 0 && team[j] == 0) {
                    sumS += first[i][j];
                }
                else if(team[i] == 1 && team[j] == 1) {
                    linkS += first[i][j];
                }
            }
        }
        
        diff = abs(sumS - linkS);
        if(result > diff) {
            result = diff;
        }

    }while(next_permutation(team, team+n));

    cout << result << "\n";
}