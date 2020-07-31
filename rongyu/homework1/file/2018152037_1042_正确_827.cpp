#include <iostream>
#include <cstring>

using namespace std;

int cmp(char *a, char *b)
{
    int n = strlen(a), m = strlen(b);
    if(n < m)
        return -1;
    else if(n > m)
        return 1;
    else
    {
        int x = 0, y = 0;
        for(int i = 0; i < n; i++)
        {
            if(*(a + i) < *(b + i))
                y++;
            if(*(a + i) > *(b + i))
                x++;
        }
        return x == y ? 0 : x < y ? -1 : 1;
    }
}

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        char a[100], b[100];
        cin >> a >> b;
        cout << cmp(a,b) << endl;
    }
}
