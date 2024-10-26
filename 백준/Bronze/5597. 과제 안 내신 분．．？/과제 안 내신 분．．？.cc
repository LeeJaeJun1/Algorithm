#include<iostream>
#include<array>
using namespace std;

int main() {
    int arr1[100];
    int student;

    for(int i = 1; i<=30; i++) {
        arr1[i] = i;
    }

    for(int j = 1; j <= 28; j++) {
        cin >> student;
        if(arr1[student] == student) {
            arr1[student] = 0;
        }
    }

    for(int k = 1; k <= 30; k++) {
        if(arr1[k] != 0) {
            cout << arr1[k] << "\n";
        }
    }
}