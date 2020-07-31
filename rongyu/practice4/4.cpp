#include <list>
#include <iostream>
using namespace std;
struct poly
{
    int p, m;
    bool operator<(poly &s)
    {
        return this->m < s.m;
    }
    poly operator+(poly &s)
    {
        poly temp;
        temp.m = this->m;
        temp.p = this->p + s.p;
        return temp;
    }
};
void add(list<poly> &lit1, list<poly> &lit2, list<poly> &re)
{
    list<poly>::iterator it1 = lit1.begin();
    list<poly>::iterator it2 = lit2.begin();
    while (it1 != lit1.end() && it2 != lit2.end())
    {
        poly temp;
        if ((*it1).m == (*it2).m)
        {
            temp = (*it1) + (*it2);
            re.push_back(temp);
            ++it1;
            ++it2;
        }
        else if ((*it1) < (*it2))
        {
            temp = (*it1);
            re.push_back(temp);
            ++it1;
        }
        else if ((*it2) < (*it1))
        {
            temp = (*it2);
            re.push_back(temp);
            ++it2;
        }
        for (; it1 != lit1.end(); ++it1)
            re.push_back(*it1);
        for (; it2 != lit2.end(); ++it2)
            re.push_back(*it2);
    }
}
void multiply(list<poly> &lit1, list<poly> &lit2, list<poly> &re)
{
}
void print(list<poly> &lit)
{
    list<poly>::iterator it;
    for (it = lit.begin(); it != lit.end(); ++it)
    {
        if (it->p > 0 && it != lit.begin())
            cout << "+";
        if (it->m == 0)
            cout << it->p;
        else if (it->p == -1 && it->m)
            cout << "-";
        else if (it->p != 1 && it->m)
            cout << it->p;

        if (it->m == 1)
            cout << "x";
        else if (it->m)
            cout << "x^" << it->m;
    }
    cout << endl;
}
int main()
{
    list<poly> lit1;
    list<poly> lit2;
    list<poly> result;
    list<poly>::iterator it1;
    list<poly>::iterator it2;
    poly temp;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> temp.p >> temp.m;
            lit1.push_back(temp);
        }
        cin >> n;
        while (n--)
        {
            cin >> temp.p >> temp.m;
            lit2.push_back(temp);
        }
        add(lit1, lit2, result);
        print(result);
        result.clear();
        lit1.clear();
        lit2.clear();
    }
    return 0;
}