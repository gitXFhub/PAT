#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int m, n, s, j = 0;
	vector <string> ans;
	bool flag = false;
	cin >> m >> n >> s;
	for (int i = 1; i <= m; i++)
	{
		string z;
		cin >> z;
		if (i == s)
		{
			ans.push_back(z);
			j = s;
			flag = true;
			continue;
		}
		if (flag)
		{
			if (i == j + n || i == j)
			{
				bool tof = true;
				for (size_t k = 0; k < ans.size(); k++)
				{
					if (z == ans[k])
					{
						tof = false;
						j++;
						break;
					}
				}
				if (tof)
				{
					ans.push_back(z);
					j = i;
				}
			}
		}
	}
	if (ans.size() == 0)
	{
		cout << "Keep going..." << endl;
	}
	else
	{
		for (size_t i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << endl;
		}
	}
	return 0;
}