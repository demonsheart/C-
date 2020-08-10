#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    string name, position;
    int grade, year;
    float salaries;

public:
    Employee(string na, string po, int gr, int y)
        : name(na), position(po), grade(gr), year(y) {}
    virtual float salary()
    {
        salaries = 1000 + 500 * grade + 50 * year;
        return salaries;
    }
};
class Teamleader : public Employee
{
private:
    /* data */
public:
    Teamleader(string na, string po, int gr, int y)
        : Employee(na, po, gr, y) {}
    float salary()
    {
        salaries = 3000 + 800 * grade + 100 * year;
        return salaries;
    }
};
class Manager : public Employee
{
private:
    /* data */
public:
    Manager(string na, string po, int gr, int y)
        : Employee(na, po, gr, y) {}
    float salary()
    {
        salaries = 5000 + 1000 * (grade + year);
        return salaries;
    }
};
bool judge(int a, int b)
{
    return (a >= 0 && b >= 0);
}
int main()
{
    int t, grade, year;
    string name, position;
    Employee *p;

    cin >> t;
    while (t--)
    {
        cin >> name >> position >> grade >> year;
        if (position == "Employee")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Employee(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else if (position == "Teamleader")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Teamleader(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else if (position == "Manager")
        {
            if (judge(grade, year) == 0)
            {
                cout << "error grade or year." << endl;
                continue;
            }
            p = new Manager(name, position, grade, year);
            cout << name << ":" << position << ",Salary:" << p->salary() << endl;
        }
        else
            cout << "error position." << endl;
    }
    return 0;
}
/*
��Ŀ����
ĳ��˾Ա���������У�������ְλ�����𡢹������ޣ���������޶��ǷǸ�������������ʾ���󡣰��������У����캯�������㹤�ʵķ�����salary()����

Ա��ְλ��Ϊ���֣�Employee��Teamleader��Manager������ְλ������ʾ����

����ְλԱ�����������ڼ��㹤�ʵķ�����ͬ��

1. Employee��ÿ�¹��� = 1000 + 500*���� + 50*��������

2. Teamleader��ÿ�¹��� = 3000 + 800*���� + 100*��������

3. Manager��ÿ�¹��� = 5000 + 1000 * (����+��������)

���㹤�ʵķ�������ÿ��Ա���Ĺ�������

Ҫ������ͨԱ��Ϊ���࣬�鳤�;���̳л��࣬������ֻ��ʹ�û���ָ��ָ���������ö���ķ�����

����
���԰����ĸ��� t

ÿ������һ��Ա������Ϣ������������ְλ�����𡢹�������

���
�����ӦԱ������Ϣ

���д�����Ϣ�������������Ϣ����ְλ��Ϣ�뼶���������Ϣͬʱ���������ְλ������Ϣ

��������
5
zhangsan Employee 4 5
lisi Teamleader 4 5
Wangwu Manager 4 5
chenliu Precident 4 5
xiaoxiao Manager -1 5
�������
zhangsan:Employee,Salary:3250
lisi:Teamleader,Salary:6700
Wangwu:Manager,Salary:14000
error position.
error grade or year.
*/