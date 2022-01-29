#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void pri(vector <int> x1, vector <int> x2, vector <string> y1, vector <string> y2)//x1,y1存的是长链表的数字和地址，x2,y2是短的
{
	/*vector <int> ::iterator p1 = x1.begin();
	vector <string> ::iterator p2 = y1.begin();
	if (x1.size() != 2 * x2.size())
	{
		for (size_t i = 1; i <= x2.size(); i++)//按规律合并
		{
			int p = 2 * i;
			x1.insert(p1 + p + i - 1, x2[x2.size() - i]);
			y1.insert(p2 + p + i - 1, y2[x2.size() - i]);
			p1 = x1.begin();
			p2 = y1.begin();
		}
	}
	else
	{
		if (x2.size() == 1)
		{
			x1.push_back(x2[0]);
			y1.insert(p2 + 2, y2[0]);
			p2 = y1.begin();
		}
		else
		{
			size_t m = 1;
			for (m; m <= x2.size() - 1; m++)//按规律合并
			{
				int p = 2 * m;
				x1.insert(p1 + p + m - 1, x2[x2.size() - m]);
				y1.insert(p2 + p + m - 1, y2[x2.size() - m]);
				p1 = x1.begin();
				p2 = y1.begin();
			}
			x1.push_back(x2[0]);
			y1.insert(p2 + 3 * m - 1, y2[0]);
		}
	}
	for (size_t i = 0; i < x1.size(); i++)
	{
		cout << y1[i] << ' ' << x1[i] << ' ' << y1[i + 1] << endl;
	}*/
	int z = x1.size() % x2.size();//判断长的是否是短的两倍
	for (size_t i = 0; i < x2.size(); i++)
	{
		cout << y1[2 * i] << ' ' << x1[2 * i] << ' ' << y1[2 * i + 1] << endl;
		cout << y1[2 * i + 1] << ' ' << x1[2 * i + 1] << ' ' << y2[x2.size() - 1 - i] << endl;
		cout << y2[x2.size() - 1 - i] << ' ' << x2[x2.size() - 1 - i] << ' ' << y1[2 * i + 2] << endl;
	}
	//输出非2倍情况剩余元素
	if (z != 0)
	{
		int z1 = x2.size() * 2;
		for (size_t j = z1; j < x1.size(); j++)
		{
			cout << y1[j] << ' ' << x1[j] << ' ' << y1[j + 1] << endl;
		}
	}
}

int main()
{
	vector <int> data1, data2, num;
	vector <string> address1, address2, add, next;
	string L1, L2, a, n;
	int N, d, p1 = 0, p2 = 0;//p当索引用
	cin >> L1 >> L2 >> N;
	address1.push_back(L1);
	address2.push_back(L2);
	for (int i = 0; i < N; i++)
	{
		cin >> a >> d >> n;
		if (a == address1[p1]) {//加快拼接
			address1.push_back(n);
			data1.push_back(d);
			p1++;
			continue;
		}
		else if (a == address2[p2]) {
			address2.push_back(n);
			data2.push_back(d);
			p2++;
			continue;
		}
		add.push_back(a);
		num.push_back(d);
		next.push_back(n);
	}
	//将剩余符合要求的元素插入链表中
	for (size_t q = 0; q < add.size(); q++)
	{
		for (size_t j = 0; j < add.size(); j++)
		{
			if (address1[p1] == add[j] && address1[p1] != "-1")//防止恶意输入导致空地址能“指向”其他元素
			{
				data1.push_back(num[j]);
				address1.push_back(next[j]);
				p1 += 1;
				break;
			}
			if (address2[p2] == add[j] && address2[p2] != "-1")
			{
				data2.push_back(num[j]);
				address2.push_back(next[j]);
				p2 += 1;
				break;
			}
		}
	}
	if (data1.size() > data2.size())
	{
		pri(data1, data2, address1, address2);
	}
	else
	{
		pri(data2, data1, address2, address1);
	}
	return 0;
}