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
/*
��Ŀ����
�����3���࣬�ֱ���ѧ����Student����������Undergraduate���о�����Postgraduate������Student���ǻ��࣬������������ѧ����Ϣ������������𣨱����������о���������ѧ�γ̣�����ٶ�Ϊ3�ſΣ��������ʾ���ɼ��ͳɼ��ȼ��ȣ�Undergraduate���Postgraduate����Student��������࣬����֮�����Ҫ����Ǽ���3�ſγ�ƽ���ɼ��ȼ��ķ���������ͬ���о����ı�׼Ҫ�ȱ������ı�׼��һЩ�����±���ʾ��

��������׼

�о�����׼

80����80��~100  ����

90����90��~100  ����

70����70��~80   ����

80����80��~90   ����

60����60��~70   һ��

70����70��~80   һ��

50����50��~60   ����

60����60��~70   ����

  50����  ������

  60����  ������

 

ѧ��Student������������ʾ��

class Student{

protected:

   string name; //ѧ������

   int type; //ѧ�����:1��ʾ��������2��ʾ�о���

   int courses[3]; //3�ſεĳɼ�

   string courseGrade; //�ɼ��ȼ�

public:

   Student(string n,string t,int a1,int a2,int a3);//���췽��

   virtual void calculateGrade()=0;//����ɼ��ȼ�

   void print();//�����Ϣ

};

��StudentΪ���࣬������Undergraduate��Postgraduate�����ࡣ

���������ಢ��д��������Ҫ������������һ������ָ�룬���ɻ��ද̬���飬�������������

����
��һ�б�ʾ���Դ������ӵڶ��п�ʼ��ÿ����������ռһ�У�ÿ�������������£�ѧ��������ѧ�����1Ϊ��������2Ϊ�о�������3�ſεĳɼ���

���
ѧ����������𡢳ɼ��ȼ�

��������
5
���� 1 90 95 100
���� 1 80 85 90
���� 2 82 85 88
���� 1 75 82 87
���� 2 80 82 84
�������
����,������,����
����,������,����
����,�о���,����
����,������,����
����,�о���,����
*/