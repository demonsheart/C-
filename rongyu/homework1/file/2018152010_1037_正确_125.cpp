#include <iostream>

using namespace std;

int main()
{
     int t,n,i,j;
     char ch;
     cin>>t;
     while(t--)
     {
         cin>>ch>>n;
         if(ch=='I')
         {
             int all=0;
             int *p=new int[n];
             for(i=0;i<n;i++)
             {
                 cin>>*p;
                 all=all+*p;
                 *(p++);
             }
             all=all/n;
             cout<<all<<endl;
         }
         else if(ch=='C')
         {
             char *q=new char[n],result=1;
             for(i=0;i<n;i++)
             {
                 cin>>*q;
                 if(*q>result)
                    result=*q;
                 *(q++);
             }
             cout<<result<<endl;
         }
         else
         {
             float *f=new float[n],res=100000000;
             for(i=0;i<n;i++)
             {
                 cin>>*f;
                 if(*f<res)
                    res=*f;
                 *(f++);

             }
             cout<<res<<endl;
         }
     }
    return 0;
}
