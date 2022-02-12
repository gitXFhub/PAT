#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, s, c = 0;
	vector <int> arr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		arr.push_back(s);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		if (n - i <= arr[i] - 1)
		{
			c = n - i;
			break;
		}
	}
	cout << c;
	return 0;
}