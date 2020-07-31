#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
         const char *mouth[13]={"NULL","January","February","March","April","May","June","July","August","September","October","November","December"};
         cin>>n;
         if(n>=1&&n<=12)
         cout<<mouth[n]<<endl;
         else
            cout<<"error"<<endl;
    }
    return 0;
}


