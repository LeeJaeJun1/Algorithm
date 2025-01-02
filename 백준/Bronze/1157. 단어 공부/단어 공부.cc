#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int num[26] = {};

	
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]); 
		num[str[i] - 65]++; 
	}

	
	int max = 0; 
	int index = -1; 
	for (int i = 0; i < 26; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (i == index)
			continue;
		if (num[i] == max)
		{
			cout << '?';
			return 0;
		}
	}

	cout << (char)(index + 65);
	return 0;
}