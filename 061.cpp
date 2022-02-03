#include<iostream>

using namespace std;

int main()
{
	int n, m, z;
	int full[101] = { 0 }, tof[101] = { 0 }, score[101] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> z;
		full[i] = z;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> z;
		tof[i] = z;
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			cin >> z;
			if (z == tof[i])
			{
				score[j] += full[i];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << score[i] << endl;
	}
	return 0;
}