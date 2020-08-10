#include <iostream>
#include <string>
using namespace std;
class Group
{
public:
    virtual int add(int x, int y) = 0; //����ӷ���������
    virtual int sub(int x, int y) = 0; //���������������
};
class GroupA : public Group
{
public:
    int add(int x, int y) { return x + y; }
    int sub(int x, int y) { return x - y; }
};

class GroupB : public GroupA
{
public:
    int sub(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 - y % 10 + 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

class GroupC : public GroupB
{
public:
    int add(int x, int y)
    {
        int result = 0, t = 1;
        while (x * y)
        {
            result += (x % 10 + y % 10) % 10 * t;
            x /= 10;
            y /= 10;
            t *= 10;
        }
        result += (x + y) * t;
        return result;
    }
};

int main()
{
    int t, n, a, b;
    char c;
    Group *p;

    cin >> t;
    while (t--)
    {
        cin >> n >> a >> c >> b;
        if (n == 1)
        {
            p = new GroupA();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
        else if (n == 2)
        {
            p = new GroupB();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
        else if (n == 3)
        {
            p = new GroupC();
            if (c == '+')
                cout << p->add(a, b) << endl;
            else if (c == '-')
                cout << p->sub(a, b) << endl;
        }
    }
    return 0;
}
/*
��Ŀ����
ĳСѧ���꼶����ѧ��ʦ�ڽ�ѧ�������Ӽ�������ʱ���֣����ϵ�ͬѧ���Էֳ����࣬��һ�������ȷ����ɼӼ�������(GroupA)���ڶ��������ȷ����ɼӷ����㣬�����ڼ���������˵���������ǽ�λ�Ĵ���(GroupB)���������������Ǽӷ��Ľ�λ��Ҳ�������Ǽ����Ľ�λ(GroupC)������ʾ��Сѧ���꼶��ûѧ��������

������ģ�⵱��ʦ�ڿ�������ĳλͬѧʱ��ͬѧ������Ļش�

ʵ��ʱ���������Ļ����ܣ�

class Group

{

public:

virtual int add(int x, int y)=0;//����ӷ���������

virtual int sub(int x, int y)=0;//���������������

}

������GroupA, GroupB��GroupC�����ɳ���:

����д��������Ҫ������������һ������Groupָ�룬ͨ����ָ��ͳһ�ؽ���add��sub���㡣

����
��һ�б�ʾ���Դ������ӵڶ��п�ʼ��ÿ����������ռһ�У�ÿ�������������£�ѧ�����1Ϊ��һ��ѧ����2Ϊ�ڶ���ѧ����3Ϊ������ѧ��������һ�������ڶ�������

���
�����Ľ��

��������
3
1 79+81
2 81-79
3 183+69
�������
160
12
142
*/