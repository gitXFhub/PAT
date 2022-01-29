#include<iostream>

using namespace std;

int main() 
{
	int n,num2,m;
	cin >> n;
	string arr[1001][2];
	for (int i = 0; i < n; i++)
	{
		string num1, num3;
		cin >> num1 >> num2 >> num3;
		arr[num2][0] = num1;
		arr[num2][1] = num3;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> num2;
		cout << arr[num2][0] << ' ' << arr[num2][1] << endl;
	}
	return 0;

}