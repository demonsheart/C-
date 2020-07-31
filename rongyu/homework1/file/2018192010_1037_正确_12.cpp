#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a,b;
    int i,t,n;
    float f,avg;
    cin>>t;

    while(t--)
    {
        getchar();
        avg=0;
        cin>>a;
        cin>>n;
        switch(a)
        {
        case 'C':
            {
                char *p = new char[n];
                for(i=0;i<n;i++)
                {
                    getchar();
                    cin>>*(p+i);
                }
                b=*p;
                for(i=0;i<n;i++)
                {
                    if(b<*(p+i))
                        b=*(p+i);
                }
                cout<<b<<endl;
            break;
            }
        case 'I':
            {
                int *q = new int[n];
                for(i=0;i<n;i++)
                {
                    cin>>*(q+i);
                    avg+=*(q+i);
                }
                avg/=n;
                printf("%g\n",avg);
            break;
            }
        case 'F':
            {
                float *z = new float[n];
                for(i=0;i<n;i++)
                    cin>>*(z+i);
                f=*z;
                for(i=0;i<n;i++)
                {
                    if(f>*(z+i))
                        f=*(z+i);
                }
                cout<<f<<endl;
            break;
            }
        }
    }
    return 0;
}

