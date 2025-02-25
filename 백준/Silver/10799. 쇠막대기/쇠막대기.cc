#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count = 0;
    stack<int> sta;
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' && s[i+1] == ')') {
            // 레이저 발사. 그 전에 담겨진 stack 개수 합친다.
            count += sta.size();
            i += 1;
        }
        else if(s[i] == '(') {
            // 스택에 담는다.
            sta.push(i);
        }
        else if(s[i] == ')') {
            // 바로 직전의 (와 현재 )가 만들어낸 막대기 하나 추가하고 바로 직전 ( pop한다. 
            count += 1;
            sta.pop();
        }
    }
    cout << count << endl;
}

