
#include<iostream>
using namespace std;
main()
{
    int t,i;
    int a1,a2,b1,b2,c1,c2;
    cin>>t;
    while(t--)
    {
    	int index=0;
        char *p1= new char[10];
        char *p2= new char[10];
        char *p3= new char[10];
        for(i=0;i<10;i++)
        {
            cin>>*(p1+i);
        }
        for(i=0;i<10;i++)
        {
            cin>>*(p2+i);
        }
        for(i=0;i<10;i++)
        {
            cin>>*(p3+i);
        }
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        int total_len=a2-a1+b2-b1+c2-c1+3;
        char *p4= new char[total_len];
        for(i=a1-1;i<a2;i++)
        {
            *(p4+index)=*(p1+i);
            index++;
        }
        for(i=b1-1;i<b2;i++)
        {
            *(p4+index)=*(p2+i);
            index++;
        }
        for(i=c1-1;i<c2;i++)
        {
            *(p4+index)=*(p3+i);
            index++;
        }
        for(i=0;i<total_len;i++)
        {
            cout<<*(p4+i);
        }
        cout<<endl;
        
    }
    
}
