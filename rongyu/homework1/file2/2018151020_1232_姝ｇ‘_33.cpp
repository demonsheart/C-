#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
class Vehicle
{
protected:
    string no;//编号
public:
    Vehicle(string _no):no(_no){}
    virtual void display()=0;//应收费用
};
class Car:public Vehicle
{
protected:
    int weight,number;
public:
    Car(string _no,int we,int n):Vehicle(_no),weight(we),number(n)
    {
    }
    void display()
    {
        cout<<no<<" "<<number*8+weight*2<<endl;
    }
};
class Truck:public Vehicle
{
protected:
    int weight;
public:
    Truck(string _no,int we):Vehicle(_no),weight(we){}
    void display()
    {
         cout<<no<<" "<<weight*5<<endl;
    }
};
class Bus:public Vehicle
{
protected:
    int number;
public:
    Bus(string _no,int n):Vehicle(_no),number(n){}
    void display()
    {
         cout<<no<<" "<<number*3<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    int order;
    while(t--)
    {
        string _no;
        cin>>order;
        if(order==1)
        {
            int we,n;
            cin>>_no>>n>>we;
            Car C(_no,we,n);
            C.display();
        }
        else if(order==2)
        {
            int we;
            cin>>_no>>we;
            Truck T(_no,we);
            T.display();
        }
        else if(order==3)
        {
            int n;
            cin>>_no>>n;
            Bus B(_no,n);
            B.display();
        }
    }
    return 0;
}

