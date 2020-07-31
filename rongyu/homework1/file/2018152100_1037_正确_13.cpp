#include <iostream>

using namespace std;

void funint(int n)
{
    int *p=new int [n];
    int sum=0;
    double aver=0;
    for (int i=0;i<n;i++)
    {
        cin >> *(p+i);
        sum+=*(p+i);
    }
    aver=sum*1.0/n;
    cout << aver << endl;
    delete []p;
}

void funchar(int n)
{
    char *p=new char[n];
    int maxx=0;
    for (int i=0;i<n;i++)
    {
        cin >> *(p+i);
        if (*(p+i)>*(p+maxx)) maxx=i;
    }
    cout << *(p+maxx) << endl;
    delete []p;
}

void fundouble(int n)
{
    double *p=new double[n];
    int minn=0;
    for (int i=0;i<n;i++)
    {
        cin >> *(p+i);
        if (*(p+i)<*(p+minn)) minn=i;
    }
    cout << *(p+minn) << endl;
    delete []p;
}

int main()
{
    int t;
    char c;
    int n;
    cin >>t;
    while (t--)
    {
        cin >> c >> n;
        switch(c)
        {
            case 'I':funint(n);break;
            case 'C':funchar(n);break;
            case 'F':fundouble(n);break;
        }
    }
    return 0;
}
