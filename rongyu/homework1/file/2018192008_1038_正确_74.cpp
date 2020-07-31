#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore(10, '\n');
	while (t--)
	{
		int i, j, x1, y1, x2, y2, x3, y3, sum = 0;
		char a[11], b[11], c[11];
		cin >> a;
		cin.ignore(10, '\n');
		cin >> b;
		cin.ignore(10, '\n');
		cin >> c;
		cin.ignore(10, '\n');
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		sum = y1 - x1 + y2 - x2 + y3 - x3 + 3;
		char *d = new char[sum];
		for (i = x1 - 1, j = 0; i < y1; i++, j++)
			*(d + j) = *(a + i);
		for (i = x2 - 1; i < y2; i++, j++)
			*(d + j) = *(b + i);
		for (i = x3 - 1; i < y3; i++, j++)
			*(d + j) = *(c + i);
		*(d + j) = '\0';
		cout << d << endl;
	}
	return 0;
}

