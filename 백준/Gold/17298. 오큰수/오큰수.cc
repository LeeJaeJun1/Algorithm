#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int arr[1000000];
    int result[1000000];
    stack<int> s;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for(int j = n-1; j >= 0; j--) {
        while(!s.empty()) {
            if(!s.empty() && s.top() > arr[j]) {
                result[j] = s.top();
                break;
            }
            else{
                s.pop();
            }
        }
        if(s.empty()) {
            result[j] = -1;
        }
        s.push(arr[j]);
    }

    for(int k = 0; k < n; k++) {
        cout << result[k] << " ";
    }
}