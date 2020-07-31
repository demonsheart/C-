/*
2
3 -9 0 4 1 -3 5
1 -7 0
2 1 0 -1 3
3 1 0 1 1 -1 2*/

/*
-16+4x-3x^5
-2+4x-3x^5
63-28x+21x^5
2+x-x^2-x^3
-x+x^2-x^3
1+x-x^2-x^3-x^4+x^5
*/
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

struct pnode
{
    int coef;
    int expn;
};

void input(list<pnode> &p, int n);
void display(list<pnode> p);
list<pnode> add(list<pnode> p1, list<pnode> p2);
list<pnode> minu(list<pnode> p1, list<pnode> p2);
list<pnode> multi(list<pnode> p1, list<pnode> p2);

int main()
{
    list<pnode> poly1, poly2, resultpoly;
    int t, n, m;

    cin >> t;
    while (t--)
    {
        cin >> n;
        input(poly1, n);
        cin >> m;
        input(poly2, m);

        resultpoly = add(poly1, poly2);
        display(resultpoly);
        resultpoly = minu(poly1, poly2);
        display(resultpoly);
        resultpoly = multi(poly1, poly2);
        display(resultpoly);
        poly1.clear();
        poly2.clear();
    }
}

void input(list<pnode> &p, int n)
{
    int coef, expn;

    for (int i = 0; i < n; i++)
    {
        cin >> coef >> expn;
        p.push_back(pnode{coef, expn});
    }
}

list<pnode> add(list<pnode> p1, list<pnode> p2)
{
    list<pnode> result;
    list<pnode>::iterator it1, it2;
    int coef;

    for (it1 = begin(p1), it2 = begin(p2); it1 != end(p1) && it2 != end(p2);)
    {
        if (it1->expn < it2->expn)
        {
            result.push_back(*it1);
            it1++;
        }
        else if (it1->expn > it2->expn)
        {
            result.push_back(*it2);
            it2++;
        }
        else
        {
            coef = it1->coef + it2->coef;
            if (coef)
                result.push_back(pnode{coef, it1->expn});
            it1++, it2++;
        }
    }

    for (; it1 != end(p1); it1++)
        result.push_back(*it1);
    for (; it2 != end(p2); it2++)
        result.push_back(*it2);

    return result;
}

void display(list<pnode> p)
{
    list<pnode>::iterator it;

    for (it = begin(p); it != end(p); it++)
    {
        if (it->coef > 0 && it != begin(p))
            cout << "+";
        if (it->expn == 0)
            cout << it->coef;
        else if (it->coef == -1 && it->expn)
            cout << "-";
        else if (it->coef != 1 && it->expn)
            cout << it->coef;

        if (it->expn == 1)
            cout << "x";
        else if (it->expn)
            cout << "x^" << it->expn;
    }
    cout << endl;
}

list<pnode> minu(list<pnode> p1, list<pnode> p2)
{
    for_each(begin(p2), end(p2), [](pnode &x) { x.coef *= -1; });

    return add(p1, p2);
}

list<pnode> multi(list<pnode> p1, list<pnode> p2)
{
    list<pnode> result;

    for (auto it1 = begin(p1); it1 != end(p1); it1++)
    {
        list<pnode> ptemp(p2);
        for_each(begin(ptemp), end(ptemp),
                 [it1](pnode &x) {x.coef *= it1->coef;
                  x.expn += it1->expn; });
        result = add(result, ptemp);
    }
    return result;
}