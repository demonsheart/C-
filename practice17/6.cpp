#include <iostream>
#include <string>
using namespace std;
template <class T>
class CNode
{
public:
    T data;
    CNode<T> *next;
};

template <class T>
class CList
{
private:
    CNode<T> *head;

public:
    CList()
    {
        head = new CNode<T>;
        head->next = NULL;
    }
    void append(T a) //加到链表最后
    {
        CNode<T> *p = new CNode<T>;
        p->data = a;
        p->next = NULL;
        CNode<T> *p1 = head;
        while (p1->next != NULL)
            p1 = p1->next;
        p1->next = p;
    }
    void insert(T a, int n) //在第n个结点后加
    {
        CNode<T> *p1, *p2 = head;
        p1 = new CNode<T>;
        p1->data = a;
        while (n--)
        {
            p2 = p2->next;
            if (p2 == NULL)
                return;
        }
        p1->next = p2->next;
        p2->next = p1;
    }
    void remove(int n) //移除第n个结点
    {
        CNode<T> *p = head, *q;
        if (n == 0)
        {
            head = head->next;
            return;
        }
        int i;
        for (i = 1; i < n; i++)
        {
            p = p->next;
            if (p->next == NULL)
                return;
        }
        q = p->next;
        p->next = p->next->next;
        delete q;//释放结点
        return;
    }
    bool judge(int n)
    {
        CNode<T> *p = head;
        while (n--)
        {
            p = p->next;
            if (p == NULL)
                return false;
        }
        return true;
    }
    T get(int n) //返回第n个结点的数据
    {
        CNode<T> *p = head;
        while (n--)
            p = p->next;
        return p->data;
    }
    void set(T a, int n) //将第n个节点的数据改成a
    {
        remove(n);
        insert(a, n - 1);
    }
    void print()
    {
        CNode<T> *p = head;
        p = p->next;
        while (p->next != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << p->data << " " << endl;
    }
    ~CList()
    {
        CNode<T> *p1 = head;
        while (p1 != NULL)
        {
            head = p1;
            p1 = p1->next;
            delete head;
        }
    }
};
int main()
{
    int t, n, pos;
    char cmd;

    cin >> t;
    while (t--)
    {
        cin >> cmd >> n;
        if (cmd == 'I')
        {
            int tmp;
            CList<int> l;
            while (n--)
            {
                cin >> tmp;
                l.append(tmp);
            }
            cin >> pos >> tmp;
            l.insert(tmp, pos);
            cin >> pos;
            if (l.judge(pos))
                cout << l.get(pos) << endl;
            else
                cout << "error" << endl;
            cin >> pos;
            l.remove(pos);
            cin >> pos >> tmp;
            l.set(tmp, pos);
            l.print();
        }
        else if (cmd == 'D')
        {
            double tmp;
            CList<double> l;
            while (n--)
            {
                cin >> tmp;
                l.append(tmp);
            }
            cin >> pos >> tmp;
            l.insert(tmp, pos);
            cin >> pos;
            if (l.judge(pos))
                cout << l.get(pos) << endl;
            else
                cout << "error" << endl;
            cin >> pos;
            l.remove(pos);
            cin >> pos >> tmp;
            l.set(tmp, pos);
            l.print();
        }
        else if (cmd == 'S')
        {
            string tmp;
            CList<string> l;
            while (n--)
            {
                cin >> tmp;
                l.append(tmp);
            }
            cin >> pos >> tmp;
            l.insert(tmp, pos);
            cin >> pos;
            if (l.judge(pos))
                cout << l.get(pos) << endl;
            else
                cout << "error" << endl;
            cin >> pos;
            l.remove(pos);
            cin >> pos >> tmp;
            l.set(tmp, pos);
            l.print();
        }
    }
    return 0;
}