#include <iostream>
using namespace std;
int n, m;
string s;
int a[104][104];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    // 초기 배열 입력
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '.')
            {
                a[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // 현재 구름이 있는 지역부터 시작
            if (a[i][j] == 0)
            {
                int cnt = 1;
                // 다음 구름이 등장하기 전까지 반복
                while (a[i][j + 1] == -1)
                {
                    a[i][j + 1] = cnt++;
                    j++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}