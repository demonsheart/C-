#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
        if(n>13||n<=0)
            cout<<"error"<<endl;
        else
            cout<<month[n]<<endl;
    }
    return 0;
}

