#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f;
    int x; int y;
    cin >> a >> b >> c >> d >> e >> f;
    // ax + by = c, dx + ey = f
    y = (c * d - a * f) / (b * d - a * e);
    x = (c * e - b * f) / (a * e - b * d);
    cout << x << " " << y << endl;
    return 0;
}