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
    void append(T a) //�ӵ��������
    {
        CNode<T> *p = new CNode<T>;
        p->data = a;
        p->next = NULL;
        CNode<T> *p1 = head;
        while (p1->next != NULL)
            p1 = p1->next;
        p1->next = p;
    }
    void insert(T a, int n) //�ڵ�n�������
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
    void remove(int n) //�Ƴ���n�����
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
        delete q; //�ͷŽ��
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
    T get(int n) //���ص�n����������
    {
        CNode<T> *p = head;
        while (n--)
            p = p->next;
        return p->data;
    }
    void set(T a, int n) //����n���ڵ�����ݸĳ�a
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
��Ŀ����
�����������Ϊint�ĵ�������CIntList�ɶ�������:

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

void append(int a); //�ӵ��������

void insert(int a, int n); //�ڵ�n�������

void remove(int n); //�Ƴ���n�����

int get(int n); //���ص�n����������

void set(int a, int n); //����n���ڵ�����ݸĳ�a

void print();

~CIntList();

};

�Խ���ĳɽ�����������ò�����ʾ����ģ��CList��

����
��һ��������Դ���

ÿ�β�������5��,��ʽΪ��

��������(I:int, D:double, S:string) ���ݸ���n ����1 ����2 ... ����n

����ڵ��(0��ʾ���ڵ�1�����ǰ��) ����

���ؽ���

ɾ������

�޸Ľ��� ����

���
ÿ�β����������.��1��������ز�����õ�����(����������error),��2��������в���������ȫ����������.

��������
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

�������
error
2 40 3 5 7 -10
60.4
2.3 10.05 -3.7 60.4 -1.8 5.9
good
good this is work test.
*/