#include <iostream>
#include <string>
#include <algorithm>
#include<map>
#include<vector>
using namespace std;

int main() {
    int N, M;
    map<string, int> Map;
    vector<string> v;
    
    cin >> N >> M;
    for(int i = 0; i < N+M; i++) {
        string s;
        cin >> s;
        Map[s]++;
        if(Map[s] > 1) {
            v.push_back(s);
        }
    }
    
    sort(v.begin(), v.end());
    
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
}
