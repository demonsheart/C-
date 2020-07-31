#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int isNumber(char *a);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        char *a=new char[100];
        cin>>a;
        cout<<isNumber(a)<<endl;
        delete []a;
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
        num=(*(a+i)-'0')*pow(10,strlen(a)-i-1)+num;
    }
    return num;
}

