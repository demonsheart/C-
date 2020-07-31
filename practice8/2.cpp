#include<iostream>
using namespace std;
class Date
{
private:
    int year, month, day;
public:
    Date(){year = month = day = 0;}
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
    ~Date();
};
Date::~Date()
{
}
class VIP
{
private:
    int id;
    Date birth;
public:
    VIP(){id = 0;};
    void set(int no, int y, int m, int d)
    {
        id = no;
        birth.setYear(y);
        birth.setMonth(m);
        birth.setDay(d);
    }
    int getID(){return id;}
    float Discount(Date &d);
};
float VIP::Discount(Date &d)
{
    if(birth.getDay()==d.getDay() && birth.getMonth()==d.getMonth())
     return 0.5;
    else 
     return 0.95;
}
int main()
{
    int id,y,m,d,t;
    float dis;
    cin>>y>>m>>d;
    Date today(y,m,d);
    cin>>t;
    VIP v[t];
    float *p = new float[t];
    for (int i = 0; i < t; i++)
    {
        cin>>id>>y>>m>>d;
        v[i].set(id, y, m, d);
        cin>>p[i];
    }
    for (int i = 0; i < t; i++)
    {
        dis = v[i].Discount(today);
        p[i] = p[i]*dis;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<v[i].getID()<<"'s consumption is "<<int(p[i])<<endl;
    }
    delete [] p;
    return 0;
}