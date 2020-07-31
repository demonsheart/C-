#include <iostream>

using namespace std;

char *strAdd(char *s1, char *s2)
{
    int n = 0, m = 0;
    char *p = s1, *q = s2;
    while(*p != '\0')
        n++, p++;
    while(*q != '\0')
        m++, q++;
    char *ans = new char[n + m + 1];
    
    //cout << n <<" " <<m << endl;
    
    char *k = ans;
    
    while(*s1 != '\0')
        *k = *s1, s1++, k++;
    while(*s2 != '\0')
        *k = *s2, s2++, k++;
    
    *k = '\0';
        
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a[1000], b[1000];
        char *p = a, *q = b;
        cin >> a >> b;
        char *ans = strAdd(p, q);
        
        cout << a << " " << b << " " << ans << endl;
        delete [] ans;
    }
}
