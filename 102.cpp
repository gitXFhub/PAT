#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, max1 = 0, max2 = 0;
	string max1_id = "0", max2_id = "0";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m, c;
		string id;
		cin >> id >> m >> c;
		if (c > max1)
		{
			max1 = c;
			max1_id = id;
		}
		if (m * c > max2)
		{
			max2 = m * c;
			max2_id = id;
		}
	}
	cout << max1_id << ' ' << max1 << endl;
	cout << max2_id << ' ' << max2 << endl;
	return 0;
}