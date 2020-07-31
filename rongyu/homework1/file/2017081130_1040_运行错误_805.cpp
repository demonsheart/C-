/*3
1234
567a
0890
样例输出
1234
-1
890
如果字符串表示一个整数，则计算出这个整数并且返回

如果字符串不是表示一个整数，则返回-1*/
#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int isNumber(char*ch)
{
    int i,j,flag=1,n=0,sum=0;
    float n1=0.1;
    for(i=0;ch[i]!='\0';i++)
    {
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            flag=0;
        n++;
    }
    if(flag==1)
    {
        for(i=n-1,j=0;i>=0;i--,j++)
        {
            n1*=10;
            sum+=n1*(ch[i]-'0');
        }
        return sum;
    }
    else
        return -1;
}
int main()
{
    int t;
    char ch[100];
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>ch;
        char *p=new char[100];
        p=ch;
        cout<<isNumber(p)<<endl;
        delete []p;

    }
}

