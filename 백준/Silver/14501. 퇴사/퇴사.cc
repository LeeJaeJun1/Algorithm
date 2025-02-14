#include <iostream>

using namespace std;

int N;
int list[15][2];
int dp[15];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> list[i][0] >> list[i][1];
	}

	for (int i = 0; i < N; i++)
	{
		if (i + list[i][0] <= N)
			dp[i + list[i][0]] = max(dp[i + list[i][0]], dp[i] + list[i][1]);

		dp[i + 1] = max(dp[i + 1], dp[i]);
	}

	cout << dp[N] << endl;
}