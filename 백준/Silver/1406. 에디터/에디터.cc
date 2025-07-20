#include<iostream>
#include<list>

using namespace std;

// 커서는 맨 앞, 맨 뒤 중간 임의의 곳에 위치
// 명령어가 수행되기 전에 커서는 문장의 맨 뒤에 위치

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> li;
    list<char>::iterator it; // cursor 역할

    string s;
    int num;
    char cmd, add;

    cin >> s >> num;

    for(int i = 0; i < s.length(); i++) {
        li.push_back(s[i]); // a b c d
    }

    it = li.end(); // 초기에 맨 끝에 위치한다.

    while(num--) {
        cin >> cmd;
        if(cmd == 'L') { // 커서를 왼족으로 한 칸(문장 맨 앞 무시)
            if(it != li.begin()) {
                it--;
            }
        }
        if(cmd == 'D')  { // 커서 오른쪽 한 칸(문장 맨 뒤면 무시)
            if(it != li.end()) {
                it++;
            }
        }
        if(cmd == 'B') { // 커서 왼쪽에 있는 문자 삭제
            // 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 보이지만
            // 실제로 커서의 오른쪽 문자는 그대로
            // 커서를 왼쪽으로 옮기면서, li에서 삭제도
            if(it != li.begin()) {
                // li.erase(it--);
                // error for object 0x16ae530f0: pointer being freed was not allocated
                // 동적으로 할당된 메모리 해제할 떄, 해당 포인터가 실제로 할당된 적이 없는 메모리 가리키고 있음
                it = li.erase(--it);
            }
        }
        if(cmd == 'P') { // 문자를 커서 왼쪽에 추가
            // list에서 insert(iterator, value) it위치에 val 값 추가
            cin >> add;
            li.insert(it, add);
        }
    }

    for(auto a : li) {
        cout << a;
    }
}
