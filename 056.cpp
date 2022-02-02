#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	int n, c = 0;
	string g[10] = { "0" }, z;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> z;
		g[i] = z;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			else
			{
				c += stoi(g[i] + g[j]);
			}
		}
	}
	cout << c << endl;
	return 0;
}