#include <iostream>
#include <sstream>
using namespace std;
char *strAdd(char *s1, char *s2)
{
	string c1, c2, c3;
	char *s3 = new char[10];
	stringstream stream;
	stream << s1;
	stream >> c1;
	stream.clear();
	stream << s2;
	stream >> c2;
	stream.clear();

	c3 = c1 + c2;

	stream << c3;
	stream >> s3;
	stream.clear();
	cout << s1 << " " << s2 << " " << s3 << endl;
	return 0;

}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char *s1 = new char;
		char *s2 = new char;
		cin >> s1 >> s2;
		*strAdd(s1, s2);
	}
}

