#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int total = 0;
    int cow[11];
    fill(cow, cow+11,-1);
    while(n--) {
        int number,location;
        cin >> number >> location;
        if(cow[number] != -1 && cow[number] != location) {
            total++;
        }
        cow[number] = location;
    }
    cout << total << "\n";
}