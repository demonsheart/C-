#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> v;
    int a, highest = 0;
    while (1)
    {
        cin >> a;
        if (a == -1)
            break;
        v.push_back(a);
        if (a > highest)
            highest = a;
    }
    vector<float>::iterator i;
    for (i = v.begin(); i != v.end(); ++i)
    {
        *i = *i / highest * 100;
        cout << *i << endl;
    }
    return 0;
}