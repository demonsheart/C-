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
        cin>>s;
        cout<<isNumber(s)<<endl;
    }

}
int isNumber(char *p)
{
    int i,number=0,num,j;
    for(i=0;*(p+i)!='\0';i++)
    {

        if(*(p+i)>'9'||*(p+i)<'0')
    {
        return (-1);
    }
    }
    number=(*p-'0')*1000+(*(p+1)-'0')*100+(*(p+2)-'0')*10+(*(p+3)-'0');


    return number;
}

