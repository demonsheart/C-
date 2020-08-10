#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    string sex;
    string no;
    string institude;
    string phone;

public:
    Student(string _name, string _sex, string _no, string _institude, string _phone)
    {
        name = _name;
        sex = _sex;
        no = _no;
        institude = _institude;
        phone = _phone;
    }
    void print()
    {
        cout << name << endl;
    }
    friend bool cmp(const Student &s1, const Student &s2);
};

bool cmp(const Student &s1, const Student &s2)
{
    return s1.name < s2.name;
}
int main()
{
    int n;
    string name, sex, no, institude, phone;
    vector<Student> v;

    cin >> n;
    while (n--)
    {
        cin >> name >> sex >> no >> institude >> phone;
        Student s(name, sex, no, institude, phone);
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        it->print();
    }
    return 0;
}
/*
��Ŀ����
 ��ǰ���½��������Ѿ�ѧϰ�������ָ��֮��Ĺ�ϵ�����ڶ���������ϰ��Ļ����ϣ��Ѷ��������Ϊ����ָ������ʵ��ͬһ���ܣ�����ʹ�ö���ָ������ͨ����ָ���кβ�ͬ������Ҫ��������ѧ�������ֻ��ʹ��ָ�붯̬���䷽��ʵ�֣�new ָ���������ǶԳ�ʼ�����n�������е������ֶ����԰�����������������ĸ������������ԣ��ر�Ҫע����ǶԶ���ָ���ʼ����Ҫע��ʲô����ʾ�������������涨��һ���������÷����Ĳ����Ƕ���ָ��/���飬�Դ���Ķ���Ҫ����������������

����
��һ��������Ҫn�����Զ���

ÿ��������������������

���
����ź����Ķ����������ԣ�ÿ��һ��

��������
2
Tom �� 2012222222 �����ѧԺ 13333333333
John �� 2013333333 �����ѧԺ 12444444444
�������
John
Tom
��ʾ
 �ַ����ȽϿ�����strcmp����


����string���͵�compare����
*/