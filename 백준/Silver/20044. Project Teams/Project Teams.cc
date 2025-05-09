#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int team;
    cin >> team;
    int st = team * 2;
    int student[10001];

    for(int i = 0; i < st; i++) {
        cin >> student[i];
    }

    sort(student, student+st);

    long long Min = 200000;
    for(int j = 0; j < team; j++) {
        if(Min > student[j] + student[st - j - 1]) {
            Min = student[j] + student[st - j - 1];
        }
    }
    cout << Min << "\n";
}