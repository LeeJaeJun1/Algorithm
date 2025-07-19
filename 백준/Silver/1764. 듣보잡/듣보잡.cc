#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> list;
    vector<string> v;
    string name;
    int n,m;

    cin >> n >> m;

    while(n--) {
        cin >> name;
        list[name] = 1;
    }

    while(m--) {
        cin >> name;
        if(list[name] == 1) {
            v.push_back(name);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for(int j = 0; j < v.size(); j++) {
        cout << v[j] << "\n";
    }
}