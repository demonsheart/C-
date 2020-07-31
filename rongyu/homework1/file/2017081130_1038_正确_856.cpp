/*5
abcdefghij
ABCDEFGHIJ
aabbccddee
3 5
2 6
8 10
AABBCCDDEE
ffgghhiijj
FFGGHHIIJJ
1 4
5 8
2 7
?¨´??????
cdeBCDEFdee
AABBhhiiFGGHHI*/
#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,i,a1,a2,b1,b2,c1,c2,j;
    char *ap;
    char *bp;
    char *cp;
    cin>>t;
    while(t--)
    {
        cp=new char[100];
        ap=new char[100];
        bp=new char[100];
        cin>>ap>>bp>>cp;
        char resch[100]={0};
        j=0;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;
        for(i=a1-1;i<a2;i++)
        {
            resch[j++]=ap[i];
        }
        for(i=b1-1;i<b2;i++)
        {
            resch[j++]=bp[i];
        }
        for(i=c1-1;i<c2;i++)
        {
            resch[j++]=cp[i];
        }
        resch[j]='\0';
        cout<<resch<<endl;
        delete[]ap;
        delete[]bp;
        delete[]cp;
    }
}

