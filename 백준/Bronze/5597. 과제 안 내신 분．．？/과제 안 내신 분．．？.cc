#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int student[30];
    int n;
    for(int i = 0; i < 30; i++) {
        student[i] = i + 1;
    }

    for(int j = 0; j < 28; j++) {
        cin >> n;
        student[n - 1] = 0;
    }

    for(int k = 0; k < 30; k++) {
        if(student[k] != 0) {
            cout << student[k] << "\n";
        }
    }
}