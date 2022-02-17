#include<iostream>
#include<string>

using namespace std;

int main()
{
	string que, str;
	size_t y = 0, n = 0;
	int arr[1000] = { 0 };
	cin >> que >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		bool tof = true;
		for (size_t j = 0; j < que.size(); j++)
		{
			if (arr[j] == 1)
			{
				continue;
			}
			if (str[i] == que[j])
			{
				tof = false;
				arr[j] += 1;
				y++;
				break;
			}
		}
		if (tof)
		{
			n++;
		}
	}
	if (y == str.size())
	{
		cout << "Yes" << ' ' << que.size() - str.size() << endl;
	}
	else
	{
		cout << "No" << ' ' << n << endl;
	}
	return 0;
}