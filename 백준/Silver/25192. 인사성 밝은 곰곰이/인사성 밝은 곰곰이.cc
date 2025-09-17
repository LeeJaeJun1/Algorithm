#include<iostream>
#include<set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*
    1. 중복된 값을 허용하지 않습니다.
    2. 값이 항상 정렬된 상태를 유지합니다. (기본적으로 오름차순 정렬)
    3. 값 삽입, 삭제, 검색 등의 연산에 대해 빠른 속도를 보입니다.
    4. 값이 삽입되면 자동으로 정렬되므로, 삽입 후에도 정렬을 할 필요가 없습니다.
     */

    set<string> s;
    int n, count = 0; string str;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str == "ENTER") {
            count += s.size();
            s.clear();
        }
        else {
            s.insert(str);
        }
    }
    count += s.size();
    cout << count;
}