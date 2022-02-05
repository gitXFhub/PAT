#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, x, y, len_max = 0, len_min = 0;
	string id, max, min;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> id >> x >> y;
		int z = pow(x, 2) + pow(y, 2);
		if (i == 0)
		{
			len_max = z;
			len_min = z;
			max = id;
			min = id;
		}
		else
		{
			if (z > len_max)
			{
				len_max = z;
				max = id;
			}
			if (z < len_min)
			{
				len_min = z;
				min = id;
			}
		}
	}
	cout << min << ' ' << max << endl;
	return 0;
}