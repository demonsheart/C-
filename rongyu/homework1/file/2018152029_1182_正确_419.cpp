#include<bits/stdc++.h>
using namespace std;
char *strAdd(char *a, char *b)
{
	char newstr[2000] = { '\0' };
	
	int i = 0;
	for (int j = 0; a[j] != '\0'; j++)
	{
		newstr[i] = a[j];
		i++;
	}
	for (int j = 0; b[j] != '\0'; j++)
	{
		newstr[i] = b[j];
		i++;
	}
	return newstr;
}
int main()
{
	int T;
	cin >> T;
	char a[1000], b[1000];
	while (T--)
	{
		cin >> a >> b;
		cout << a << ' ' << b << ' ' << strAdd(a, b) << endl;
	}
	//system("pause");
	return 0;
}
