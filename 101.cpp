#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int a, d, a1 = 0;
	double c, bc, ans;
	string z, z1, z2;
	cin >> a >> d;
	z = to_string(a);
	for (size_t i = 0; i < z.size() - d; i++)
	{
		z1 += z[i];
	}
	for (size_t i = z.size() - d; i < z.size(); i++)
	{
		z2 += z[i];
	}
	z2 += z1;
	a1 = stoi(z2);
	c = a1;
	bc = a;
	ans = c / bc;
	cout << setprecision(2) << fixed << ans << endl;
	return 0;
}