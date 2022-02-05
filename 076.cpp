#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	string pri;
	vector <int> ans;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cin >> pri;
			if (pri.size() == 3 && pri[2] == 'T')
			{
				ans.push_back(pri[0] - '@');
			}
		}
	}
	for (size_t i = 0; i < ans.size()-1; i++)
	{
		cout << ans[i];
	}
	cout << ans[ans.size() - 1] << endl;
	return 0;
}