#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, t = 0;
	cin >> n;
	string name, birth, max = "1814/09/06", min = "2014/09/06", name_max, name_min;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> birth;
		if (birth >= "1814/09/06" && birth <= "2014/09/06")
		{
			t += 1;
			if (t == 1)
			{
				max = birth;
				min = birth;
				name_max = name;
				name_min = name;
				continue;
			}
			if (birth < max)
			{
				max = birth;
				name_max = name;
			}
			if (birth > min)
			{
				min = birth;
				name_min = name;
			}
		}
	}
	cout << t;
	if (t != 0)
	{
		cout << ' ' << name_max << ' ' << name_min << endl;
	}
	return 0;
}