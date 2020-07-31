#include <iostream>
using namespace std;
 
int main()
{
    int t, m;
    char *mon[12] = {"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"};
    cin >> t;
    while(t--)
    {
        cin >> m;
        if(m>=1 && m<=12)
            cout << mon[m-1] << endl;
        else
            cout << "error" << endl;
    }
     
    return 0;
}

