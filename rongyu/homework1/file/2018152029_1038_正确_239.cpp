#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T, a_start, a_end, b_start, b_end, c_start, c_end;
	int new_length, i=0;
	char a[1000], b[1000], c[1000];
	char *x, *y, *z;
	cin >> T;
	while (T--)
	{
		i = 0;
		cin >> a >> b >> c;
		cin >> a_start >> a_end >> b_start >> b_end >> c_start >> c_end;
		new_length = -a_start + a_end - b_start + b_end - c_start + c_end + 3;
		char *p = new char[new_length];
		for (x = a + a_start - 1; x <= a + a_end - 1; x++)
		{
			*(p + i) = *x;
			i++;
		}
		for (y = b + b_start - 1; y <= b + b_end - 1; y++)
		{
			*(p + i) = *y;
			i++;
		}
		for (z = c + c_start - 1; z <= c + c_end - 1; z++)
		{
			*(p + i) = *z;
			i++;
		}
		for(int k=0;k<new_length;k++)
			cout<<*(p+k);
		cout << endl;
		delete p;
	}
	//system("pause");
	return 0;
}
