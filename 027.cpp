#include<iostream>
#include<cmath>

using namespace std;

int judge(int x)
{
	int s = 0;
	int half = (x + 1) / 2;
	while (pow(s, 2) <= half)
	{
		s += 1;
	}
	return s - 1;
}

void print(int e,int d,char a)//第一个参数是末项，第二个参数是第几项
{
	int sn = 1 + (d - 1) * 2;
	if (sn == e)
	{
		for (int i = 0; i < e; i++)
		{
			cout << a;
		}
		cout << endl;
	}
	else
	{
		for (int i = 0; i < (e - sn) / 2; i++)
		{
			cout << ' ';
		}
		for (int i = 0; i < sn; i++)
		{
			cout << a;
		}
		cout << endl;
	}
}

int main()
{
	int n;
	char f;
	cin >> n >> f;
	int p = judge(n);
	int e = 1 + (p - 1) * 2;
	for (int i = p;i > 0; i--)
	{
		print(e, i, f);
	}
	if (p >= 2)
	{
		for (int i = 2; i <= p; i++)
		{
			print(e, i, f);
		}
	}
	cout << n - 2 * pow(p, 2) + 1;
	return 0;
}