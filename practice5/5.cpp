#include <iostream>
#include <string.h>
using namespace std;
class CStudent
{
private:
    string name, id, college, major, sex, dormitory, tel;

public:
    void set(string name, string id, string college, string major, string sex, string dormitory, string tel)
    {
        this->name = name;
        this->id = id;
        this->college = college;
        this->major = major;
        this->sex = sex;
        this->dormitory = dormitory;
        this->tel = tel;
    }
    void print()
    {
        cout << name << " " << id << " " << college << " " << major << " " << sex << " " << dormitory << " " << tel << endl;
    }
};

int main()
{
    int n;
    string name, id, college, major, sex, dormitory, tel;
    cin >> n;
    CStudent s;
    while (n--)
    {
        cin >> name >> id >> college >> major >> sex >> dormitory >> tel;
        s.set(name, id, college, major, sex, dormitory, tel);
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