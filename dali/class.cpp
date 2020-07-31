#include<iostream>
#include<string.h>
using namespace std;
class CStudent
{
private:
    char name[10];
    unsigned long id;
    float fee_paid;
    float credit;
    void init()
    {
        fee_paid = 0.0;
        credit = 0.0;
    }
public:
    void set(char *p_name, unsigned long id_val);
    void payFee(float fee_val);
    void attendCourse(float credit_val);
    void print()
    {
        cout<<"������"<<name<<" ѧ�ţ�"<<id<<endl;
        cout<<"�Ѹ�ѧ�ѣ�"<<fee_paid<<endl;
        cout<<"����ѧ�֣�"<<credit<<endl;
    }
};
void CStudent::set(char *p_name, unsigned long id_val)
{
    strcpy(name, p_name);
    id = id_val;
    init();
}
void CStudent::payFee(float fee_val)
{
    fee_paid += fee_val;
}
void CStudent::attendCourse(float credit_val)
{
    credit += credit_val;
}
int main()
{
    CStudent s1,s2;
    CStudent *p_student = &s2;
    s1.set("����",2000121);
    s1.payFee(4800.0);
    s1.attendCourse(23.5);
    s1.print();
    p_student->set("����",2000131);
    (*p_student).payFee(4500.0);
    s2.attendCourse(18.0);
    p_student->print();
}
