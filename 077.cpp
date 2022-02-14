#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int n, m;
	vector <int> arr, ans;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int teacher;
		double sum = 0;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			if (j == 0)
			{
				teacher = a;
				continue;
			}
			else
			{
				if (a<0 || a>m)
				{
					continue;
				}
				arr.push_back(a);
			}
		}
		sort(arr.begin(), arr.end());
		arr.pop_back();
		reverse(arr.begin(), arr.end());
		arr.pop_back();
		for (size_t k = 0; k < arr.size(); k++)
		{
			sum += arr[k];
		}
		sum /= arr.size();
		ans.push_back(round((sum + teacher) / 2));
		arr.clear();
	}
	for (size_t i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}