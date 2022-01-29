#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	cin >> n;
	int num[7];
	char p[7] = { 'P','A','T','e','s','t' };
	for (int i = 0; i < 6; i++)
	{
		num[i] = 0;
	}
	for (int i = 0; i < size(n); i++)
	{
		switch (n[i])
		{
		case 'P':
			num[0] += 1;
			break;
		case 'A':
			num[1] += 1;
			break;
		case 'T':
			num[2] += 1;
			break;
		case 'e':
			num[3] += 1;
			break;
		case 's':
			num[4] += 1;
			break;
		case 't':
			num[5] += 1;
			break;
		default:
			break;
		}
	}
	while (num[0] > 0 || num[1] > 0 || num[2] > 0 || num[3] > 0 || num[4] > 0 || num[5] > 0)
	{
		for (int i = 0; i < 6; i++)
		{
			if (num[i] > 0)
			{
				cout << p[i];
				num[i] -= 1;
			}
		}
	}
	cout << endl;
	return 0;
}