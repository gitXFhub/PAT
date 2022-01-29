#include<iostream>

using namespace std;

int height(int m)
{
	if (m % 2 == 0)
	{
		return m / 2;
	}
	else
	{
		return (m + 1) / 2;
	}
}

int main()
{
	int n;
	char c;
	cin >> n >> c;
	while (n < 3 || n>20)
	{
		cin >> n >> c;
	}
	int y = height(n);
	for (int i = 1; i <= y; i++)
	{
		if (i == 1 || i == y)
		{
			for (int s = 0; s < n; s++)
			{
				cout << c;
			}
			cout << endl;
		}
		else
		{
			for (int s = 0; s < n; s++)
			{
				if (s == 0 || s == n - 1)
				{
					cout << c;
				}
				else
					cout << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}