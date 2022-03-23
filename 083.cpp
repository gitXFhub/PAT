#include<iostream>
#include<stdlib.h>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	int n;
	map <int, int> dic;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int s, c;
		cin >> s;
		c = abs(i - s);
		dic[c]++;
		continue;
	}
	map<int, int>::reverse_iterator p = dic.rbegin();
	while (p != dic.rend())
	{
		int key = p->first;
		int value = p->second;
		if (value > 1)
		{
			cout << key << ' ' << value << endl;
		}
		p++;
	}
	return 0;
}