#include<iostream>
#include<string>

using namespace std;

int main()
{
	int o, big = 0, asc = 0;
	string s;
	getline(cin, s);
	int count[129];
	for (int i = 0; i < 129; i++)
	{
		count[i] = 0;
	}
	int le = size(s);
	for (int i = 0; i < le; i++)
	{
		o = s[i];
		if (o >= 65 && o<=90)
		{
			count[o + 32] += 1;
		}
		else
		{
			count[o] += 1;
		}
	}
	for (int i = 97; i <= 122; i++)
	{
		if (count[i] > big)
		{
			big = count[i];
			asc = i;
		}
		else if (count[i] == big)
		{
			if (i < asc)
			{
				big = count[i];
				asc = i;
			}
		}
	}
	cout << char(asc) << ' ' << big << endl;
	return 0;
}