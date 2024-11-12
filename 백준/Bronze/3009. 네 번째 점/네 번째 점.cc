#include<iostream>
using namespace std;

int main() {
   int x1, x2, x3;
   int y1, y2, y3;
   int x, y;

   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

   if(x1 == x2 && x1 != x3) {
       x = x3;
   }

   if(x1 != x2 && x2 == x3) {
       x = x1;
   }

   if(x1 == x3 && x2 != x3) {
       x = x2;
   }

    if(y1 == y2 && y1 != y3) {
        y = y3;
    }

    if(y1 != y2 && y2 == y3) {
        y = y1;
    }

    if(y1 == y3 && y2 != y3) {
        y = y2;
    }
   cout << x << " " << y;
}