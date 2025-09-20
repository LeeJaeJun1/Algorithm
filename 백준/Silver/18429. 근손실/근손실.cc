#include<iostream>
#include<algorithm>
using namespace std;

bool visited[9];
int n,k,total = 0;
int arr[9];

void search(int num, int weight) {
    if(weight < 500) {
        return;
    }
    if(num == n) {
        total++;
        return;
    }
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            search(num+1, weight + arr[i] - k);
            visited[i] = false;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    search(0,500);
    cout << total << "\n";
}