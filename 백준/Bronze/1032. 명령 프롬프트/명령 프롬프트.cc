#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int number;
    string name,final;
    cin >> number;
    cin >> name;
    final = name;
    for(int i = 1; i < number; i++) {
        cin >> name;
        for(int j = 0; j < name.size(); j++) {
            if(final[j] != name[j]) {
                final[j] = '?';
            }
        }
    }
    cout << final << "\n";
}