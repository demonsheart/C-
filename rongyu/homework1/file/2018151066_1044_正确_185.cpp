#include<iostream>
#include<limits.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int max = INT_MIN, min = INT_MAX;
		int **x = new int*[n];
		for (int i = 0; i < n; i++)
			*(x + i) = new int[m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> *(*(x + i) + j);
				if (*(*(x + i) + j) > max)
					max = *(*(x + i) + j);
				if (*(*(x + i) + j) < min)
					min = *(*(x + i) + j);
			}
		cout << min << ' ' << max<<endl;
		
	}
	return 0;
}
