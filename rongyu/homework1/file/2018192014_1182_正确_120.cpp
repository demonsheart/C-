#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
char *strAdd(char *s1, char *s2);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        char *a=new char[20],*b=new char[20];
        cin>>a>>b;
        cout<<a<<" "<<b<<" "<<strAdd(a,b)<<endl;
    }
    return 0;
}
char *strAdd(char *s1, char *s2)
{
    char *s=new char[strlen(s1)+strlen(s2)];
    int i;
    for(i=0;i<strlen(s1);i++)
    {
        *(s+i)=*(s1+i);
    }
    for(i=0;i<strlen(s2);i++)
    {
        *(s+i+strlen(s1))=*(s2+i);
    }
    return s;
}

