#include<iostream>
using namespace std;

// 첫번째 수가 두 번째 수의 약수라면 factor, 배수라면 multiple, 아니면 neither
int main() {
    int num1, num2;


    while(true) {
        cin >> num1 >> num2;

        if(num1 == 0 && num2 == 0) {
            break;
        }

        else if(num1 % num2 == 0) {
            cout << "multiple" << endl;
        }

        else if(num2 % num1 == 0) {
            cout << "factor" << endl;
        }

        else {
            cout << "neither" << endl;
        }
    }
    // 약수 num2 % num1 == 0
    // 배수 num1 % num2 == 0
    // else neither
}