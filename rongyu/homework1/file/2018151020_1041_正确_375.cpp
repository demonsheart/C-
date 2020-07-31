#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char *str[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        cin>>n;
        if(n>=1&&n<=12)
            cout<<str[n-1]<<endl;
        else
            cout<<"error"<<endl;
    }
    return 0;

}

