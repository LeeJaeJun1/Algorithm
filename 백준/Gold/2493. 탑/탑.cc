#include<iostream>
#include<stack>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,num;
   cin >> n;
   stack<pair<int,int>> s;
   for(int i = 1; i <= n; i++) {
       cin >> num;
       while(!s.empty()) {
           if(s.top().second > num) {
               cout << s.top().first << " ";
               break;
           }
           s.pop();
       }
       if(s.empty()) {
           cout << "0 ";
       }
       s.push({i,num});
   }
}