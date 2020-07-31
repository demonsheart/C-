#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        const char *month[13]={NULL,"January","February","March","April","May","Jane","July","August","September","October","November","December"};
        int input;
        cin>>input;
        if(input>12 || input<1)
            cout<<"error"<<endl;
        else
            cout<<*(month+input)<<endl;

    }
    return 0;
}

