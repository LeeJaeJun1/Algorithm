#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int student[31];
    int n;
    for(int i = 1; i <= 30; i++) {
        student[i] = i;
    }

    for(int j = 1; j <= 28; j++) {
        cin >> n;
        student[n] = 0;
    }

    for(int k = 1; k <= 30; k++) {
        if(student[k] != 0) {
            cout << student[k] << "\n";
        }
    }
}