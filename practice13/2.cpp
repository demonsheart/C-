#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
bool isLeapYear(int year) { return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0); }
class CDate
{
private:
    int year, day, month;

public:
    CDate(int y, int m, int d) : year(y), month(m), day(d) {}
    int getDays()
    {
        int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeapYear(year))
            m[2]++;
        int result = 0;
        for (int i = 1; i < year; i++)
        {
            result += 365;
            if (isLeapYear(i))
                result++;
        }
        for (int i = 1; i < month; i++)
        {
            result += m[i];
        }
        result += day;
        return result;
    }
    friend class Pet;
    bool operator<(const CDate &d)
    {
        if (d.year > year || (d.year == year && d.month > month) || (d.year == year && d.month == month && d.day > day))
            return true;
        else
            return false;
    }
};

class Pet
{
protected:
    string name;   //����
    float length;  //��
    float weight;  //����
    CDate current; //��ʼ��¼ʱ��
public:
    Pet(string n, float l, float w, int y, int m, int d) : name(n), length(l), weight(w), current(y, m, d) {}
    virtual void display(CDate day) = 0; //���Ŀ������ʱ�������������
};
class Cat : public Pet
{
private:
    /* data */
public:
    Cat(string n, float l, float w, int y, int m, int d) : Pet(n, l, w, y, m, d) {}
    void display(CDate day)
    {
        if (day < current)
        {
            int dis = current.getDays() - day.getDays();
            length += 0.1 * dis;
            weight += 0.2 * dis;
            cout << name << " after " << dis << " day: length=" << fixed << setprecision(2) << length << ",weight=" << fixed << setprecision(2) << weight << endl;
        }
        else
            cout << "error" << endl;
    }
};

class Dog : public Pet
{
private:
    /* data */
public:
    Dog(string n, float l, float w, int y, int m, int d) : Pet(n, l, w, y, m, d) {}
    void display(CDate day)
    {
        if (day < current)
        {
            int dis = current.getDays() - day.getDays();
            length += 0.2 * dis;
            weight += 0.1 * dis;
            cout << name << " after " << dis << " day: length=" << fixed << setprecision(2) << length << ",weight=" << fixed << setprecision(2) << weight << endl;
        }
        else
            cout << "error" << endl;
    }
};

int main()
{
    int t, y, m, d, flag;
    float weight, lenth;
    string name;

    cin >> t;
    cin >> y >> m >> d;
    CDate base(y, m, d);
    while (t--)
    {
        cin >> flag >> name >> lenth >> weight >> y >> m >> d;
        if (flag == 1)
        {
            Cat c(name, lenth, weight, y, m, d);
            c.display(base);
        }
        if (flag == 2)
        {
            Dog g(name, lenth, weight, y, m, d);
            g.display(base);
        }
    }
    return 0;
}
/*
��Ŀ����
��Ҫ����һ��ϵͳ���Գ��������״̬���й�����������Ļ����ܣ�

class Pet

{ protected:

����string name;//����

int length;//��

int weight;//����

CDate current;//��ʼ��¼ʱ��

��������CDate�����ꡢ�¡�������˽�����ݣ���������������Ҫ���⡣��

public:

virtual void display(CDate day)=0;//���Ŀ������ʱ�������������

}

��PetΪ���࣬������Cat��Dog������:

Catһ������0.1�����ؼ�0.2��

Dogһ������0.2�����ؼ�0.1��

���������ಢ��д��������Ҫ������������һ������ָ��Pet *pt�����ڲ����������ݡ�

�����������������Ϣ����Ӧ����Cat������Dog����󣬲�������������ʱ������������ء�

����
��һ��Ϊ���Դ���

�ڶ����ǿ�ʼ��¼����

�ӵ�������ÿ����������ռһ�У�ÿ�и�������Ļ�����Ϣ����������ͣ�1ΪCat��2ΪDog�������֡��������ء������������ڡ�

���
Ҫ�����Ŀ�����ڳ����������������أ����Ҫ����С�����2λ��������������С�ڿ�ʼ���ڣ������error����

��������
3
2019 5 5
1 tony 10 10 2018 12 30
2 jerry 5 6 2019 5 10
1 tom 3 4 2019 6 1
�������
error
jerry after 5 day: length=6.00,weight=6.50
tom after 27 day: length=5.70,weight=9.40
*/