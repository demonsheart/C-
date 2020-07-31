#include <iostream>
#include <string>
using namespace std;
class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string nam, int ag) : name(nam), age(ag) {}
    virtual void speak() {}
};
class Tiger : public Animal
{
private:
    string voice;

public:
    Tiger(string nam, int ag) : Animal(nam, ag) { voice = "AOOO"; }
    void speak() { cout << "Hello,I am " << name << "," << voice << "." << endl; }
};
class Dog : public Animal
{
private:
    string voice;

public:
    Dog(string nam, int ag) : Animal(nam, ag) { voice = "WangWang"; }
    void speak() { cout << "Hello,I am " << name << "," << voice << "." << endl; }
};

class Duck : public Animal
{
private:
    string voice;

public:
    Duck(string nam, int ag) : Animal(nam, ag) { voice = "GAGA"; }
    void speak() { cout << "Hello,I am " << name << "," << voice << "." << endl; }
};
class Pig : public Animal
{
private:
    string voice;

public:
    Pig(string nam, int ag) : Animal(nam, ag) { voice = "HENGHENG"; }
    void speak() { cout << "Hello,I am " << name << "," << voice << "." << endl; }
};
int main()
{
    int t, age;
    string type, name;
    Animal *p;

    cin >> t;
    while (t--)
    {
        cin >> type >> name >> age;
        if (type == "Tiger")
        {
            p = new Tiger(name, age);
            p->speak();
        }
        else if (type == "Dog")
        {
            p = new Dog(name, age);
            p->speak();
        }
        else if (type == "Duck")
        {
            p = new Duck(name, age);
            p->speak();
        }
        else if (type == "Pig")
        {
            p = new Pig(name, age);
            p->speak();
        }
        else
        {
            cout << "There is no " << type << " in our Zoo." << endl;
        }
    }
    return 0;
}