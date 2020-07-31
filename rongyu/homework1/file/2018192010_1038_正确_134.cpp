#include <iostream>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,t,len,a[3],b[3];
    char *str1 = new char[11];
    char *str2 = new char[11];
    char *str3 = new char[11];
    cin >> t;
    while(t--)
    {
        len=k=j=0;

        cin >> str1;
        cin >> str2;
        cin >> str3;
        for(i=0;i<3;i++)
        {
            cin >> *(a+i);
            cin >> *(b+i);
            len=len+*(b+i)-*(a+i);
            len++;
        }
        char *str = new char[len];
        for(i=0;i<3;i++)
        {
            if(i==0)
                for(j=*(a+i)-1;j<*(b+i);j++)
                {
                    *(str+k) = *(str1+j);
                    k++;
                }
            if(i==1)
                for(j=*(a+i)-1;j<*(b+i);j++)
                {
                    *(str+k) = *(str2+j);
                    k++;
                }
            if(i==2)
                for(j=*(a+i)-1;j<*(b+i);j++)
                {
                    *(str+k) = *(str3+j);
                    k++;
                }
        }
        *(str+k) = '\0';
        cout << str <<endl;
    }
    return 0;
}

