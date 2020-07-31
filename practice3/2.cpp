#include<iostream>
using namespace std;
int main()
{
char *s[] = {"January", "February", "March", "April", "May", "June",
              "July", "August", "September", "October", "November", "December"};
char **p = s;
int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n>=1 && n<=12)
        cout<<*(p+n-1)<<endl;
        else
        cout<<"error"<<endl;
    }   
}