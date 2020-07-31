#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char* p[13]={NULL, "January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"};
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&&n<13)
            cout<<p[n]<<endl;
        else
            cout<<"error\n";
    }
    return 0;
}

