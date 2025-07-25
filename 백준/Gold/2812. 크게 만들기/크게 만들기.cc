#include<iostream>
#include<stack>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,number; // n자리 숫자와 k개 지움.
    string num;
    //stack<int> sta;
    // string -> int = - '0'
    deque<int> deq;
    cin >> n >> k;
    cin >> num;
    // 하나씩 받아야되지 않을까?
    // 1924에서 1보다 9가 큼, 9보다 2가 크고, 2보다 4가 큼
    // 1231234에서 1보다 2가 크고 2보다 3이 큼 1보다 2가 크고 2보다 3이 큼
    // 큰게 있으면 삭제? 근데 k개만 삭제한다. 그럼 계속 비교?
    // 제한 시간 1초다.
    for(int i = 0; i < num.length(); i++) {
        // 넣고 비교하고 하는데 k번만 해야함. k--해주면서 while문 조건 해주고 그 다음 안에 있는 것보다 작으면 패스
        // 근데 이렇게 되면 k가 0되면 뒤에거는 그냥 자연스럽게 붙게 되는건가?
        // 틀린게 여기일꺼 같은데,,, k가 2라서 3번 빼야되는데 두번만 뺴는경우도 발생 가능
        // 4 3 , 3 2 4 1일 때 그러면 어떻게 해? 그만큼 더 뺴고 출력?
        while(k && !deq.empty() && num[i] - '0' > deq.back()) {
            deq.pop_back();
            k--;
        }
        // qu로 했을 때는 push를 할 때 선입선출이라서 바로 뒤에값을 삭제하는게 아니다. 그럼 앞과 뒤 모두 사용할 수 있는 거
        // 레전드 덱 발견!
        deq.push_back(num[i] - '0');
    }

    for(int j = 0; j < k; j++) {
        deq.pop_back();
    }

    while(!deq.empty()) {
        cout << deq.front();
        deq.pop_front();
    }

}