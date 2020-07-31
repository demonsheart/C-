/*3
C 5
A D E B C
I 6
22 55 77 33 88 55
F 4
3.1 1.9 6.5 4.8
样例输出
E
55
1.9
I表示整数类型，C表示字符类型，F表示浮点数类型；然后输入n表示数组长度。*/
#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,i,n;
    float sum,anum,fmin;
    int inum[100];
    float fnum[100];
    char ch,chmax;
    char ich[100];
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>ch>>n;
        switch(ch)
        {
            case 'I':
            {
                sum=0;
                for(i=0;i<n;i++)
                {
                    cin>>inum[i];
                    sum+=inum[i];
                }
                anum=sum/(n*1.0);
                cout<<anum;
                break;
            }
            case 'C':
            {
                chmax='A';
                for(i=0;i<n;i++)
                {
                    cin>>ich[i];
                    if(ich[i]>chmax)
                        chmax=ich[i];
                }
                cout<<chmax;
                break;
            }
            case 'F':
            {
                fmin=999999.0;
                for(i=0;i<n;i++)
                {
                    cin>>fnum[i];
                    if(fnum[i]<fmin)
                        fmin=fnum[i];
                }
                cout<<fmin;
                break;
            }
        }
        cout<<endl;
    }
}

