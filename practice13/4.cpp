#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    string name;        //学生姓名
    string type;        //学生类别:1表示本科生，2表示研究生
    int courses[3];     //3门课的成绩
    string courseGrade; //成绩等级
public:
    Student(string n, int t, int a1, int a2, int a3) : name(n)
    {
        if (t == 1)
            type = "本科生";
        else if (t == 2)
            type = "研究生";
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
            courseGrade = "优秀";
        else if (avg >= 70 && avg < 80)
            courseGrade = "良好";
        else if (avg >= 60 && avg < 70)
            courseGrade = "一般";
        else if (avg >= 50 && avg < 60)
            courseGrade = "及格";
        else if (avg < 50)
            courseGrade = "不及格";
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
            courseGrade = "优秀";
        else if (avg >= 80 && avg < 90)
            courseGrade = "良好";
        else if (avg >= 70 && avg < 80)
            courseGrade = "一般";
        else if (avg >= 60 && avg < 70)
            courseGrade = "及格";
        else if (avg < 60)
            courseGrade = "不及格";
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