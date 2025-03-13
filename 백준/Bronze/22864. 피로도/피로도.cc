#include<iostream>
using namespace std;

int main() {
    // 한  시간당 피로도 +a, 일 +b, 피로도 -c 최대 피로도 m
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,m;
    int tired = 0;  int work = 0;

    cin >> a >> b >> c >> m;
    
    for(int i = 0; i < 24; i++) {
        if(a > m) {
            cout << 0 << "\n";
            return 0;
        }
        
        if(tired + a <= m) {
            work += b;
            tired += a;
        }
        
        else{
            tired -= c;
            if(tired < 0)
                tired = 0;
        }
    }
    cout << work << "\n";
}