#include <iostream>
#include<cmath>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,t;
    const char *mouth[13]={NULL,"January","February","March","April","May",
    "June","July","August","September","October","November","December"};
    cin >> t;
    while(t--)
    {
        cin>>i;
        if(i>=1 && i<=12)
            cout <<*(mouth+i) <<endl;
        else
            cout <<"error" <<endl;
    }
    return 0;
}

