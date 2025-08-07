#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,num;
int arr[12];
vector<int> op;
vector<int> final;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 수의 개수, 수, +,-,x,/
    // 만들 수 있는 식의 최댓값, 최솟값 ㅊ ㅜㄹ력
    // 연산자 우선  순위 무시하고 앞에서부터 진행

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 4가지 연산자를 각자 위치에 넣는다.

    for(int i = 0; i < 4; i++) {
        cin >> num;
        for(int j = 0; j < num; j++) {
            op.push_back(i);
            // + : 0개, - : 0개, x : 1개, / : 0개
            // 이거를 가지고 모든 경우의 수 구해야하니까 함수 사용
        }
    }

    // 3 4 5가 있고 + : 1개, x : 1개 있을 때 + x : 35 , x + : 17
    // 숫자는 3개, 연산자는 4개
    do {
        int total = arr[0];
        for(int i = 0; i < op.size(); i++) {
            if(op[i] == 0) {
                total += arr[i+1];
            }
            if(op[i] == 1) {
                total -= arr[i+1];
            }
            if(op[i] == 2) {
                total *= arr[i+1];
            }
            if(op[i] == 3) {
                total /= arr[i+1];
            }
        }
        final.push_back(total);
    }while(next_permutation(op.begin(),op.end()));

    sort(final.begin(), final.end());

    cout << final.back() << "\n" << final.front();
}