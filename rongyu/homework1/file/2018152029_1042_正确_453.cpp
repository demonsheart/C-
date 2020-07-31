#include<bits/stdc++.h>
using namespace std;
int judge(char *s, char *t)
{
	int a = strlen(s), b = strlen(t);
	int low = 0, high = 0;
	if (a != b)
	{
		if (a > b)return 1;
		else if (a == b)return 0;
		else if (a < b)return -1;
	}
	else
	{
		for (int i = 0; i < a; i++)
		{
			if (s[i] > t[i])high++;
			else if (s[i] < t[i])low++;
		}
		if (high > low)return 1;
		else if (high == low)return 0;
		else if (high < low)return -1;
	}

}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		char s[1000], t[1000];
		cin >> s >> t;
		cout << judge(s, t) << endl;
	}
	//system("pause");
	return 0;
}
