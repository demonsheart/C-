#include<iostream>
#include<math.h>
int isNumber(char *p);
using namespace std;
int main()
{
    int mm,T,i;
    char m[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    char *month[12];
    for(i=0;i<12;i++)
        month[i]=m[i];
    cin>>T;
    while(T--)
    {
        cin>>mm;
        if(mm<=0||mm>=13)
            cout<<"error"<<endl;
        else
        cout<<*(month+mm-1)<<endl;
    }
}
