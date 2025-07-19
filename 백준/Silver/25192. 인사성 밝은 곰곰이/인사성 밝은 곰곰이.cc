#include<iostream>
#include<map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> name;
    int num,count=0;
    string nick;

    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> nick;

        // nick이 ENTER이면 초기화
        // nick이 이름이면 , 처음일 경우 count++

        if(nick=="ENTER") {
            name.erase(name.begin(), name.end());
        }
        if(nick != "ENTER") {
            if(name[nick] == 2) {
                continue;
            }
            name[nick] = 2;
            count++;
        }
    }
    cout << count;
}
