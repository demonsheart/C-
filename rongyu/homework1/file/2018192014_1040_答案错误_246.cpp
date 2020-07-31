#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int isNumber(char *a);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    
    for(int q=0;q<t;q++)
    {
        cin.ignore(10,'\n');
        char a[100]={'\0'};
        cin>>a;
        cout<<isNumber(a)<<endl;
    }
    return 0;
}
int isNumber(char *a)
{
    int i,num=0;
    for(i=0;i<strlen(a);i++)
    {
        if(*(a+i)>'9'||*(a)<'0')
            return -1;
    }
    for(i=0;i<strlen(a);i++)
    {
        num=*(a+i)-'0'+num*10;
    }
    return num;
}

