#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int fun(char *s,char *t)
{
    int l1=strlen(s),l2=strlen(t);
    if (l1>l2) return 1;
    else if (l1<l2) return -1;
    else
    {
        int num1=0,num2=0;
        for (int i=0;i<l1;i++)
        {
            if (*(s+i)<*(t+i)) num2++;
            if (*(s+i)>*(t+i)) num1++;
        }
        if (num1>num2)return 1;
        else if (num1<num2) return -1;
        else return 0;
    }
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
        cout << fun(&str1[0],&str2[0]) << endl;

    }
    return 0;
}
