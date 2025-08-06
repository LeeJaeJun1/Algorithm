#include<iostream>
#include<algorithm>
using namespace std;

bool visited[9];
int n,k,total = 0;
int arr[9];

void search(int num, int weight) {
    if(weight < 500) {
        return;
    }
    if(num == n) {
        total++;
        return;
    }
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            search(num+1, weight + arr[i] - k);
            visited[i] = false;
        }
    }
}


int main() {
    // 항상 500이상
    // 3! 조합 함수
    // next_permutation 함수,,,,, 중복 원소가 있으면 중복 제거된 순열만 생성한다....
    // 마구 난사하면 안된다라는 교훈,,,
    // 그럼 뭐 직접 만들어야지 휴
    // 그림 그려보는게 진짜 중요하다!
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    search(0,500);
    cout << total << "\n";
}