#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

map<int, int> m, mi;
// num값 넣는 m과 index 순서 저장하는 mi
vector<pair<int,int> > v;

int cmp(pair<int,int> a , pair<int,int> b) {
    if(a.second == b.second) {
        return mi[a.first] < mi[b.first]; // index 작은게 앞으로 간다.
    }
    return a.second > b.second; // 빈도수 많은게 앞으로 간다.
}

int main() {
    int n, c, num;
    cin >> n >> c;

    for(int i = 1; i <= n; i++) {
        cin >> num;
        if(m[num]==0) {
            mi[num] = i;
        }
        m[num]++;
    }

    for(auto a : m) {
        v.push_back( {a.first , a.second});
    }
    sort(v.begin(),v.end(),cmp);

    for(int j = 0; j < v.size(); j++) {
        for(int k = 0; k < v[j].second; k++) {
            cout << v[j].first << " ";
        }
    }


}