#include<iostream>
using namespace std;

int bingo[5][5];
int check[5][5];

int ch1() {
    int ans = 0;
    for(int i = 0; i < 5; i++) {
        if(check[i][0] && check[i][1] && check[i][2] && check[i][3] && check[i][4])
            ans++;
    }
    return ans;
}

int ch2() {
    int ans = 0;
    for(int i = 0; i < 5; i++) {
        if(check[0][i] && check[1][i] && check[2][i] && check[3][i] && check[4][i])
            ans++;
    }
    return ans;
}

int ch3() {
    int ans = 0;

    if(check[0][0] && check[1][1] && check[2][2] && check[3][3] && check[4][4])
        ans++;

    return ans;
}

int ch4() {
    int ans = 0;

    if(check[0][4] && check[1][3] && check[2][2] && check[3][1] && check[4][0])
        ans++;

    return ans;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   for(int i = 0; i < 5; i++) {
       for(int j = 0; j < 5; j++) {
           cin >> bingo[i][j];
       }
   }

   for(int k = 0; k < 25; k++) {
       int number;
       cin >> number;
       int total = 0;

       for(int a = 0; a < 5; a++) {
           for(int b = 0; b < 5; b++) {
               if(bingo[a][b] == number) {
                   check[a][b] = 1;
               }
           }
       }

       total += ch1(); total += ch2(); total += ch3(); total += ch4();

       if(total >= 3) {
           cout << k + 1 << endl;
           return 0;
       }
   }
}