#include<bits/stdc++.h>

const int size=1e3;
char a[3][size];
int b[3][3];

using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin >> a[0] >> a[1] >> a[2];
		for(int j = 0; j < 3; j++) {
			cin >> b[j][0] >> b[j][1];
			b[j][2] = b[j][1] - b[j][0] + 1;
		}
		int len = b[0][2] + b[1][2] + b[2][2];
		char *str = new char[len];
		for (int j = 0, pos = 0; j < 3; j++)
		{
			copy(a[j] + b[j][0] - 1, a[j] + b[j][1], str + pos);
			pos += b[j][2];
		}
		cout << str << endl;
	}
} 
