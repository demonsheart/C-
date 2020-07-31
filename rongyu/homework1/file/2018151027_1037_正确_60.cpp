#include<iostream>
using namespace std;
main()
{
    int t,n,i;
    char type;
    cin>>t;
    while(t--)
    {
        cin>>type;
        cin>>n;
        if(type=='I')
        {
            int sum=0;
            int average=0;
            int * pointer = new int[n];
            for(i=0;i<n;i++)
            {
                cin>>*(pointer+i);
            }
            for(i=0;i<n;i++)
            {
                sum+=*(pointer+i);
            }
            average=sum/n;
            cout<<average<<endl;
        }
        if(type=='C')
        {

            char big='0';
            char * pointer = new char[n];
            for(i=0;i<n;i++)
            {
                cin>>*(pointer+i);
            }
            for(i=0;i<n;i++)
            {
                if(*(pointer+i)>big)
                {
                    big=*(pointer+i);
                }
            }
            cout<<big<<endl;
        }
        if(type=='F')
        {
            float * pointer = new float[n];
            for(i=0;i<n;i++)
            {
                cin>>*(pointer+i);
            }
            float min=*pointer;
            for(i=0;i<n;i++)
            {
                if(*(pointer+i)<min)
                {
                    min=*(pointer+i);
                }
            }
            cout<<min<<endl;

        }

    }
}

