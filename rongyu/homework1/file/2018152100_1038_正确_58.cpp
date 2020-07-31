#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    int t,a[3],b[3];
    char *p;
    cin >>t;
    string s1,s2,s3;
    while (t--)
    {
        int l=0,j=0;
        cin.ignore(1000,'\n');
        getline(cin,s1);
        getline(cin,s2);
        getline(cin,s3);
        for (int i=0;i<3;i++)
        {
            cin >> a[i] >> b[i];
            l+=b[i]-a[i]+1;
            a[i]--;
            b[i]--;
        }
        p=new char [l];
        char *ptr[3]={&s1[0],&s2[0],&s3[0]};
        for (int i=0;i<3;i++)
        {
            while (a[i]<=b[i])
            {
                *(p+j)=*(*(ptr+i)+*(a+i));
                (*(a+i))++;
                j++;
            }
        }
        cout << p << endl;
        delete []p;

    }
    return 0;
}
