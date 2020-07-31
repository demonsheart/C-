#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore(10,'\n');
    while(t--)
    {
        char *month[12]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
        int m;
        cin>>m;
        if(m>12||m<1)
            cout<<"error"<<endl;
        else
            cout<<month[m-1]<<endl;
    }
    return 0;
}

