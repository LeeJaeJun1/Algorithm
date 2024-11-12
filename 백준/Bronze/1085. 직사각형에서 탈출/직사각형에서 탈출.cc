#include<iostream>
using namespace std;

int main() {
   int x,y,w,h;
   cin >> x >> y >> w >> h;

   int x_min = 0;
   int y_min = 0;
   int min;

   if(w - x < x)
       x_min = w - x;
   else
       x_min = x;

   if(h - y < y)
       y_min = h - y;
   else
       y_min = y;

   if(x_min > y_min)
       min = y_min;
   else
       min = x_min;

   cout << min;
}