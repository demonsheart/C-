#include<iostream>
#include<cstring>
int isNumber(char *a)
{
	int m = strlen(a);
	int i, sum = 0;
	int flag = 0;
	if (a[0] == '-')
		flag = 1;
	if (flag == 0)
	{
		for (i = 0; i < m; i++)
		{
			if (a[i]<'0' || a[i]>'9')
				return -1;
			else
			{
				sum = sum + a[i] - '0';
			}
			if (i != m - 1)
				sum *= 10;
		}
		return sum;
	}
	else if (flag == 1)
	{
		for (i = 1; i < m; i++)
		{
			if (a[i]<'0' || a[i]>'9')
				return -1;
			else
			{
				sum = sum + a[i] - '0';
			}
			if (i != m - 1)
				sum *= 10;
		}
		return -sum;
	}
}
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore(10, '\n');
	while (t--)
	{
		char a[100];
		int sum;
		cin >> a;
		sum = isNumber(a);
		cout << sum << endl;
	}
}

