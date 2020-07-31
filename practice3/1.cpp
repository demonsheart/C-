#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
const float D = 6.2619;
const float E = 6.6744;
const float Y = 0.0516;
const float H = 0.8065;
const float *p[4] = {&D,&E,&Y,&H};
int t;
char c;
float n,result;
    cin>>t;
    while (t--)
    {
        cin>>c>>n;
        if(c=='D')
        {
            result = n*(*p[0]);
            cout<<fixed<<setprecision(4)<<result<<endl; 
        }
        if(c=='E')
        {
            result = n*(*p[1]);
            cout<<fixed<<setprecision(4)<<result<<endl; 
        }
        if(c=='Y')
        {
            result = n*(*p[2]);
            cout<<fixed<<setprecision(4)<<result<<endl; 
        }
        if(c=='H')
        {
            result = n*(*p[3]);
            cout<<fixed<<setprecision(4)<<result<<endl; 
        }
    }
    return 0;
}