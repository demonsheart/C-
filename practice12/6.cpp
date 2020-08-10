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
题目描述
定义Person类具有姓名、年龄等属性，具有输出基本信息的display函数。

选修《面向对象程序设计》课程的学生是在Person类的基础上，派生出的子类：学生类。子类继承父类成员，新增其他成员、改写display函数。

1.       学生类具有平时成绩、考试成绩和总评成绩三个属性，

2.       计算总评成绩的函数，总评成绩=平时成绩*40%+考试成绩*60%。

3.       新的display函数

教授《面向对象程序设计》课程的老师是在Person类的基础上，派生出的子类：教师类。子类继承父类成员，新增其他成员、改写display函数。

1.       增加选课学生数组、选课人数、班级平均分三个属性

2.       在选课学生数组中增加一个学生的函数

3.       计算班级学生平均分的函数

4.       新的display函数

定义上述类并编写主函数，首先建立一个教师类对象，随后将n个学生类对象加入教师类对象的选课学生数组中。计算该教师教授班级学生的平均成绩，并输出。

输入
教师类对象基本信息

选课人数n

随后每行输入学生类对象相关信息

输出
教师类对象信息

所有选课学生信息

样例输入
Cindy 18
2
Sandy 8 90 80
David 9 60 70
样例输出
Cindy 18 2 75.00
Sandy 8 84.00
David 9 66.00
*/