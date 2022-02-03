#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, a = 0, z, t;
	int arr[38] = { 0 };
	vector <int> c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		cin >> z;
		while (z != 0) // 当 n 不等于 0 的时候就执行循环体或者用 n>0 作为条件
		{
			t = z % 10; // n 对 10 求余算出个位数 t
			s += t; // s = s + t // 把求出的 t 值累加到 sum 中
			z = z / 10; // n 除以 10 去除个位上的值
		}
		arr[s] += 1;
		if (arr[s] == 1)
		{
			a += 1;
			c.push_back(s);
		}
	}
	cout << a << endl;
	sort(c.begin(),c.end());
	if (c.size() > 1)
	{
		for (size_t i = 0; i < c.size() - 1; i++)
		{
			cout << c[i] << ' ';
		}
	}
	cout << c[c.size() - 1] << endl;
	return 0;
}