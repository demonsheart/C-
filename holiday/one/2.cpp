#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    string name;
    string sex;
    string institude;
    string post1;
    string post2;
    string edu;
    string office;
    string phone;

public:
    Teacher(string _name, string _sex, string _institude, string _post1, string _post2, string _edu, string _office, string _phone)
    {
        name = _name;
        sex = _sex;
        institude = _institude;
        post1 = _post1;
        post2 = _post2;
        edu = _edu;
        office = _office;
        phone = _phone;
    }
    void print()
    {
        cout << name << " " << sex << " " << institude << " " << post1 << " " << post2 << " " << edu << " " << office << " " << phone << endl;
    }
};

int main()
{
    int n;
    string name, sex, institude, post1, post2, edu, office, phone;

    cin >> n;

    while (n--)
    {
        cin >> name >> sex >> institude >> post1 >> post2 >> edu >> office >> phone;
        Teacher s(name, sex, institude, post1, post2, edu, office, phone);
        s.print();
    }
    return 0;
}
/*
��Ŀ����
��ǰ��ѧ��������ϣ�У԰�ﻹ��������ͬԺϵ����ʦ����˼����ʦ�����Teacher�ð�����Щ���Ժͷ���������ѧ����ȣ���ʦ���Ծ�Ҫ���ְ�ơ�ְ��ѧ������Ϣ��������Ҫѧ�š�רҵ����Ϣ������һ�������Ľ�ʦ�ඨ�壺Teacher�����������n���������ĸ�������ֵ��

����
��һ������n����������

ÿһ������һ����ʦ����ĸ������ԣ��Դ�����

���
ÿ�����һ����ʦ����ĸ������ԣ���������Դ�����

��������
2
ChenGL �� �����ѧԺ Ժ�� Ժʿ ���� �칫¥332 13888888888
MingZ �� �����ѧԺ ����Ժ�� ���� ��ʿ ����837 13777777777
�������
ChenGL �� �����ѧԺ Ժ�� Ժʿ ���� �칫¥332 13888888888
MingZ �� �����ѧԺ ����Ժ�� ���� ��ʿ ����837 13777777777
*/