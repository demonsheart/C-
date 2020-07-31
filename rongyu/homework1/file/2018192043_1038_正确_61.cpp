#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str1[20],str2[20],str3[20];
        int a,b,c,d,e,f;
        int len;
        cin>>str1>>str2>>str3;
        cin>>a>>b>>c>>d>>e>>f;
        len=b+d+f-a-c-e+3;
        char *str=new char[len];
        len=0;
        for(int i=a-1;i<b;i++)
            *(str+(len++))=*(str1+i);
        for(int i=c-1;i<d;i++)
            *(str+(len++))=*(str2+i);
        for(int i=e-1;i<f;i++)
            *(str+(len++))=*(str3+i);
        cout<<str<<endl;
    }
    return 0;
}

