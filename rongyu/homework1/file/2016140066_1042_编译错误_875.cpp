#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int compare(char *S, char *T)
{
	
	if (strlen(S) > strlen(T))
	{
		
		return 1;
	}
	if (strlen(S) < strlen(T))
	{
		
		return -1;
	}
	else
	{
		int x = 0, y = 0;
		int i;
		if ((int)*S > (int)*T)
			x = x + 1;
		if ((int)*S < (int)*T)
			y = y + 1;
		else
		{
			x += 0;
			y += 0;
		}
		for (i = 0; i < 6; i++)
		{
			S++;
			T++;

			if ((int)*S > (int)*T)
				x = x + 1;
			if ((int)*S < (int)*T)
				y = y + 1;
			else
			{
				x += 0;
				y += 0;
			}
		}
		if (x == y)
			return 0;
		if (x > y)
			return 1;
		if (x < y)
			return -1;
	}
	

}

int main()
{
	int l;
	cin >> l;
	while (l--)
	{
		char *p = new char;
		char*q = new char;
		cin >> p >> q;
		printf("%d\n", compare(p, q));
	}
                  delete[]p;
                  delete[]q;
                  return 0;
}
