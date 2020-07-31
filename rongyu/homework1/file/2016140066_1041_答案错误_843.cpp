#include <iostream>
using namespace std;

int main()
{
	int t,n;
	const char *pg[12] = { "January","February" ,"March","April","May","June","July","August","September","October","November","December" };
	cin >> t;

	while (t--)
	{
		
		
		cin >> n;
		if (n > 0 & n < 13)
		{
			cout << pg[n - 1]<<endl;
		}
		else
			cout << "error";
	}


}
