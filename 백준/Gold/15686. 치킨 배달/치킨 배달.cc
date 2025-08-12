#include<iostream>
#include<algorithm>
using namespace std;

int n,m,final = 1000000000;
int city[51][51];
vector<pair<int,int>> chi;
vector<pair<int,int>> home;
vector<pair<int,int>> finalChi;

// 일단 치킨집, 일반 가정집을 구분해서 저장해야한다.
// 그리고 치킨집 M개 선택하는거니까 조합일거고
// 그 치킨집들에 대한 거리 최솟값을 더함 그게 치킨 거리리니까
// 그럼 치킨집 선택하는 조합 함수, 그 치킨집 거리 최솟값 더하는거

int distance() {
    int sum = 0;
    for(int i = 0; i < home.size(); i++) { // 치킨집 거리
        int dis = 1000000000;
        for(int j = 0; j < m; j++) {
            int x = abs(finalChi[j].first - home[i].first);
            int y = abs(finalChi[j].second - home[i].second);
            dis = min(dis, x+y);
        }
        sum += dis;
    }
    return sum;
}

void search(int c) {
    if(finalChi.size()==m) {
        final = min(final, distance());
    }
    for(int i = c; i < chi.size(); i++) {
        finalChi.push_back(chi[i]);
        search(i+1);
        finalChi.pop_back();
    }
}

int main() {
    // 크기 nxn 도시, 도시의 칸은 (r,c)
    // 치킨거리는 집과 가장 가까운 치킨집 사이의 거리
    // 도시의 치킨 거리는 모든 집의 치킨 거리
    // 0은 빈칸, 1은 집, 2는 치킨 집

    // 도시 치킨집 중에서 최대 m개를 고르고, 나머지 치킨집 모두 폐업
    // 도시의 치킨 거리가 가장 작게 될지

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> city[i][j];
            if(city[i][j] == 1) {
                home.push_back({i,j});
            }
            if(city[i][j] == 2) {
                chi.push_back({i,j});
            }
        }
    }
    search(0);
    cout << final << "\n";
}