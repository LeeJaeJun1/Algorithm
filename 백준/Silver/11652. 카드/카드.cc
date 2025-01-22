#include<iostream>
#include<map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,num;
    map<long long,long long> m;
    cin >> n;
    while(n--) {
        cin >> num;
        m[num]++;
    }
    long long max = 0;
    long long number;
    for(auto x : m) {
        if(x.second > max) {
            max = x.second;
            number = x.first;
        }
    }
    cout << number;
}