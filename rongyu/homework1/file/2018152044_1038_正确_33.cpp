#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str1[11],str2[11],str3[11];
        cin>>str1;
        cin>>str2;
        cin>>str3;
        int x1,x2,y1,y2,z1,z2;
        cin>>x1;
        cin>>x2;
        cin>>y1;
        cin>>y2;
        cin>>z1;
        cin>>z2;
        int n;
        n=x2-x1+1+y2-y1+1+z2-z1+1+1;
        x1--,x2--,y1--,y2--,z1--,z2--;
        char *arr=new char[n];
        int i,j,k;
        for(i=0;i<=x2-x1;i++)
            *(arr+i)=*(str1+x1+i);
        for(j=0;j<=y2-y1;j++)
            *(arr+i+j)=*(str2+y1+j);
        for(k=0;k<=z2-z1;k++)
            *(arr+i+j+k)=*(str3+z1+k);
        cout<<arr<<endl;
    }
    return 0;
}
