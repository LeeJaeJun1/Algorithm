#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count = 0;
    string comm, final; // 입력받을 문자열과 출력할 문자열
    cin >> comm;
    for(int i = 0; i < comm.size(); i++) {
        if(comm[i] == 'X') { // X일 경우
            count += 1; // count += 1
        }
        if(comm[i] == '.') { // .일 경우
            final += '.'; // 출력할 문자열에 .추가
            if(count % 2 != 0) { // 만약에 .이전에 count 홀수이면 바로 끝냄, 무조건 -1
                break;
            }
            else { // 아닐 경우 초기화
                count = 0;
            }
        }
        if(count == 2 && comm[i+1] != 'X') { // count 2면서, 다음 X아닐 경우 즉 XX. 이런경우
            final += "BB"; // AAAA가 올 경우 없기 때문에 바로 BB 추가해줌
            count = 0; // count 초기화
        }
        if(count == 4) { // count 4일 경우
            final += "AAAA"; // AAAA 저장
            count = 0;
        }
    }
    if(count % 2 == 1) { // 홀수이면 바로 -1
        cout << -1 << "\n";
    }
    else { // 아닐 경우 final 출력
        cout << final; 
    }
}