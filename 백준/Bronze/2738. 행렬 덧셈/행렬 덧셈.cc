#include<iostream>
using namespace std;

int main() {
	int N{ 0 }, M{ 0 }; // N*M 행렬의 크기
	cin >> N >> M;
	
	int array[100][100];
	int arr[100][100];
	
	for (int i{ 1 }; i <= N; i++) {
		for (int j{ 1 }; j <= M; j++) {
			cin >> array[i][j];
		}
	}

	for (int i{ 1 }; i <= N; i++) {
		for (int j{ 1 }; j <= M; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i{ 1 }; i <= N; i++) {
		for (int j{ 1 }; j <= M; j++) {
			if (j==N || j == N*(M-1))
			cout << array[i][j] + arr[i][j] << endl;
			else {
				cout << array[i][j] + arr[i][j] << " ";
			}
		}
	}
}