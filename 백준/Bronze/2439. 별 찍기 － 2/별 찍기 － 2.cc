#include<iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = N - i; j > 0; j--)
			cout << " ";
		for (int l = 1; l <= i; l++)
			cout << "*";

		cout << "\n";
	}

}