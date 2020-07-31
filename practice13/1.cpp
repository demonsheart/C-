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