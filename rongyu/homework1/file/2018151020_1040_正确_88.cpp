#include<iostream>
#include<string.h>
using namespace std;

int isNumber(char*p);

int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {
        char str[100];
        cin>>str;
        cout<<isNumber(str)<<endl;
    }
    return 0;

}

int isNumber(char*p)
{
    int sum=0;
    for(int i=0 ;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
            sum=sum*10+*(p+i)-'0';
        else
            return -1;
    }
    return sum;
}

