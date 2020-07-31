#include <list>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    list<int> lit1;
    int n, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n == 0 && k == 0)
            break;
        lit1.clear();
        for (int i = 1; i <= n; ++i)
            lit1.push_back(i);
        list<int>::iterator it = lit1.begin();
        while (lit1.size() > 1)
        {
            for (int i = 1; i < k; ++i)
            {
                ++it;
                if (it == lit1.end())
                    it = lit1.begin();
            }
            cout<<*it<<" ";
            it = lit1.erase(it);

            if (it == lit1.end())
                it = lit1.begin();
        }
        cout << lit1.front() << endl;
    }
    system("pause");
    return 0;
}