#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int num;
    int arr1[3];

    while(true) {
        for(int j = 0; j < 3; j++)
            cin >> arr1[j];

        if(arr1[0] == 0)
            break;

        else if(arr1[0]+arr1[1] <= arr1[2])
            cout << "Invalid" << endl;

        else if (arr1[0] == arr1[1] && arr1[1] == arr1[2])
            cout << "Equilateral" << endl;

        else if(arr1[0] == arr1[1] || arr1[1] == arr1[2] || arr1[0] == arr1[2])
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }
}