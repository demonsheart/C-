#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char *strAdd(char *s1, char *s2)
{
    int l1=strlen(s1),l2=strlen(s2);
    char *p=new char [l1+l2+1];
    int i=0,j=0;
    for (i=0;i<l1;i++)
        *(p+i)=*(s1+i);
    //cout << p << endl;
    for (j=0;j<l2;j++)
        *(p+i+j)=*(s2+j);
    *(p+i+j)='\0';

    //cout << p << endl;

    return p;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(100,'\n');
    string str1,str2;
    while (t--)
    {
        getline(cin,str1);
        getline(cin,str2);
        char *p=strAdd(&str1[0],&str2[0]);
        cout << str1 << " " << str2 <<" " << p << endl;
        delete []p;
    }
    return 0;
}

