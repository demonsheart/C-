#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char *strAdd(char *s1, char *s2)
{
    static char s[100];
    s[0]='\0';
    strcat(s,s1);
    strcat(s,s2);
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[100],s2[100];
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" "<<strAdd(s1,s2)<<endl;
    }
    return 0;
}

