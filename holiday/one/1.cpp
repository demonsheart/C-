#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    string no;
    string institude;
    string specialty;
    string sex;
    string dorm;
    string phone;

public:
    Student(string _name, string _no, string _institude, string _specialty, string _sex, string _dorm, string _phone)
    {
        name = _name;
        no = _no;
        institude = _institude;
        specialty = _specialty;
        sex = _sex;
        dorm = _dorm;
        phone = _phone;
    }
    void print()
    {
        cout << name << " " << no << " " << institude << " " << specialty << " " << sex << " " << dorm << " " << phone << endl;
    }
};

int main()
{
    int n;
    string name, no, institude, specialty, sex, dorm, phone;

    cin >> n;

    while (n--)
    {
        cin >> name >> no >> institude >> specialty >> sex >> dorm >> phone;
        Student s(name, no, institude, specialty, sex, dorm, phone);
        s.print();
    }
    return 0;
}
/*
��Ŀ����
   ������������Ƶ����ľ��ǰѿ͹��������Ϊ����������һ�ζδ��룬У԰���������ѧ����������ѧ�������ܶ����ԣ�����������ѧ�š�����ѧԺ��רҵ���Ա�סַ����ϵ�绰�������������ȵȣ�����Щ���ԣ���Ҫ�������ǵĶ����������ȡ������������������ȡѧ�š�����ѧ�š������������ȵȣ���������ǿ���˵�����Ժͷ������������Ժͷ������������з��ʿ��Ʒ�ʽ���ƣ���ʾΪpublic��private��protected�ȣ��������ϵ���Ϣ�������һ��������ѧ���ඨ�壺Student�����������n���������ĸ�������ֵ��

����
��һ�б�ʾҪ����n������

�����������벻ͬ����ĸ�����ֵ��ÿ������һ�С�

���
�����ͬ����ĸ�������

ÿ������ռһ��

��������
2
WangHai 2014150112 ����� �������ѧ�뼼�� �� ����215 13760222222
LiBin 2013151292 ����� ������� �� ����318 13677777777
�������
WangHai 2014150112 ����� �������ѧ�뼼�� �� ����215 13760222222
LiBin 2013151292 ����� ������� �� ����318 13677777777
*/