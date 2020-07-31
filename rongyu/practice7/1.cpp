#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n1, n2, tmp;

    while (cin >> n1 >> n2)
    {
        set<int> s;
        int n3 = n1 + n2;
        while (n3--)
        {
            cin >> tmp;
            s.insert(tmp);
        }
        auto it = s.begin();
        for (; it != --s.end(); ++it)
            cout << *it << " ";
        cout << *it << endl;
    }
    return 0;
}