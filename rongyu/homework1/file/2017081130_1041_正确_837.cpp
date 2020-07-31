#include <iostream>

using namespace std;

int main()
{
    int n,t;
    const char *month[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1&&n<=12)
            cout<<month[n-1]<<endl;
        else
            cout<<"error"<<endl;
    }
}
