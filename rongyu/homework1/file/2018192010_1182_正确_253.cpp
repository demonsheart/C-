#include <iostream>
#include<cmath>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
    int i,j,len,t;
    cin >> t;
    while(t--)
    {
        char *s1 = new char[100];
        char *s2 = new char[100];
        cin>>s1 >>s2;
        cin.ignore(10,'\n');
        cout <<s1<<" "<<s2<<" "<<strAdd(s1,s2)<<endl;
    }
    return 0;
}
char *strAdd(char *s1, char *s2)
{
    char *s = new char[200];
    strcat(s,s1);
    strcat(s,s2);
    return s;
}

