#include<iostream>
using namespace std;

int main() {
   string s[5];

   for(int i = 0; i < 5; i++) {
       cin >> s[i];
   }

   for(int j = 0; j < 15; j++) {
       for(int k = 0; k < 5; k++) {
           if(j < s[k].size()) {
               cout << s[k][j];
           }
       }
   }
}