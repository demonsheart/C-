#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() {}

    Person(string n, int a) : name(n), age(a) {}

    virtual void display()
    {
        cout << name << " " << age << endl;
    }

    virtual ~Person() {}
};

class Student : public Person
{
private:
    float normal_price, test_price, total_price;

public:
    Student() {}

    Student(string n, int a, float normal, float test)
        : Person(n, a), normal_price(normal), test_price(test)
    {
        total_price = normal_price * 0.4 + test_price * 0.6;
    }

    void display()
    {
        cout << name << " " << age << " " << total_price << endl;
    }

    friend class Teacher;
};

class Teacher : public Person
{
private:
    int student_num;
    float average;
    Student **s;

public:
    Teacher(string n, int a) : Person(n, a)
    {
        student_num = 0;
        average = 0;
    }

    void distribute(int sum)
    {
        s = new Student *[sum];
    }

    void display()
    {
        cout << name << " " << age << " " << student_num << " " << fixed << setprecision(2) << average << endl;
        for (int i = 0; i < student_num; ++i)
            cout << (**(s + i)).name << " " << (**(s + i)).age << " " << fixed << setprecision(2)
                 << (**(s + i)).total_price << endl;
    }

    void addStudent(string n, int a, float normal, float test)
    {
        student_num++;
        *(s + student_num - 1) = new Student(n, a, normal, test);
        countAve();
    }

    void countAve()
    {
        float total = 0;
        for (int i = 0; i < student_num; ++i)
            total += (**(s + i)).total_price;
        average = total / student_num;
    }

    ~Teacher()
    {
        for (int i = 0; i < student_num; ++i)
            delete s[i];
        delete[] s;
    }
};

int main()
{
    int num, age;
    float normal, test;
    string name;

    cin >> name >> age;
    Teacher t(name, age);
    cin >> num;
    t.distribute(num);
    while (num--)
    {
        cin >> name >> age >> normal >> test;
        t.addStudent(name, age, normal, test);
    }
    t.display();
    return 0;
}
/*
��Ŀ����
����Person�������������������ԣ��������������Ϣ��display������

ѡ�ޡ�������������ơ��γ̵�ѧ������Person��Ļ����ϣ������������ࣺѧ���ࡣ����̳и����Ա������������Ա����дdisplay������

1.       ѧ�������ƽʱ�ɼ������Գɼ��������ɼ��������ԣ�

2.       ���������ɼ��ĺ����������ɼ�=ƽʱ�ɼ�*40%+���Գɼ�*60%��

3.       �µ�display����

���ڡ�������������ơ��γ̵���ʦ����Person��Ļ����ϣ������������ࣺ��ʦ�ࡣ����̳и����Ա������������Ա����дdisplay������

1.       ����ѡ��ѧ�����顢ѡ���������༶ƽ������������

2.       ��ѡ��ѧ������������һ��ѧ���ĺ���

3.       ����༶ѧ��ƽ���ֵĺ���

4.       �µ�display����

���������ಢ��д�����������Ƚ���һ����ʦ��������n��ѧ�����������ʦ������ѡ��ѧ�������С�����ý�ʦ���ڰ༶ѧ����ƽ���ɼ����������

����
��ʦ����������Ϣ

ѡ������n

���ÿ������ѧ������������Ϣ

���
��ʦ�������Ϣ

����ѡ��ѧ����Ϣ

��������
Cindy 18
2
Sandy 8 90 80
David 9 60 70
�������
Cindy 18 2 75.00
Sandy 8 84.00
David 9 66.00
*/