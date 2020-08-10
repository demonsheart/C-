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
��Ŀ����
1���������µ���̳нṹ��

1)һ������CVehicle��Ϊ���࣬����max_speed��speed��weight�����ݳ�Ա��display()�ȳ�Ա����

2)��CVehicle�����������г���CBicycle��������ԣ��߶�height

3)��CVehicle��������������CMotocar��������ԣ���λ��seat_num

4)��CBicycle��CMotocar������Ħ�г���CMotocycle

2���ֱ���������Ĺ��캯�����������display����������������Ҫ����

3�����������ж��������Ķ��󣬲�����֮��ͨ���������display�������������

����
��һ�У�����ٶ� �ٶ� ���� �ڶ��У��߶� �����У���λ��

���
��һ�У�Vehicle: �ڶ��м��Ժ���У���ʽ��Sample

��������
100 60 20
28
2
�������
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