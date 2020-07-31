#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	int m, n, max, min;
	
	cin >> T;
	while (T--)
	{
		cin >> m >> n;
		int **num;
		num = new int *[m];
		for (int i = 0; i < m; i++)
			num[i] = new int[n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>num[i][j];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if (i == 0 && j == 0)
				{
					max = num[i][j];
					min = num[i][j];
				}
				else
				{
					if (num[i][j] > max)
						max = num[i][j];
					if (num[i][j] < min)
						min = num[i][j];
				}
		cout << min << ' ' << max << endl;
		for (int i = 0; i < m; i++)
			delete[]num[i];
		delete[]num;
	}
	
	return 0;
}
