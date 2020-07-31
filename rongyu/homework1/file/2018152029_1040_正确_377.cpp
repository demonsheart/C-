#include<bits/stdc++.h>
using namespace std;

int isNumber(char *sample,int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (sample[i]<'0'||sample[i]>'9')
		{
			flag = 0;
			break;
		}
	return flag;
}
int main()
{
	int T;
	cin >> T;
	char sample[1000];
	int length;
	long long int num;
	while (T--)
	{
		num = 0;
		memset(sample, 0, sizeof(sample));
		cin >> sample;
		length = strlen(sample);
		if (isNumber(sample, length))
		{
			for (int i = 0; i < length; i++)
				num += (sample[i]-'0') * pow(10,length-i-1);
			cout << num << endl;
		}
		else
			cout << "-1" << endl;
	}
	//system("pause");
	return 0;
}
