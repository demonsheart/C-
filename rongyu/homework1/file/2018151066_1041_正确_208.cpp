#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string *s = new string[12];
	string x[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	for (int i = 0; i < 12; i++)
		*(s + i) = x[i];
	while (t--)
	{
		int num;
		cin >> num;
		if (num > 12 || num < 1)
			cout << "error" << endl;
		else
		cout << *(s + num - 1) << endl;
	}
	return 0;
}
