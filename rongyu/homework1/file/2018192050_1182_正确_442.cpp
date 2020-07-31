#include<bits/stdc++.h> 
using namespace std; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str3[100],str1[100],str2[100];
		cin>>str1>>str2;
		cout<<str1<<" "<<str2<<" ";
		strcat(str1,str2);
		cout<<str1<<endl;
	}
	return 0;
}
