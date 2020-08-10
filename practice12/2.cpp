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
/*
��Ŀ����
ĳ������԰�ڣ����ϻ�������Ѽ�Ӻ���ȶ������԰�Ĺ���ԱΪÿ�����ﶼ����һ�����֣�����ÿ�����ﶼ�����䡢���ص���Ϣ��ÿ��ιʳ��ʱ�򣬲�ͬ�Ķ��ﶼ��л�(speak)��ÿ�ֶ���Ľл�������ͬ���ϻ��Ľл����ǡ�AOOO�������Ľл����ǡ�WangWang����Ѽ�ӵĽл����ǡ�GAGA������Ľл����ǡ�HENGHENG����

����һ��Animal�Ļ��࣬Animal���к���Speak()���������ϻ�(Tiger)����(Dog)��Ѽ��(Duck)����(Pig)�࣬���ܷ�����ͬ�Ľл��������ı���Ϣ�����������

��д�������붯�����ơ����֡����䣬�ö���԰�ڵĸ��ֶ���л���

Ҫ��ֻʹ��һ������ָ�룬ָ�����ɵĶ��󲢵��÷�����

����
���԰����ĸ���

��һ�ֶ��������  ����  ����

�ڶ��ֶ��������  ���� ����

......

���
�����Ӧ�������Ϣ

��������ڸ��ֶ�����There is no �������� in our Zoo.  ����������ο��������

��������
4
Tiger Jumpjump 10
Pig Piglet 4
Rabbit labi 3
Duck tanglaoya 8
�������
Hello,I am Jumpjump,AOOO.
Hello,I am Piglet,HENGHENG.
There is no Rabbit in our Zoo.
Hello,I am tanglaoya,GAGA.
*/