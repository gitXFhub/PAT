#include<iostream>

using namespace std;

int main()
{
	int n, s, ans = 0;
	int arr[10400] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = i / 2 + i / 3 + i / 5;
		arr[s] += 1;
	}
	for (int i = 0; i < 10400; i++)
	{
		if (arr[i] != 0)
		{
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}