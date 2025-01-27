#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<pair<int,int> > v;
    int arr; int test;
    int total = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr >> test;
        v.push_back({arr,test});
    }
    sort(v.begin(), v.end());

    for(auto i : v) {
        if(total==0) {
            total = i.first + i.second;
            continue;
        }
        if(total < i.first) {
            total = i.first+i.second;
        }
        else {
            total += i.second;
        }
    }
    cout << total;
}