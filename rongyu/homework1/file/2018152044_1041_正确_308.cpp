#include<iostream>
using namespace std;
int main()
{
    const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
    int T;
    cin>>T;
    while(T--)
    {
        int i;
        cin>>i;
        if(1<=i&&i<=12)
            cout<<month[i]<<endl;
        else
            cout<<"error"<<endl;
    }
    return 0;
}
