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
��Ŀ����
��������Ĵ洢�ṹSNode���������֣����ݡ���һ���ָ�롣�������׸����ĵ�ַheadΪ��ͷָ��,����SNode *head=NULL��ʾ�������ʼΪ�ա�

������Ĵ�����createList(SNode *&head, int *value, int n)����value�����е�n����������һ��������(��ͷָ��Ϊhead)��

������������printList(SNode *head),��ͷ��β������headΪ��ͷ�ĵ��������ÿ����������ֵ��

���������ݲ���: insertNode(SNode *head, int pos, int value),�ڵ������pos(1<=pos<=L)�����λ�ú�����½�㣬����Ϊvalue�������벻�ɹ������error��

����������ɾ��: removeNode(SNode *head, int pos), ɾ���������pos(1<=pos<=L)����㡣��ɾ�����ɹ������error��

������ĳ�����deleteList(SNode *head),ɾ����headΪ��ͷ�ĵ��������ͷ�����ÿ�����Ķ��ڴ档

ע:���������κ���ʽ��������ʵ���������򲻼Ƴɼ���

����
��һ�У����Դ���t

��ÿ��������ݣ���ʽ����:

���ݸ���n ����1 ����2 ����3 ... ����n

�������m

����λ��1 ����1

...

����λ��m ����m

ɾ������o

ɾ��λ��1

...

ɾ��λ��o

���
��ÿ���������:

������������������ȫ����������

��ÿ������������:

������������������ȫ����������

��ÿ��ɾ����������:

���ɾ��������������ȫ����������

��������
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
�������
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