#include<iostream>
using namespace std;

int Gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return Gcd( b, a%b);
}

int main() {
    int N; int gcd = 0; int count = 0;
    cin >> N;
    int arr1[N];
    int distance[N];
    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    for(int j = 0; j < N - 1; j++) {
        distance[j] = arr1[j+1] - arr1[j];
    }

    gcd = distance[0];
    for(int k = 0; k < N - 1; k++) {
        gcd = Gcd(gcd,distance[k]);
    }

    for(int p = 0; p < N - 1; p++) {
        count += (distance[p] / gcd) - 1;
    }
    cout << count;
}