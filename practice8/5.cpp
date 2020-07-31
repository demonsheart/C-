#include <iostream>
using namespace std;
struct CNode
{
    int data;
    CNode *next;
};
class CList
{
private:
    CNode *head;

public:
    CList()
    {
        head = new CNode;
    }
    void createList(int *value, int n);
    int insertNode(int pos, int value);
    int removeNode(int pos);
    void printList();
    ~CList();
};
void CList::createList(int *value, int n)
{
    CNode *p1, *p2;
    int i;
    p1 = head;
    p1->data = value[0];
    p1->next = NULL;
    for (i = 1; i < n; ++i)
    {
        p2 = new CNode;
        p2->data = value[i];
        p1->next = p2;
        p2->next = NULL;
        p1 = p2;
    }
}
void CList::printList()
{
    CNode *p = head;
    while (p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << endl;
}
CList::~CList()
{
    CNode *p1 = head;
    while (p1 != NULL)
    {
        head = p1;
        p1 = p1->next;
        delete head;
    }
}
int CList::insertNode(int pos, int value)
{
    CNode *p1, *p2;
    int s = 0;
    p1 = head;
    while (p1 != NULL)
    {
        s++;
        p1 = p1->next;
    }
    if (pos > s)
        return 0;
    else
    {
        p1 = head;
        for (int i = 0; i < pos - 1; ++i)
        {
            p1 = p1->next;
        }
        p2 = new CNode;
        p2->data = value;
        p2->next = p1->next;
        p1->next = p2;
        return 1;
    }
}
int CList::removeNode(int pos)
{
    CNode *p1, *p2;
    int s = 0;
    p1 = head;
    while (p1 != NULL)
    {
        s++;
        p1 = p1->next;
    }
    if (pos > s || pos < 1)
        return 0;
    else
    {
        p1 = head;
        if (pos == 1)
        {
            head = p1->next;
            delete p1;
        }
        else
        {
            for (int i = 0; i < pos - 2; ++i)
            {
                p1 = p1->next;
            }
            p2 = p1->next;
            p1->next = p2->next;
            delete p2;
        }
        return 1;
    }
}
int main()
{
    int n, t, i, m, o;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = new int[n];
        for (i = 0; i < n; ++i)
            cin >> *(a + i);
        CList l;
        l.createList(a, n);
        l.printList();
        cin >> m;
        while (m--)
        {
            int pos, value, r;
            cin >> pos >> value;
            r = l.insertNode(pos, value);
            if (r)
                l.printList();
            else
                cout << "error" << endl;
        }
        cin >> o;
        while (o--)
        {
            int depos, r;
            cin >> depos;
            r = l.removeNode(depos);
            if (r)
                l.printList();
            else
                cout << "error" << endl;
        }
        delete[] a;
    }
    return 0;
}