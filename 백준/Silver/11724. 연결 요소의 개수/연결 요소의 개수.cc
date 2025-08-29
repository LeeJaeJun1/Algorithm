#include<iostream>
#include<vector>
using namespace std;

// 무향 그래프, 연결 요소의 개수
// 정점의 개수, 간선의 개수, 두 개의 끝점

vector<int> graph[1001];
bool visited[1001];

void dfs(int s) {
    visited[s] = true;
    for(int i = 0; i < graph[s].size(); i++) {
        int h = graph[s][i];
        if(!visited[h]) {
            dfs(h);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n,m,u,v,a,b,count = 0;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int j = 1; j <= n; j++) {
        if(!visited[j]) {
            count++;
            dfs(j);
        }
    }
    cout << count;
}