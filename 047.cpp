#include<iostream>

using namespace std;

int main()
{
	int n, t, num, score, max = 0;
	cin >> n;
	int team[1001] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d-%d %d", &t, &num, &score);
		team[t] += score;
	}
	for (int i = 0; i < 1001; i++)
	{
		if (team[i] > team[max])
		{
			max = i;
		}
	}
	cout << max << ' ' << team[max] << endl;
	return 0;
}