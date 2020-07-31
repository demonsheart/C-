#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    const char *month[13]={NULL,"January","February","March","April","May","June","August","September","October","November","December"};
    while(t--)
    {
        cin>>n;
        if(12>=n&&n>=1)
            cout<<month[n]<<endl;
        else
            cout<<"error"<<endl;
    }
    return 0;
}

