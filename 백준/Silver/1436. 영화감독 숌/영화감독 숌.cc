#include<iostream>
using namespace std;

int main() {
   int n;
   int start = 665;
   int count = 0;
   cin >> n;

   while(true) {
       start++;
       int procedure = start;
       while (procedure >= 666) {
           if (procedure % 1000 == 666) {
               count++;
               break;
           }
           procedure /= 10;
       }
       if (n == count) {
           cout << start << endl;
           break;
       }
   }
}