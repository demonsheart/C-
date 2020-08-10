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
题目描述
在前面学生类基础上，校园里还包含各不同院系的老师，请思考教师这个类Teacher该包含哪些属性和方法？（与学生相比，教师属性就要添加职称、职务、学历等信息，但不需要学号、专业等信息）给出一个完整的教师类定义：Teacher，并测试输出n个该类对象的各项属性值。

输入
第一行输入n个测试用例

每一行输入一个教师对象的各项属性，以此类推

输出
每行输出一个教师对象的各个属性，后面各行以此类推

样例输入
2
ChenGL 男 计算机学院 院长 院士 本科 办公楼332 13888888888
MingZ 男 计算机学院 常务副院长 教授 博士 南区837 13777777777
样例输出
ChenGL 男 计算机学院 院长 院士 本科 办公楼332 13888888888
MingZ 男 计算机学院 常务副院长 教授 博士 南区837 13777777777
*/