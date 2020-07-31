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