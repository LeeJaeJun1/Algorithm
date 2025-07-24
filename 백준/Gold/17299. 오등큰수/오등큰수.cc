#include<iostream>
#include<stack>
#include<map>
using namespace std;

// A(i)가 수열 A에서 등장한 횟수 F(Ai)
// 오등큰수는 오른쪽에 있으면서 수열 A에서 등장한 횟수가 F(Ai)보다 큰 수 중 가장 왼쪽 없으면 -1
// 1,1,2,3,4,2,1

// 일단 스택을 사용해서 체크를 해야하는데 등장한 횟수 체크하는 것이 포인트, 맵?

// 첫번째 Map을 사용했을 때 시간초과 , map은 o(logN) while문 사용할 때 비교 n * nlogn..
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    stack<int> st;
    cin >> n;
    int arr[n];
    int arr1[1000001] = {0};
    int ma[1000001] = {0};

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // 1 1 2 3 4 2 1
        ma[arr[i]]++;
    }

    for(int j = n-1; j >= 0; j--) {
        while(!st.empty()) {
            if(ma[st.top()] > ma[arr[j]]) {
                arr1[j] = st.top();
                break;
            }
            else {
                st.pop();
            }
        }
        if(arr1[j] == 0) {
            arr1[j] = -1;
        }
        st.push(arr[j]);
    }

    for(int k = 0; k < n; k++) {
        cout << arr1[k] << " ";
    }
}