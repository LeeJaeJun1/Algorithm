#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int P,L,V; int test = 1;
    while(true) {
        int total = 0;
        cin >> L >> P >> V;
        if(L==0 && P==0 && V==0) {
            break;
        }
        int a = V / P; int b = V % P;
        if(L < b) {
            total += L * a + L;
        }
        else{
            total += L * a + b;
        }
        cout << "Case " << test << ": " << total << endl;
        test++;
    }
}