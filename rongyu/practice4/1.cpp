#include <iostream>
#include <algorithm>
#include <list>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, m, temp;
    list<int> lit1;
    list<int>::iterator it;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        lit1.push_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        it = find(lit1.begin(), lit1.end(), temp);
        if (it == lit1.begin())
        {
            ++it;
            cout << *it << endl;
        }
        else if (++it == lit1.end())
        {
            it--;
            it--;
            cout << *it << endl;
        }
        else
        {
            --it;
            --it;
            cout << *it << " " ;
            it++;
            it++;
            cout<< *it << endl;
        }
    }
    system("pause");
    return 0;
}