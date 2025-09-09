#include<iostream>
#include<vector>

using namespace std;

vector<int> v;
int n,m;
bool visited[10];
void search(int start) {
    if(m==start) {
        for(auto x : v) {
            cout << x << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            v.push_back(i);
            search(start+1);
            visited[i] = false;
            v.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    search(0);
}