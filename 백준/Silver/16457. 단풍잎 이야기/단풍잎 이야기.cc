#include<iostream>
#include<algorithm>

using namespace std;

vector<int> Quest[100];
bool visited[100];

int n,m,k,skill,final = 0;

void search(int num, int skills) { // 3개 뽑음
    if(num==n) {
        int total = 0;
        for(int i = 0; i < m; i++) {
            bool check = true;
            for(int j = 0; j < k; j++) {
                if(!visited[Quest[i][j]]) {
                    check = false;
                    break;
                }
            }
            if(check) {
                total++;
            }
        }
        final = max(final, total);
    }

    for(int i = skills; i <= 2 * n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            search(num+1, i+1);
            visited[i] = false;
        }
    }
}

int main() {
    // 키의 개수 n, 퀘스트의 개수 m, 퀘스트 당 사용해야 하는 스킬 수 k
    // m개의 줄 각각의 퀘스트에서 사용해야 해야 하는 스킬
    // 최적의 키배치 햇을 때 최대로 깰 수 있는 퀘스트의 개수
    // 2n개의 스킬 중 n개를 적절히 키에 배치
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) { // 각 퀘스트 별로 skill 두 개씩 넣음
            cin >> skill;
            Quest[i].push_back(skill);
        }
    }

    search(0,1);
    cout << final;

}