#include<iostream>
#include<stdlib.h>
using namespace std;
int do1(int *p, int n);
char do2(char *p, int n);
float do3(float *p, int n);
int main()
{
int t,n;
char c;
    cin>>t;
    while (t--)
    {
        cin>>c>>n;
        if(c=='I')
        {
        int *p = new int(n);
            for(int i=0; i<n; ++i)
              cin>>*(p+i);
            cout<<do1(p,n)<<endl;
            delete[] p;
        }
        else if(c=='C')
        {
        char *p = new char(n);
            for(int i=0; i<n; ++i)
              cin>>*(p+i);
            cout<<do2(p,n)<<endl;
            delete[] p;
        }
        else if(c=='F')
        {
        float *p = new float(n);
            for(int i=0; i<n; ++i)
              cin>>*(p+i);
            cout<<do3(p,n)<<endl;
            delete[] p;
        }
    }
    system("pause");
}
int do1(int *p, int n)
{
int avg = 0;
    for(int i=0; i<n; ++i)
              avg += *(p+i);
       avg = avg/n;
    return avg;
}
char do2(char *p, int n)
{
char max;
    max = *p;
            for(int i=1; i<n; ++i)
            {
                if(max < *(p+i))
                  max = *(p+i);
            }
    return max;
}
float do3(float *p, int n)
{
float min;
    min = *p;
        for(int i=1; i<n; ++i)
        {
            if(min > *(p+i))
              min = *(p+i);
        }
    return min;
}