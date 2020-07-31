#include <iostream>

using namespace std;

int isNumber(char *p)
{
    for(; *p != '\0'; p++)
        if(*p < '0' || *p > '9')
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a[1000];
        cin >> a;
        char *p = a;
        if(isNumber(p))
        {
            int i = 0;
            p = a;
            while(a[i] == '0' && a[i + 1] != '\0')
                p++,i++;
            for(; *p != '\0'; p++)
                cout << *p ;
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}
