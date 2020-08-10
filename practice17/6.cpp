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
        delete q; //释放结点
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
/*
题目描述
结点数据类型为int的单链表类CIntList可定义如下:

class CNode

{

public:

int data;

CNode *next;

};

class CIntList

{

private:

CNode *head;

public:

CIntList();

void append(int a); //加到链表最后

void insert(int a, int n); //在第n个结点后加

void remove(int n); //移除第n个结点

int get(int n); //返回第n个结点的数据

void set(int a, int n); //将第n个节点的数据改成a

void print();

~CIntList();

};

试将其改成结点数据类型用参数表示的类模板CList。

输入
第一行输入测试次数

每次测试输入5行,格式为：

数据类型(I:int, D:double, S:string) 数据个数n 数据1 数据2 ... 数据n

插入节点号(0表示插在第1个结点前面) 数据

返回结点号

删除结点号

修改结点号 数据

输出
每次测试输出二行.第1行输出返回操作获得的数据(如出错则输出error),第2行输出所有操作后链表全部结点的数据.

样例输入
3
I 5 2 3 5 7 3
1 40
7
7
6 -10
D 6 1.1 2.3 10.05 0.0 -1.8 5.9
4 60.4
5
1
3 -3.7
S 4 this is a test.
0 good
1
8
4 work

样例输出
error
2 40 3 5 7 -10
60.4
2.3 10.05 -3.7 60.4 -1.8 5.9
good
good this is work test.
*/