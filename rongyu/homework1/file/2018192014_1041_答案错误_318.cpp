#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int stricmp(char *S,char *T);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        const char *month[13]={NULL,"January","February","March","April","May","June",
            "July","August","September","October","November","December"};
        int n;
        cin>>n;
        cout<<*(month+n)<<endl;
    }
    return 0;
}

