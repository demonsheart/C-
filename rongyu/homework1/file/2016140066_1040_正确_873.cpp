#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int isNumber(char *ch)
{
	int i, number;
	stringstream stream;
	string f;
	for (i = 0; i < 4; i++)

	{
		if ((int)ch[i] >= 48 && (int)ch[i] <= 57)
		{
			stream << ch;
			stream >> number;
			stream.clear();
		}
	}

	for (i = 0; i < 4; i++)
	{

		if ((int)ch[i] >= 48 && (int)ch[i] <= 57)

		{
			continue;
		}

		else
		{
			return -1;
		}
	}

	return number;
}
int main()
{

	int t, i, number, x;

	char *ch1 = new char[4];

	cin >> t;

	while (t--)
	{
		cin >> ch1;

		x = isNumber(ch1);

		cout << x << endl;

	}
	return -1;
	delete[]ch1;
}
