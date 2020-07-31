#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        int n;
        cin>>ch>>n;
        if(ch=='I')
        {
            int *num=new int[n];
            int sum=0;
            float ans;
            for(int i=0;i<n;i++,num++)
            {
                cin>>*num;
                sum+=*num;
            }
            ans=sum/n;
            cout<<ans<<endl;
        }
        else if(ch=='C')
        {
            char *str=new char[n];
            char max1;
            for(int i=0;i<n;i++,str++)
            {
                cin>>*str;
                if(i==0)
                    max1=*str;
                else if(*str>max1)
                    max1=*str;
            }
            cout<<max1<<endl;
        }
        else if(ch=='F')
        {
            float *fnum=new float[n];
            float min1;
            for(int i=0;i<n;i++,fnum++)
            {
                cin>>*fnum;
                if(i==0)
                    min1=*fnum;
                else if(*fnum<min1)
                    min1=*fnum;
            }
            cout<<min1<<endl;
        }
    }
    return 0;
}
