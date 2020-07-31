#include<iostream>
#include<string>
using namespace std;
int isNumber(string *s)
{
	int sum = 0;
	for (int i = 0; i < (*s).length(); i++)
	{
		sum *= 10;
		if ((*s)[i]<'0' || (*s)[i]>'9')
			return -1;
		else
			sum += (*s)[i]-'0';
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string *s=new string;
		cin >> *s;
		cout<<isNumber(s)<<endl;
	}
	return 0;
}
