#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 0;

    while (true) {
        vector<int> v;
        int num = 0;
        cin >> n;
        if (n == -1) {
            break;
        }

        for (int i = 1; i < n; i++) { // 약수 v에 넣고, 약수들의 합 구한다.
            if (n % i == 0) {
                v.push_back(i);
                num += i;
            }
        }

        if (num == n) {
            cout << n << " = ";
            for (int j = 0; j < v.size() - 1; j++) {
                cout << v[j] << " + ";
            }
            cout << v[v.size() - 1] << endl;
        }
        else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}