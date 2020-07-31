#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	const char *x[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	while (t--)
	{
		int num;
		cin >> num;
		if (num > 12 || num < 1)
			cout << "error" << endl;
		else
			cout << *(x + num - 1) << endl;
	}
	return 0;
}
