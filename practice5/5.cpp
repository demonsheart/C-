#include<iostream>
#include<string.h>
using namespace std;
class CStudent
{
private:
    string name, id, college, major, sex, dormitory, tel;
public:
    void set(string name, string id, string college, string major, string sex, string dormitory, string tel)
    {
        this->name = name;
        this->id = id;
        this->college = college;
        this->major = major;
        this->sex = sex;
        this->dormitory = dormitory;
        this->tel = tel;
    }
    void print()
    {
        cout<<name<<" "<<id<<" "<<college<<" "<<major<<" "<<sex<<" "<<dormitory<<" "<<tel<<endl;
    }
};


int main()
{
    int n;
    string name, id, college, major, sex, dormitory, tel;
    cin>>n;
    CStudent s;
    while (n--)
    {
        cin>>name>>id>>college>>major>>sex>>dormitory>>tel;
        s.set(name, id, college, major, sex, dormitory, tel);
        s.print();
    }
    return 0;
}