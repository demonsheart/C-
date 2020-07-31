#include<bits/stdc++.h>
using namespace std;

int cmp(char *s1,char *s2)
{
	int len1,len2,flag=0,i;
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1>len2)
		return 1;
	else if(len1<len2)
		return -1;
	else
	{
		for(i=0;*(s1+i)!='\0';i++)
		{
			if(*(s1+i)>*(s2+i))
				flag++;
			else if(*(s1+i)<*(s2+i))
				flag--;
		}
		if(flag>0)
			return 1;
		else if(flag<0)
			return -1;
		else
			return 0;
	}
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
    	cout<<cmp(s1,s2)<<endl;
    }
     
    return 0;
}
