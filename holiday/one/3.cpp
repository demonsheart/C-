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
题目描述
 在前面章节内容里已经学习了数组和指针之间的关系，现在对象数组练习题的基础上，把对象数组改为对象指针重新实现同一功能，看看使用对象指针与普通类型指针有何不同？比如要构造三个学生类对象，只能使用指针动态分配方法实现（new 指令），最后，我们对初始化后的n个对象中的姓名字段属性按升序排序，输出排序后的各对象姓名属性，特别要注意的是对对象指针初始化需要注意什么（提示：可以在类外面定义一个方法，该方法的参数是对象指针/数组，对传入的对象按要求进行排序输出）。

输入
第一行输入需要n个测试对象

每行依次输入各对象的属性

输出
输出排好序后的对象姓名属性，每行一个

样例输入
2
Tom 男 2012222222 计算机学院 13333333333
John 男 2013333333 计算机学院 12444444444
样例输出
John
Tom
提示
 字符串比较可以用strcmp函数


或者string类型的compare方法
*/