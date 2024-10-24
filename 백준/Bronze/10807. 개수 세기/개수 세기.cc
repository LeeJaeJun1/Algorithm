#include<iostream>
#include<array>
using namespace std;

int main() {
    int N;
    int v;
    int total = 0;
    int arr1[100];

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
    }

    cin >> v;

    for(int j = 0; j < N; j++) {
        if(v == arr1[j]) {
            total++;
        }
    }
    cout << total;
}