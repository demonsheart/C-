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
��Ŀ����
1���������µ���̳нṹ��

1)        ����һ����Ա��CPeople�������ԣ��������ͣ��У��������Ա����䣻

2)        ��CPeople��������ѧ����CStudent��������ԣ�ѧ�ź���ѧ�ɼ���

3)        ��CPeople������������ʦ��CTeacher��������ԣ�ְ�񡢲��ţ�

4)        ��CStudent��CTeacher�๲ͬ��������ְ�о�����CGradOnWork��������ԣ��о����򡢵�ʦ��

2���ֱ���������Ĺ��캯�����������print����������������Ҫ����

3�����������ж��������Ķ��󣬲�����֮��

����
��һ�У������Ա�����
�ڶ��У�ѧ�ųɼ�
�����У�ְ����
�����У��о�����ʦ
���
��һ�У�People:
�ڶ��м��Ժ���У���ʽ��Sample
��������
wang-li m 23
2012100365 92.5
assistant computer
robot zhao-jun
�������
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