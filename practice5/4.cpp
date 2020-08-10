#include <iostream>
using namespace std;
struct SNode
{
    int data;
    SNode *next;
};
void createList(SNode *&head, int *value, int n)
{
    SNode *p1, *p2;
    head = new SNode;
    int i;
    p1 = head;
    p1->data = value[0];
    p1->next = NULL;
    for (i = 1; i < n; ++i)
    {
        p2 = new SNode;
        p2->data = value[i];
        p1->next = p2;
        p2->next = NULL;
        p1 = p2;
    }
}
void printList(SNode *head)
{
    SNode *p = head;
    while (p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << endl;
}
void deleteList(SNode *head)
{
    SNode *p1 = head;
    while (p1 != NULL)
    {
        head = p1;
        p1 = p1->next;
        delete head;
    }
}
int insertNode(SNode *head, int pos, int value)
{
    SNode *p1, *p2;
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
        p2 = new SNode;
        p2->data = value;
        p2->next = p1->next;
        p1->next = p2;
        return 1;
    }
}
int removeNode(SNode *&head, int pos)
{
    SNode *p1, *p2;
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
    SNode *head = NULL;
    int n, t, i, m, o;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = new int[n];
        for (i = 0; i < n; ++i)
            cin >> *(a + i);
        createList(head, a, n);
        printList(head);
        cin >> m;
        while (m--)
        {
            int pos, value, r;
            cin >> pos >> value;
            r = insertNode(head, pos, value);
            if (r)
                printList(head);
            else
                cout << "error" << endl;
        }
        cin >> o;
        while (o--)
        {
            int depos, r;
            cin >> depos;
            r = removeNode(head, depos);
            if (r)
                printList(head);
            else
                cout << "error" << endl;
        }
        deleteList(head);
    }
    return 0;
}
/*
题目描述
单链表结点的存储结构SNode包含两部分：数据、下一结点指针。单链表首个结点的地址head为表头指针,定义SNode *head=NULL表示单链表初始为空。

单链表的创建：createList(SNode *&head, int *value, int n)，用value数组中的n个数据生成一个单链表(表头指针为head)。

单链表的输出：printList(SNode *head),从头至尾遍历以head为表头的单链表，输出每个结点的数据值。

单链表数据插入: insertNode(SNode *head, int pos, int value),在单链表第pos(1<=pos<=L)个结点位置后插入新结点，数据为value。若插入不成功，输出error。

单链表数据删除: removeNode(SNode *head, int pos), 删除单链表第pos(1<=pos<=L)个结点。若删除不成功，输出error。

单链表的撤销：deleteList(SNode *head),删除以head为表头的单链表，即释放链表每个结点的堆内存。

注:不可以用任何形式的数组来实现链表，否则不计成绩。

输入
第一行：测试次数t

对每组测试数据，格式如下:

数据个数n 数据1 数据2 数据3 ... 数据n

插入次数m

插入位置1 数据1

...

插入位置m 数据m

删除次数o

删除位置1

...

删除位置o

输出
对每组测试数据:

输出创建链表后链表中全部结点的数据

对每组插入测试数据:

输出插入操作后链表中全部结点的数据

对每组删除测试数据:

输出删除操作后链表中全部结点的数据

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