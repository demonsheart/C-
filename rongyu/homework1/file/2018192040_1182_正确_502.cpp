#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
char *strAdd(char *s1, char *s2)
{
    int l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    char *p=new char(l1+l2+1);
    int i=0,k=0;
    for(i=0;i<l1;i++,k++)
    	*(p+k)=*(s1+i);
    for(i=0;i<l2;i++,k++)
    	*(p+k)=*(s2+i);
    *(p+l1+l2)='\0';
    return p;
}
int main()
{
//  freopen("C:\Users\acer\Desktop\in.txt"  ,"r"  ,stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int i,k=0;
        char a[100]={0},b[100]={0};
        cin>>a;
        cin>>b;
        char *p=strAdd(a,b);
        cout<<a<<' '<<b<<' '<<p<<endl;
         
    }
    return 0;
}
