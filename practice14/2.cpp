#include <iostream>
#include <string>
using namespace std;
class CVehicle
{
protected:
    int max_speed, speed, weight;

public:
    CVehicle() {}
    CVehicle(int a, int b, int c) : max_speed(a), speed(b), weight(c) {}
    virtual void display()
    {
        cout << "Vehicle:\nmax_speed:" << max_speed << "\nspeed:" << speed
             << "\nweight:" << weight << "\n"
             << endl;
    }
};

class CBycicle : virtual public CVehicle
{
protected:
    int height;

public:
    CBycicle(int a, int b, int c, int h) : CVehicle(a, b, c), height(h) {}
    CBycicle(int h) : height(h) {}
    void display()
    {
        cout << "Bicycle:\nmax_speed:" << max_speed << "\nspeed:" << speed
             << "\nweight:" << weight << "\nheight:" << height << "\n"
             << endl;
    }
};

class CMotocar : virtual public CVehicle
{
protected:
    int seat_num;

public:
    CMotocar(int a, int b, int c, int s) : CVehicle(a, b, c), seat_num(s) {}
    CMotocar(int s) : seat_num(s) {}
    void display()
    {
        cout << "Motocar:\nmax_speed:" << max_speed << "\nspeed:" << speed
             << "\nweight:" << weight << "\nseat_num:" << seat_num << "\n"
             << endl;
    }
};

class CMotocycle : public CBycicle, public CMotocar
{
private:
public:
    CMotocycle(int a, int b, int c, int h, int s) : CVehicle(a, b, c), CBycicle(h), CMotocar(s) {}
    void display()
    {
        cout << "Motocycle:\nmax_speed:" << max_speed << "\nspeed:" << speed
             << "\nweight:" << weight << "\nheight:" << height << "\nseat_num:" << seat_num
             << "\n"
             << endl;
    }
};

int main()
{
    int max, speed, weight, height, seat;

    cin >> max >> speed >> weight >> height >> seat;

    CVehicle v1(max, speed, weight);
    v1.display();

    CBycicle v2(max, speed, weight, height);
    v2.display();

    CMotocar v3(max, speed, weight, seat);
    v3.display();

    CMotocycle v4(max, speed, weight, height, seat);
    v4.display();

    return 0;
}
/*
题目描述
1、建立如下的类继承结构：

1)一个车类CVehicle作为基类，具有max_speed、speed、weight等数据成员，display()等成员函数

2)从CVehicle类派生出自行车类CBicycle，添加属性：高度height

3)从CVehicle类派生出汽车类CMotocar，添加属性：座位数seat_num

4)从CBicycle和CMotocar派生出摩托车类CMotocycle

2、分别定义以上类的构造函数、输出函数display及其他函数（如需要）。

3、在主函数中定义各种类的对象，并测试之，通过对象调用display函数产生输出。

输入
第一行：最高速度 速度 重量 第二行：高度 第三行：座位数

输出
第一行：Vehicle: 第二行及以后各行：格式见Sample

样例输入
100 60 20
28
2
样例输出
Vehicle:
max_speed:100
speed:60
weight:20

Bicycle:
max_speed:100
speed:60
weight:20
height:28

Motocar:
max_speed:100
speed:60
weight:20
seat_num:2

Motocycle:
max_speed:100
speed:60
weight:20
height:28
seat_num:2
*/