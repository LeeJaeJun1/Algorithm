#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
       int a,b,result= 1;
       cin >> a >> b;
       for(int i = 0; i < b; i++) {
           result = (result * a) % 10;
       }
       if(result != 0) {
           cout << result << endl;
       }
       else{
           cout << 10 << endl;
       }
    }
    return 0;
}