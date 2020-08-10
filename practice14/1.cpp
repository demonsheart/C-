#include <iostream>
#include <string>
using namespace std;
class CPeople
{
protected:
    string name, sex;
    int age;

public:
    CPeople() {}
    CPeople(string n, string s, int a) : name(n), sex(s), age(a) {}
    void print()
    {
        cout << "People:\n"
             << "Name: " << name << "\nSex: " << sex << "\nAge: " << age << "\n"
             << endl;
    }
};

class CStudent : virtual public CPeople
{
protected:
    string no;
    float score;

public:
    CStudent(string no, float sc)
    {
        this->no = no;
        score = sc;
    }
    void print()
    {
        cout << "Student:\n"
             << "Name: " << name << "\nSex: " << sex << "\nAge: "
             << age << "\nNo.: " << no << "\nScore: " << score << "\n"
             << endl;
    }
};

class CTeacher : virtual public CPeople
{
protected:
    string position;
    string department;

public:
    CTeacher(string p, string d) : position(p), department(d) {}
    void print()
    {
        cout << "Teacher:\n"
             << "Name: " << name << "\nSex: " << sex << "\nAge: "
             << age << "\nPosition: " << position << "\nDepartment: " << department << "\n"
             << endl;
    }
};

class CGradOnWork : public CStudent, public CTeacher
{
private:
    string direction;
    string tutor;

public:
    CGradOnWork(string no, float sc, string p, string d, string a, string b,
    string name,string sex, int age) : CStudent(no, sc), CTeacher(p, d),CPeople(name,sex,age)
    {
        direction = a;
        tutor = b;
    }
    void print()
    {
        cout << "GradOnWork:\n"
             << "Name: " << name << "\nSex: " << sex << "\nAge: "
             << age << "\nNo.: " << no << "\nScore: " << score
             << "\nPosition: " << position << "\nDepartment: "
             << department << "\nDirection: " << direction << "\nTutor: " << tutor << "\n"
             << endl;
    }
};

int main()
{
    string name,sex,no,position,department,director,tutor;
    int age;
    float score;

    cin>>name>>sex>>age>>no>>score>>position>>department>>director>>tutor;

    CGradOnWork s(no,score,position,department,director,tutor,name,sex,age);

    s.CPeople::print();
    s.CStudent::print();
    s.CTeacher::print();
    s.CGradOnWork::print();

    return 0;
}
/*
题目描述
1、建立如下的类继承结构：

1)        定义一个人员类CPeople，其属性（保护类型）有：姓名、性别、年龄；

2)        从CPeople类派生出学生类CStudent，添加属性：学号和入学成绩；

3)        从CPeople类再派生出教师类CTeacher，添加属性：职务、部门；

4)        从CStudent和CTeacher类共同派生出在职研究生类CGradOnWork，添加属性：研究方向、导师；

2、分别定义以上类的构造函数、输出函数print及其他函数（如需要）。

3、在主函数中定义各种类的对象，并测试之。

输入
第一行：姓名性别年龄
第二行：学号成绩
第三行：职务部门
第四行：研究方向导师
输出
第一行：People:
第二行及以后各行：格式见Sample
样例输入
wang-li m 23
2012100365 92.5
assistant computer
robot zhao-jun
样例输出
People:
Name: wang-li
Sex: m
Age: 23

Student:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5

Teacher:
Name: wang-li
Sex: m
Age: 23
Position: assistant
Department: computer

GradOnWork:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5
Position: assistant
Department: computer
Direction: robot
Tutor: zhao-jun
*/