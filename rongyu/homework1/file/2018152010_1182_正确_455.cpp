#include <iostream>
char *strAdd(char *s1, char *s2);
using namespace std;

int main()
{
    int t;
    char ch1[100],ch2[100],*res;
    cin>>t;
    cin.ignore(2,'\n');
    while(t--)
    {
        cin>>ch1>>ch2;
        res=strAdd(ch1,ch2);
        cout<<ch1<<' '<<ch2<<' '<<res<<endl;
    }

    return 0;
}
char *strAdd(char *s1, char *s2)
{
    char *s3=new char[200];
    int z=0,i;
    for(i=0;*(s1+i)!='\0';i++)
    {
        *(s3+z)=*(s1+i);
        z++;
    }

    for(i=0;*(s2+i)!='\0';i++)
    {
        *(s3+z)=*(s2+i);
        z++;
    }
    *(s3+z)='\0';
    return s3;
}
