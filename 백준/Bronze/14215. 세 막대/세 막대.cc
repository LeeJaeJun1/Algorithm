#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr1[3];
    for(int i = 0; i < 3; i++)
        cin >> arr1[i];

    sort(arr1, arr1+3);

    while(true) {
       if(arr1[2] >= arr1[1] + arr1[0]) {
           arr1[2]--;
       }
       else{
           break;
       }
    }
    cout << arr1[0] + arr1[1] + arr1[2];
}