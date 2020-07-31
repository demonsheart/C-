#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string *a = new string;
		string *b = new string;
		string *c = new string;
		cin >> *a >> *b >> *c;
		int x[3][2];
		for (int i = 0; i < 3; i++)
			cin >> x[i][0] >> x[i][1];
		string *s = new string;
		*s = (*a).substr(x[0][0] - 1, x[0][1] - x[0][0] + 1) + (*b).substr(x[1][0] - 1, x[1][1] - x[1][0] + 1) + (*c).substr(x[2][0] - 1, x[2][1] - x[2][0] + 1);
		cout << *s << endl;
		
	}

}
