#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    string no; //���
public:
    Vehicle(string n) : no(n) {}
    virtual int display() = 0; //Ӧ�շ���
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
��Ŀ����
����Ҫ����һ��ϵͳ��ʵ�ֶԶ����������շѹ����� ����������������ʾ��

class Vehicle

{ protected:

string no;//���

public:

virtual void display()=0;//Ӧ�շ���

}

��VehicleΪ���࣬������Car��Truck��Bus�����ࡣ

Car���շѹ�ʽΪ�� �ؿ���*8+����*2

Truck���շѹ�ʽΪ������*5

Bus���շѹ�ʽΪ�� �ؿ���*3

���������ಢ��д��������Ҫ������������һ������ָ��Vehicle *pv;�����������á�

�����������������Ϣ����Ӧ����Car,Truck��Bus����󣬶���Car�����ؿ�����������Truck����������Bus�����ؿ����������ؿ�����������Ϊ������

����
��һ�б�ʾ���Դ������ӵڶ��п�ʼ��ÿ����������ռһ�У�ÿ�������������£��������ͣ�1Ϊcar��2ΪTruck��3ΪBus������š�������Ϣ��Car���ؿ�����������Truck����������Bus�����ؿ�������

���
���ı�š�Ӧ�ɷ���

��������
4
1 002 20 5
3 009 30
2 003 50
1 010 17 6
�������
002 170
009 90
003 250
010 148
*/