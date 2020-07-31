#include <iostream>

using namespace std;
string change(char s[],int l1,int l2)
{
    string st = "";
    for(int n=0,dx=l1-1; n<=l2-l1,dx<l2; n++,dx++)
    {
        char *str = new char[l2-l1+1];
        *(str+n) = s[dx];
        st += *(str+n);
    }
    return st;
}
int main()
{
    int time;
    cin>>time;
    for(int i=0; i<time; i++)
    {
        char s1[11];
        char s2[11];
        char s3[11];
        string st ="";
        cin>>s1;
        cin>>s2;
        cin>>s3;
        int le1,le2,le3,le4,le5,le6;
        cin>>le1>>le2>>le3>>le4>>le5>>le6;
        cout<<change(s1,le1,le2)+change(s2,le3,le4)+change(s3,le5,le6)<<endl;
    }
    return 0;
}

