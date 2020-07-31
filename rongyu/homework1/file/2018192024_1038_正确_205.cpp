#include <iostream>

using namespace std;

int main()
{
    int t,i,j,len;
    cin>>t;
    while(t--)
    {
        char ch1[11],ch2[11],ch3[11];
        cin>>ch1>>ch2>>ch3;
        int a1,b1,a2,b2,a3,b3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        len=b1+b2+b3-a1-a2-a3+3;
        char *chNew=new char[len];
        for(i=a1-1;i<b1;i++)
            chNew[i-a1+1]=ch1[i];
        for(i=a2-1,j=b1-a1+1;i<b2;i++,j++)
            chNew[j]=ch2[i];
        for(i=a3-1,j=b1-a1+b2-a2+2;i<b3;i++,j++)
            chNew[j]=ch3[i];
        chNew[j]='\0';
        cout<<chNew<<endl;
    }
    return 0;
}

