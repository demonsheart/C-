#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char *strAdd(char *s1, char *s2)
{
	char *c = new char[20000];
	for (int i = 0; i < strlen(s1); i++)
		*(c + i) = *(s1 + i);
	for (int i = 0; i <= strlen(s2); i++)
		*(c + strlen(s1) + i) = *(s2 + i);
	return c;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char *a = new char[10000];
		char *b = new char[10000];
		cin >> a >> b;
		cout << a<<' ' << b<<' '<<strAdd(a,b)<<endl;
	}
	return 0;
}
