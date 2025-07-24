#include<iostream>
#include<queue>
#include<map>
using namespace std;

// 데이터 삭제할 때 연산 명령에 따라 우선순위가 가장 높은 데이터 또는 가장 낮은 데이터 삭제
// 데이터 삽입 연산과 삭제 연산 두 가지
// 삭제 연산은 두 가지로 구분 : 우선순위 가장 높은 것 삭제,, 가장 낮은 것 삭제
// 정수만 저장 이중 우선순위, 각 정수의 값 자체를 우선순위
// 최댓값과 최솟값 출력

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test, data, op,n,am; // 테스트 데이터, 입력 데이터의 수, 연산 개수, 연산 문자와 정수
    // I n 정수 n을 삽입 , 동일 정수 삽입 가능
    // D 1 최댓값 삭제, D -1 최솟값 삭제
    // Q가 비어있는데 D이면 무시

    // 최댓값, 최솟값 각자 판단해야되기 때문에 두 개의 우선순위 큐 사용
    // 그리고 맵에 ++해주면 두개되고 각 우선순위 큐에서 삭제. 2이면 생존? 일단 해봐
    // -1이면 min에서 pop하고 -- , 1이면 max에서 pop하고 --

    // 2번째 생각
    // 굳이 += 2 할 필요없이, ++해주고 해당 지우고, == 0이면 무시해버림
    string str;

    cin >> test;
    while(test--) {
        priority_queue<int> maxHeap; // max
        priority_queue<int, vector<int>, greater<int>> minHeap;
        map<int,int> m;
        cin >> data;
        for(int i = 0; i < data; i++) {
            cin >> str;
            if(str== "I") {
                cin >> n;
                maxHeap.push(n);
                minHeap.push(n);
                ++m[n];
            }
            if(str == "D") {
                cin >> am;
                if(am==1) {
                    // 컴파일 오류 발생하는 이유가 내 생각엔
                    // 비어있을 때 top--때문인 것 같음
                    while(!maxHeap.empty()) {
                        int ma = maxHeap.top();
                        maxHeap.pop();
                        if(m[ma] > 0) {
                            // 0이 아닐때로 설마,,
                            m[ma]--;
                            break;
                        }
                    }

                }
                if(am==-1) {
                    while(!minHeap.empty()) {
                        int mi = minHeap.top();
                        minHeap.pop();
                        if(m[mi] > 0) {
                            m[mi]--;
                            break;
                        }
                    }
                }
            }
        }

        int max = 0;
        int min = 0;
        int mS = maxHeap.size();
        int mH = minHeap.size();
        // 이게 만약에 최댓값은 잇는데 최솟값이 없을 수도 있으니까
        // for문 두개가 아니라 미리 해당하는 값만 유효하게 해놓고 비교?
        // 두 곳중 아무데서나 삭제된건 그냥 다 없애버린다.
        // 근데 top은 == 0이 아닌데 그 아래꺼가 == 0일 수 도 있잖아?
        // 근데 어차피 top값만 비교하면 되니까 상관없는건가? 일단 해봐

        // 동일한 정수가 들어올 수도 있다.
        // 그럼

        while(!maxHeap.empty() && m[maxHeap.top()] == 0) {
            maxHeap.pop();
        }
        while(!minHeap.empty() && m[minHeap.top()] == 0) {
            minHeap.pop();
        }
        /*
         for(int i = 0; i < mS; i++) {
            if(m[maxHeap.top()] == 1) {
                max = maxHeap.top();
                break;
            }
            maxHeap.pop();
        }

        for(int i = 0; i < mH; i++) {
            if(m[minHeap.top()] == 1) {
                min = minHeap.top();
                break;
            }
            minHeap.pop();
        }
         */


        if(maxHeap.empty() || minHeap.empty()) {
            cout << "EMPTY\n";
        }
        else {
            cout << maxHeap.top() << " " << minHeap.top() << "\n";
        }
    }
}