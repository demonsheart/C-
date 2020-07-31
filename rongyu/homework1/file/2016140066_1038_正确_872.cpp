#include <iostream>
#include <string>
using namespace std;
string subString(char *p, int start, int len)

{

	char *q = p + start-1;

	q[len] = '\0';

	return q;

}

int main()
{
	int start1, start2, start3, len1, len2, len3, f1, f2, f3,t;
	char *c1 = new char[10];
	char *c2 = new char[10];
	char *c3 = new char[10];
	string s1, s2, s3;
	cin >> t;
	while (t--)
	{

		cin >> c1 >> c2 >> c3 >> start1 >> f1 >> start2 >> f2 >> start3 >> f3;
		len1 = f1 - start1+1;
		len2 = f2 - start2+1;
		len3 = f3 - start3+1;

		s1 = subString(c1, start1, len1);
		s2 = subString(c2, start2, len2);
		s3 = subString(c3, start3, len3);
		cout << s1 + s2 + s3<<endl;
	}
}
