#include<iostream>
using namespace std;
char *strAdd(char *s1, char *s2)
{
	cout<<s1<<" "<<s2<<" "<<s1<<s2;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[50];
		char ch2[50];
		cin>>ch1;
		cin>>ch2;
		*strAdd(ch1,ch2);
		cout<<endl;
	}
	return 0;
} 
