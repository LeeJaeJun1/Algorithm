#include<iostream>

using namespace std;

int m = 0;
int number;
int x,y;


int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> number;

            if (m <= number) {
                m = number;
                x= i;
                y = j;
            }
        }
    }
    cout << m << endl;
    cout << x << " " << y;
}
