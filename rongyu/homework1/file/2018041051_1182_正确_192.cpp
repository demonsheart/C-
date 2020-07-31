#include<bits/stdc++.h>
using namespace std;

char *strAdd(char *s1, char *s2)
{
	int i,j=0;
	char str[2000];
	memset(str,'\0',2000);
	for(i=0;*(s1+i)!='\0';i++)
	{
		str[i]=*(s1+i);
		j=i+1;
	}
	for(i=0;*(s2+i)!='\0';i++,j++)
	{
		str[j]=*(s2+i);
	}
	return str;
}

int main()
{
    int t;
    char str1[1000],str2[1000];
    char *s1,*s2;
    cin>>t;
    getchar();
    while(t--)
    {
    	cin>>str1>>str2;
    	s1=str1;
    	s2=str2;
    	cout<<str1<<" "<<str2<<" ";
    	cout<<strAdd(s1,s2)<<endl;
    }
     
    return 0;
}
