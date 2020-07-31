#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	//cin.ignore(10,'\n');
	while (t--)
	{
		int **p;
		int m, n, i, j;
		cin >> m >> n;
		p = new int *[m];
		for (i = 0; i < m; i++)
			p[i] = new int[n];
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> p[i][j];
			}
		}
		int max = p[0][0], min = p[0][0];
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (p[i][j] > max)
					max = p[i][j];
				else if (p[i][j] < min)
					min = p[i][j];
			}
		}
		cout << min << " " << max << endl;
	}
	return 0;
}

