#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    string no; //编号
public:
    Vehicle(string n) : no(n) {}
    virtual int display() = 0; //应收费用
};
class Car : public Vehicle
{
private:
    int num;
    int weight;

public:
    Car(string a, int n, int w) : Vehicle(a), num(n), weight(w) {}
    int display()
    {
        return num * 8 + weight * 2;
    }
};
class Truck : public Vehicle
{
private:
    int weight;

public:
    Truck(string a, int w) : Vehicle(a), weight(w) {}
    int display()
    {
        return weight * 5;
    }
};
class Bus : public Vehicle
{
private:
    int num;

public:
    Bus(string a, int n) : Vehicle(a), num(n) {}
    int display()
    {
        return num * 3;
    }
};

int main()
{
    int t, temp, num, weight;
    string no;
    Vehicle *pv;

    cin >> t;
    while (t--)
    {
        cin >> temp;
        if (temp == 1)
        {
            cin >> no >> num >> weight;
            pv = new Car(no, num, weight);
            cout << no << " " << pv->display() << endl;
        }
        else if (temp == 2)
        {
            cin >> no >> weight;
            pv = new Truck(no, weight);
            cout << no << " " << pv->display() << endl;
        }
        if (temp == 3)
        {
            cin >> no >> num;
            pv = new Bus(no, num);
            cout << no << " " << pv->display() << endl;
        }
    }
    return 0;
}
/*
题目描述
现在要开发一个系统，实现对多种汽车的收费工作。 汽车基类框架如下所示：

class Vehicle

{ protected:

string no;//编号

public:

virtual void display()=0;//应收费用

}

以Vehicle为基类，构建出Car、Truck和Bus三个类。

Car的收费公式为： 载客数*8+重量*2

Truck的收费公式为：重量*5

Bus的收费公式为： 载客数*3

生成上述类并编写主函数，要求主函数中有一个基类指针Vehicle *pv;用来做测试用。

主函数根据输入的信息，相应建立Car,Truck或Bus类对象，对于Car给出载客数和重量，Truck给出重量，Bus给出载客数。假设载客数和重量均为整数。

输入
第一行表示测试次数。从第二行开始，每个测试用例占一行，每行数据意义如下：汽车类型（1为car，2为Truck，3为Bus）、编号、基本信息（Car是载客数和重量，Truck给出重量，Bus给出载客数）。

输出
车的编号、应缴费用

样例输入
4
1 002 20 5
3 009 30
2 003 50
1 010 17 6
样例输出
002 170
009 90
003 250
010 148
*/