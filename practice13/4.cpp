#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;        //ѧ������
    string type;        //ѧ�����:1��ʾ��������2��ʾ�о���
    int courses[3];     //3�ſεĳɼ�
    string courseGrade; //�ɼ��ȼ�
public:
    Student(string n, int t, int a1, int a2, int a3) : name(n)
    {
        if (t == 1)
            type = "������";
        else if (t == 2)
            type = "�о���";
        courses[0] = a1;
        courses[1] = a2;
        courses[2] = a3;
    }

    virtual void calculateGrade() = 0;
    void print()
    {
        cout << name << "," << type << "," << courseGrade << endl;
    }
};
class Undergraduate : public Student
{
private:
    /* data */
public:
    Undergraduate(string n, int t, int a1, int a2, int a3) : Student(n, t, a1, a2, a3) {calculateGrade();}
    void calculateGrade()
    {
        int avg = (courses[0] + courses[1] + courses[2]) / 3;
        if (avg >= 80 && avg <= 100)
            courseGrade = "����";
        else if (avg >= 70 && avg < 80)
            courseGrade = "����";
        else if (avg >= 60 && avg < 70)
            courseGrade = "һ��";
        else if (avg >= 50 && avg < 60)
            courseGrade = "����";
        else if (avg < 50)
            courseGrade = "������";
    }
};

class Postgraduate : public Student
{
private:
    /* data */
public:
    Postgraduate(string n, int t, int a1, int a2, int a3) : Student(n, t, a1, a2, a3) {calculateGrade();}
    void calculateGrade()
    {
        int avg = (courses[0] + courses[1] + courses[2]) / 3;
        if (avg >= 90 && avg <= 100)
            courseGrade = "����";
        else if (avg >= 80 && avg < 90)
            courseGrade = "����";
        else if (avg >= 70 && avg < 80)
            courseGrade = "һ��";
        else if (avg >= 60 && avg < 70)
            courseGrade = "����";
        else if (avg < 60)
            courseGrade = "������";
    }
};

int main()
{
    int q, t, a1, a2, a3, i = 0;
    string n;

    cin >> q;
    Student *s[q];

    while (q--)
    {
        cin >> n >> t >> a1 >> a2 >> a3;
        if(t==1)
        s[i] = new Undergraduate(n,t,a1,a2,a3);
        else if(t==2)
        s[i] = new Postgraduate(n,t,a1,a2,a3);
        (*(s[i++])).print();
    }
    return 0;
}