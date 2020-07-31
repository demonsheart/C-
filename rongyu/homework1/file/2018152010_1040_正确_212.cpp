#include <iostream>
int isNumber(char *p);
using namespace std;

int main()
{
     int t,n,i,j,result;
     char ch[100];
     cin>>t;
     while(t--)
     {
         cin>>ch;
         result=isNumber(ch);
         if(result!=-1)
         cout<<result/10<<endl;
         else
            cout<<-1<<endl;
     }
    return 0;
}

int isNumber(char *p)
{
        int num=0,i,j;
        while(*p!='\0')
        {
            if(*p>='0'&&*p<='9')
            {
                num=num+(*p-'0');
                num=num*10;
            }
            else
            {
                num=-1;
            }
            if(num==-1)
                break;
            *(p++);
        }
           return num;

}

