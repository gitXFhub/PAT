#include<iostream>
#include<string>

using namespace std;

int judge(string s)
{
	int len = s.size();
	if (len < 6) {
		return 2;
	}
	else {
		bool num = false, word = false;
		for (int i = 0; i < len; i++) {
			if (s[i] - '0' >= 0 && s[i] - '0' < 10) {
				num = true;
				continue;
			}
			else if (s[i] - 'a' >= 0 && s[i] - 'a' < 26) {
				word = true;
				continue;
			}
			else if (s[i] - 'A' >= 0 && s[i] - 'A' < 26) {
				word = true;
				continue;
			}
			else if (s[i] - '.' == 0) {
				continue;
			}
			else {
				return 3;
				break;
			}
		}
		if (num && word) {
			return 1;
		}
		else if (num) {
			return 5;
		}
		else if (word) {
			return 4;
		}
	}
	return 0;
}

int main() {
	int n;
	int arr[101] = { 0 };
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string p;
		getline(cin,p);
		arr[i] = judge(p);
	}
	for (int i = 0; i < n; i++)
	{
		switch (arr[i])
		{
		case 1:
			cout << "Your password is wan mei." << endl;
			break;
		case 2:
			cout << "Your password is tai duan le." << endl;
			break;
		case 3:
			cout << "Your password is tai luan le." << endl;
			break;
		case 4:
			cout << "Your password needs shu zi." << endl;
			break;
		case 5:
			cout << "Your password needs zi mu." << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}