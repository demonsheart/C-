#include<iostream>
#include<cstring>
using namespace std;
int compare(char *a, char *b)
{
	int m, n, i, j;
	int sum[3] = {0};
	m = strlen(a);
	n = strlen(b);
	if (m > n)
		return 1;
	else if (m < n)
		return -1;
	else if (m == n)
	{
		for (i = 0; i < m; i++)
		{
			if (a[i] > b[i])
				sum[0]++;
			else if (a[i] == b[i])
				sum[1]++;
			else if (a[i] < b[i])
				sum[2]++;
		}
		if (sum[0] > sum[1] && sum[0] > sum[2])
			return 1;
		else if (sum[0]==sum[2])
			return 0;
		else if (sum[2] < sum[1] && sum[2] < sum[0])
			return -1;
	}
}
int main()
{
	int t;
	cin >> t;
	cin.ignore(10, '\n');
	while (t--)
	{
		char a[100] = { '\0' };
		char b[100] = { '\0' };
		cin >> a;
		cin >> b;
		int n;
		n = compare(a, b);
		cout << n << endl;
	}
}

