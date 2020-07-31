#include <iostream>
using namespace std;
int main()
{
    int t;
    char ch1[100],ch2[100],ch3[100];
    int a1,b1,a2,b2,a3,b3;
    cin>>t;
    while(t--)
    {
        cin>>ch1>>ch2>>ch3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        int n=b1+b2+b3-a1-a2-a3;
        int j=0;
        char *newChar;
        newChar=new char[n];
        char *p;
        p=ch1;
        for(int i=a1-1;i<=b1-1;i++,j++)
            *(newChar+j)=*(p+i);
        p=ch2;
        for(int i=a2-1;i<=b2-1;i++,j++)
            *(newChar+j)=*(p+i);
        p=ch3;
        for(int i=a3-1;i<=b3-1;i++,j++)
            *(newChar+j)=*(p+i);
        for(int i=0;i<j;i++)
            cout<<*(newChar+i);
        cout<<endl;
    }
    return 0;
}

