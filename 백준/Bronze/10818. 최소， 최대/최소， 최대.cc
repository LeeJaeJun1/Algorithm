#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,num; int max = -1000000; int min = 1000000;
    cin >> n;
    while(n--) {
        cin >> num;
        if(max < num) {
            max = num;
        }
        
        if(min > num) {
            min = num;
        }
    }
    cout << min << " " << max;
}