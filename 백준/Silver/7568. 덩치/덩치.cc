#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int x,y;
    int arrX[N]; int arrY[N];

    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        arrX[i] = x; arrY[i] = y;
    }

    for(int j = 0; j < N; j++) {
        int count = 1;
        for(int k = 0; k < N; k++) {
            if(arrX[j] < arrX[k] && arrY[j] < arrY[k]) {
                count += 1;
            }
        }
        cout << count << " ";
    }
}