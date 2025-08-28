#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

bool visited[1001];
int edge[1001][1001];
queue<int> q;
int n,m,v,a,b;

// dfs : 재귀 , bfs : queue
void dfs(int first) {
    visited[first] = true;
    cout << first << " ";

    for(int i = 1; i <= n; i++) {
        if(visited[i]) {
            continue;
        }
        if(edge[first][i] == 1) {
            dfs(i);
        }
    }
}

void bfs() {
    q.push(v);
    visited[v] = true;

    while(!q.empty()) {
        int c = q.front();
        cout << c << " ";
        q.pop();

        for(int i = 1; i <= n; i++) {
            if(visited[i]) {
                continue;
            }
            if(edge[c][i] == 1) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n  >> m >> v;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        edge[a][b] = 1;
        edge[b][a] = 1;
    }

    dfs(v);
    cout << "\n";
    for(int i = 0; i < 1001; i++) {
        visited[i] = false;
    }
    bfs();
}