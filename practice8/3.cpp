#include <iostream>
#include <cstring>
using namespace std;
class CDate
{
private:
    int year, month, day;

public:
    CDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    bool isLeapYear() { return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; }
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }
    int getDayofYear() //�������ڴӵ���1��1�����������
    {
        int i, sum = day;
        int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int b[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (isLeapYear())
            for (i = 0; i < month; i++)
                sum += b[i];
        else
            for (i = 0; i < month; i++)
                sum += a[i];

        return sum;
    }
};
class software
{
private:
    string name;
    char type, medium;
    CDate valid;
    int no;

public:
    software(int y = 0, int m = 0, int d = 0) : valid(y, m, d) { no = 0; }
    void set(string name, char type, char medium, int y, int m, int d)
    {
        this->name = name;
        this->medium = medium;
        this->type = type;
        valid.setDay(d);
        valid.setMonth(m);
        valid.setYear(y);
    }
    software(software &s) : valid(s.valid.getYear(), s.valid.getMonth(), s.valid.getDay())
    {
        name = s.name;
        type = 'B';
        medium = 'H';
        no = s.no;
    }
    string getName() { return name; }
    char getType() { return type; }
    char getMediem() { return medium; }
    int getNo() { return no; }
    bool isLeapYear(int year) { return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; }
    void setNo(int y, int m, int d);
    void print();
};
void software::print()
{
    string ar;
    cout << "name:" << name << endl;
    if (type == 'O')
        ar = "original";
    else if (type == 'B')
        ar = "backup";
    else
        ar = "trial";
    cout << "type:" << ar << endl;
    if (medium == 'D')
        ar = "optical disk";
    else if (medium == 'U')
        ar = "USB disk";
    else
        ar = "hard disk";
    cout << "media:" << ar << endl;
    if (no == 9999)
        cout << "this software has unlimited use" << endl;
    else if (no < 0)
        cout << "this software has expired" << endl;
    else
        cout << "this software is going to be expired in " << no << " days" << endl;
    cout << endl;
}
void software::setNo(int y, int m, int d)
{
    int sum = 0;
    if (y == 0 && m == 0 && d == 0)
    {
        no = 9999;
        return;
    }
    else
    {
        if (y < 2015 || (y == 2015 && m < 4) || (y == 2015 && m == 4 && d <= 7))
        {
            no = -1;
            return;
        }
        else
        {
            sum = valid.getDayofYear() - 97;
            if (y > 2015)
            {
                for (int i = 2016; i < y; i++)
                {
                    if (isLeapYear(i))
                    {
                        sum += 366;
                    }
                    else
                    {
                        sum += 365;
                    }
                }
            }
        }
    }
    no = sum;
    return;
}
int main()
{
    int t, y, m, d;
    string st;
    char a, b;
    cin >> t;
    software s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> st >> a >> b >> y >> m >> d;
        s[i].set(st, a, b, y, m, d);
        s[i].setNo(y, m, d);
        s[i].print();
        software q(s[i]);
        q.print();
    }
    return 0;
}
/*
��Ŀ����
�����Ϊһ�ֶ���Ҳ������������������������԰���������ơ�����(�ֱ���O��T��B��ʾԭ�桢���ð滹�Ǳ���)����Ч��������(��CDate���Ӷ����ʾ)�ʹ洢����(�ֱ���D��H��U��ʾ���̡����̺�U��)�ȡ����������ͨ���������캯����ʵ�֣���ʱ�ڿ������캯����������͸ĳɡ�B��, �洢���ʸ�Ϊ"H"���������䡣����ɸ���Ŀ������졢����ʹ�ӡ(������2015��4��7��������Ч�ڻ��ж����죬�Ƿ����)��Ա������ʵ�֡�

�����������Ч��ֹ������0��0��0�գ���ʾ���������ƣ�Ϊunlimited��������������2015��4��7��֮ǰ�����ǹ��ڣ���ʾΪexpired���������������2015��4��7��֮������ʾ֮���ʣ�����������������Ϣ�����������


��CDate���ʵ�֣�

 class CDate
{
private:
    int year, month, day;
public:
    CDate(int y, int m, int d) { year = y; month = m; day = d; }
    bool isLeapYear() { return (year%4 == 0 && year%100 != 0) || year%400 == 0; }
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
    int getDayofYear()         //�������ڴӵ���1��1�����������
    {
    int i, sum=day; 
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

        if (isLeapYear())
            for(i=0;i<month;i++)   sum +=b[i];
        else
            for(i=0;i<month;i++)   sum +=a[i];

         return sum;
    }
};

����
�������ݵ����� t

��һ���������

��һ���������  ��һ�������������  ��һ�������Ч���� �� ��

�ڶ����������

�ڶ���������� �ڶ�������������� �ڶ��������Ч���� �� ��

......

���
name: ��һ���������

type: ��һ���������

media: ��һ�������������

��һ�����2015-4-7�����Ч����

name: ��һ���������

type: backup

media: hard disk

��һ�����2015-4-7�����Ч����

......

��������
3
Photoshop_CS5
O D 0 0 0
Audition_3.0
B U 2015 2 3
Visual_Studio_2010
T H 2015 5 5
�������
name:Photoshop_CS5
type:original
media:optical disk
this software has unlimited use

name:Photoshop_CS5
type:backup
media:hard disk
this software has unlimited use

name:Audition_3.0
type:backup
media:USB disk
this software has expired

name:Audition_3.0
type:backup
media:hard disk
this software has expired

name:Visual_Studio_2010
type:trial
media:hard disk
this software is going to be expired in 28 days

name:Visual_Studio_2010
type:backup
media:hard disk
this software is going to be expired in 28 days
*/