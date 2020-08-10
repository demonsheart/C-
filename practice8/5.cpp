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
/*
题目描述
单链表节点的存储结构为:

struct SNode

{

    int data;

    SNode *next;

};

定义单链表类CList，数据成员有表头指针(SNode *head)，成员函数有：

1. 构造函数：初始化head.

2. createList(int *value, int n): 用value中的n个数据创建单链表.

3. printList(): 以head为表头依次输出每个节点的数据值。

4. insertNode(int pos, int value): 在单链表第pos个节点位置后插入新节点，数据为value。如插入不成功输出error。

5. removeNode(int pos): 删除第pos个节点，若删除不成功输出error。

6. 析构函数：释放链表每个节点的堆内存。

输入
第一行：测试次数

每次测试格式为：

数据个数n 数据1 数据2 ... 数据n

插入次数m

插入位置1 数据1

...

插入位置m 数据m

删除次数k

删除位置1

...

删除位置k

输出
每次测试产生的输出格式为：

输出创建链表后全部节点的数据

对每组插入测试数据：

输出插入操作后链表全部节点的数据

对每组删除测试数据：

输出删除操作后链表全部节点的数据

样例输入
2
5 2 3 5 7 3
2
1 40
7 60
2
7
3
6 1 2 10 0 1 5
2
1 40
7 60
2
1
3
样例输出
2 3 5 7 3
2 40 3 5 7 3
error
error
2 40 5 7 3
1 2 10 0 1 5
1 40 2 10 0 1 5
1 40 2 10 0 1 5 60
40 2 10 0 1 5 60
40 2 0 1 5 60
*/