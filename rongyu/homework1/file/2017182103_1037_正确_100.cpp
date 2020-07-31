#include <iostream>

using namespace std;

int main()
{
    int time;
    cin>>time;
    for(int i=0; i<time; i++)
    {
        char ty;
        cin>>ty;
        int n;
        cin>>n;
        if(ty=='I')
        {
            int *zx;
            zx = new int[n];
            for(int x =0;x<n;x++){
                cin>>*(zx+x);
            }

            int sum = 0;
            for(int a =0; a<n; a++)
            {
                sum = sum+(*(zx+a));
            }
            int average = sum/n;
            cout<<average;
            cout<<endl;
            delete[]zx;
        }
        if(ty=='C')
        {
            char *zf=new char[n];
             for(int y =0;y<n;y++){
                cin>>*(zf+y);
            }
            char biggest=*zf;
            for(int b=0; b<n; b++)
            {
                if(*(zf+b)>biggest)
                {
                    biggest=*(zf+b);
                }
            }
            cout<<biggest;
            cout<<endl;
            delete[]zf;
        }
        if(ty=='F')
        {
            double *ff = new double[n];
             for(int z =0;z<n;z++){
                cin>>*(ff+z);
            }
            double ss = *ff;
            for(int c=0; c<n; c++)
            {
                if(*(ff+c)<ss)
                    ss=*(ff+c);
            }
            cout<<ss;
            cout<<endl;
            delete[]ff;
        }
    }

    return 0;
}

