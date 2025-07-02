#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int length;
    cin >> length;

    vector<pair<int,int>> A(length);
    vector<int> P(length);
    
    for(int i = 0; i < length; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }

    sort(A.begin(), A.end());

    for(int j = 0; j < length; j++) {
        P[A[j].second] = j;
    }

    for(int k = 0; k < length; k++) {
        cout << P[k] << " ";
    }
    cout << "\n";
}