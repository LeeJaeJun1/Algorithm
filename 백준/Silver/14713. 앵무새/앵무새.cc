#include<iostream>
#include<string>
#include<queue>
#include<sstream>
using namespace std;

int main() {
    int n;

    string s,word;
    cin >> n;
    cin.ignore();

    vector<queue<string>> qu(n);
    queue<string> q;

    for(int i = 0; i < n; i++) {
        getline(cin,s);
        stringstream st(s);

        while(getline(st, word, ' ')) {
            if(word != "") {
                qu[i].push(word);
            }
        }
    }

    getline(cin,s);
    stringstream str(s);
    while(getline(str,word,' ')) {
        if(word != "") {
            q.push(word);
        }
    }
    
    while(!q.empty()) {
        bool ch = false; // 체크 위치도 중요
        string c = q.front();
        for(int i = 0; i < n; i++) {
            if(!qu[i].empty() && qu[i].front()==c) {
                qu[i].pop();
                q.pop();
                ch = true;
                break;
            }
        }
        if(!ch) {
            cout << "Impossible";
            return 0;
        }
    }

    // 앵무새는 모든 단어를 말해야 한다.!!!!!!!!!!!!!!!!!!!!!!!!
    // 문제를 좀 잘 읽자

    for(int i = 0; i < n; i++) {
        if(!qu[i].empty()) {
            cout << "Impossible";
            return 0;
        }
    }
    cout << "Possible";
}