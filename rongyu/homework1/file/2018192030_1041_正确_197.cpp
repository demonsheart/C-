#include<iostream>
using namespace std;
int main()
{
    char *Month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>i;
        if (i<1||i>12)
            cout<<"error"<<endl;
        else
            cout<<*(Month+i-1)<<endl;
    }
    return 0;
}

