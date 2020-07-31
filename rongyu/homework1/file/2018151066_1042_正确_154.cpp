#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int ax(char *S, char *T)
{
	int sum = 0;
	if (strlen(S) > strlen(T))
		return 1;
	else if (strlen(S) < strlen(T))
		return -1;
	else
	{
		int sum = 0;
		for (int i = 0; i < strlen(S); i++)
		{
			if (*(S + i) > *(T + i))
				sum++;
			else if (*(S + i) < *(T + i))
				sum--;
		}
		if (sum > 0)
			return 1;
		else if (sum < 0)
			return -1;
		else
			return 0;
	}
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
		cout << ax(a, b) << endl;
	}
	return 0;
}
