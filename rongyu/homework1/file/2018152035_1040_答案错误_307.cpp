#include<iostream>
#include<math.h>
int isNumber(char *p);
using namespace std;
int main()
{
	int T;
	char str1[100];
	char *s=str1;

	cin>>T;
	while(T--)
	{
		cin.ignore('\n');
		cin.getline(s,'\n');
		cout<<isNumber(s)<<endl;
	}

}
int isNumber(char *p)
{
    int i,number=0,num;
    for(i=0;*(p+i)!='\0';i++)
        if(*(p+i)>'9'||*(p+i)<'0')
    {
        return (-1);
    }
    else
    {
        for(i=0;*(p+i)!='\0';i++)
        {
            num=*(p+i)-'0';
            number+=num*(pow(10,3-i));
        }
    }
    return number;
}
