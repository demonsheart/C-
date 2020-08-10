#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
private:
    static int TotalCustNum;
    static int Rent;
    static int Year;
    int CustID;
    char *CustName;

public:
    Customer(char *name);
    ~Customer();
    static void changeYear(int r);
    void Display();
};
int Customer::TotalCustNum = 0;
int Customer::Rent = 150;
int Customer::Year = 2014;
Customer::Customer(char *name)
{
    CustName = new char[20];
    strcpy(CustName, name);
    TotalCustNum++;
    CustID = Year * 10000 + TotalCustNum;
}
void Customer::changeYear(int r)
{
    Year = r;
}
void Customer::Display()
{
    cout << CustName << " " << CustID << " " << CustID % 10 << " " << CustID % 10 * 150 << endl;
}
Customer::~Customer()
{
    delete[] CustName;
}

int main()
{
    int t, year, c = 0;
    char *name = new char[20];
    Customer **s;
    s = new Customer *[10];
    cin >> t;
    while (t--)
    {
        cin >> year;
        Customer::changeYear(year);
        for (int i = c; i < 20; i++)
        {
            cin >> name;
            if (strcmp(name, "0") == 0)
                break;
            s[i] = new Customer(name);
            c++;
        }
    }
    for (int i = 0; i < c; i++)
        (*s[i]).Display();
    delete[] name;
    delete s;
    return 0;
}
/*
题目描述
编写程序，实现某旅馆的客人住宿记录功能。

定义一个Customer类，要求输入客人的姓名，创建一个Customer对象。类声明如下：



调用类的Display函数输出客人ID（输出顺序号占4位，如第1位为0001，第2位为0002，依此类推）、姓名、总人数。总人数和客人租金用静态成员，其他属性采用普通的数据成员。

输入
输入测试次数t

对于每次测试，首先输入当前年份，

接下来依次输入顾客姓名，0表示输入结束。

输出
每行依次输出顾客信息和旅馆信息。包括顾客姓名，顾客编号，旅馆入住总人数，旅馆当前总收入。

样例输入
2
2014
张三 李四 王五 0
2015
Cindy David 0
样例输出
张三 20140001 1 150
李四 20140002 2 300
王五 20140003 3 450
Cindy 20150004 4 600
David 20150005 5 750
*/