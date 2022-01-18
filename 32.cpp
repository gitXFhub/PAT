#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int id, score;
	int* arr = new int[N+1];
	for (int m = 0; m < N+1; m++)
	{
		arr[m] = 0;
	}
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> id >> score;
		arr[id] += score;
		if (arr[id] >= arr[max])
		{
			max = id;
		}
	}
	cout << max << ' ' << arr[max] << endl;
	delete[]arr;
	return 0;
}