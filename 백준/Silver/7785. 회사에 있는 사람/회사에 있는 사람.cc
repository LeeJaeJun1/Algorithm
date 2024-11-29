#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
	map<string, string, greater<string>> m;

	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; ++i)
	{
		string name, enter;
		cin >> name >> enter;

		m[name] = enter;
	}

	map<string, string> ::iterator it;
	for (it = m.begin(); it != m.end(); ++it)
	{
		if (it->second == "enter")
		{
			cout << it->first << '\n';
		}
	}
}