#include<iostream>

using namespace std;

int main()
{
	int n, m1, m2, h1, h2, d1 = 0, d2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m1 >> h1 >> m2 >> h2;
		if (m1 + m2 == h1 && m1 + m2 != h2)
		{
			d2 += 1;
		}
		if (m1 + m2 == h2 && m1 + m2 != h1)
		{
			d1 += 1;
		}
	}
	cout << d1 << ' ' << d2 << endl;
	return 0;
}